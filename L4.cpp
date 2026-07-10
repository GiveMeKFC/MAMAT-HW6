#include "L4.h"
#include "packets.hpp"

class l4_packet : public generic_packet {
    public:

    bool validate_packet(open_port_vec open_ports,
                                uint8_t ip[IP_V4_SIZE],
                                uint8_t mask,
                                uint8_t mac[MAC_SIZE]) {



    }
    bool proccess_packet(open_port_vec &open_ports,
                                uint8_t ip[IP_V4_SIZE],
                                uint8_t mask,
                                memory_dest &dst) {

    }

    bool as_string(std::string &packet) {

    }


};