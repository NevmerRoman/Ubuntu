#ifndef SENDRECV_H
#define SENDRECV_H

#include <iostream>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <memory.h>

#include "bad_cssql_exception.h"

using std::cout;
using std::endl;

namespace ClientServerSQL{

class SendRecv{
public:
    void Send(int, const unsigned int, const char*) noexcept(false);
    string Recv(int);

    SendRecv() = default;
    ~SendRecv() = default;
private:
    int findErrRecv(int) const noexcept(false);
};

}
#endif // SENDRECV_H
