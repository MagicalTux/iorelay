#include <QTcpSocket>

class Client: public QTcpSocket {
	Q_OBJECT;

public:
	Client(QObject *parent = 0);

public slots:
	void message(const QByteArray&);
};

