#include "packet.hpp"

unsigned long long ntohll(unsigned long long val){
    unsigned int low    = val & 0xffffffff;
    unsigned int high   = val >> 32;
    unsigned int hl = ntohl(low);
    unsigned int hh = ntohl(high);
    unsigned long long host = hh << 32;
    host = host & hl;
    return host;
} 

unsigned long long htonll(unsigned long long val){
    unsigned int low    = val & 0xffffffff;
    unsigned int high   = val >> 32;
    unsigned int nl = htonl(low);
    unsigned int nh = htonl(high);
    unsigned long long net = nh << 32;
    net = net & nl;
    return net;
}