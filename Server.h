#include <QTcpServer>
#include "QUnixSocket.h"

class Server: public QTcpServer {
	Q_OBJECT;
public:
	Server();

protected:
	void incomingConnection(int socketDescriptor);

private:
	QUnixSocket *s;
};

