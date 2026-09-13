#include <stdio.h>
#include "device.h"

int main()
{
    printf("Device Monitor Start\n");
    show_device_status();
	show_device_ip("192.168.1.100");
    return 0;
}
