#include "Client.h"
#include <qendian.h>

Client::Client(QObject *parent): QTcpSocket(parent) {
}

void Client::message(const QByteArray&d) {
	quint32 len = qToBigEndian((quint32)d.size());
	if (write(QByteArray((char*)&len, 4)+d) != d.length()+4) {
		qDebug("failed to write all pending data, giving up");
		close();
		deleteLater();
	}
}

