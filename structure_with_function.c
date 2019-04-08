

#include <stdint.h>
struct check_structure {
    

	uint32_t op;      // message op code, message type
    uint8_t htype;   // hardware address type
    uint8_t hlen;    // hardware address length
    uint8_t hops;    // incremented by relay agents
    uint32_t xid;    // transaction ID
};
void receive_from_structure(uint32_t data)
{
    uint32_t a;
    a = data;
    printf("%ld\n",data);
}
int main()
{
    struct check_structure check;
    check.op=255255;
    receive_from_structure(check.op);
    //printf("%d\n",dhcp.op);
    check.htype=24;
    receive_from_structure(check.htype);
    //printf("%d",dhcp.htype);
    return 0;
}
