#include "Server.h"
#include "Client.h"

Server::Server() {
	s = new QUnixSocket("/www/platform/stable/data/iotransmit.socket", this);
}

void Server::incomingConnection(int socketDescriptor) {
	Client *c = new Client(this);
	c->setSocketDescriptor(socketDescriptor);
	connect(s, SIGNAL(message(const QByteArray&)), c, SLOT(message(const QByteArray&)));
}

