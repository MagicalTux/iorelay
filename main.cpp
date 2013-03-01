#include <QCoreApplication>
#include "Server.h"

int main(int argc, char *argv[]) {
	QCoreApplication app(argc, argv);
	Server s;
	s.listen(QHostAddress::Any, 65100);

	return app.exec();
}

