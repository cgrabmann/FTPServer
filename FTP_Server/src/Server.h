/*
 * Server.h
 *
 *  Created on: 09.10.2014
 *      Author: Clemens Grabmann
 */

#ifndef SERVER_H_
#define SERVER_H_

#include <string>
#include <thread>
#include <map>
#include "Filemanager.h"
#include "MainSocket.h"
#include "ConnectionSocket.h"
#include "LDAPConnection.h"

class Server {
private:
	MainSocket *mainSocket;
	Filemanager *filemanager;
	LDAPConnection *ldapcon;
	std::map<std::string, std::array<long,2>> *ips;
protected:
public:
	Server(int port, std::string *dir);
	virtual ~Server();

	void start();
};


#endif /* SERVER_H_ */
