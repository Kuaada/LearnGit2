#include <stdio.h>
#include "device.h"

int main()
{
    printf("Device Monitor Start\n");
    show_device_status();
	show_device_ip();
    return 0;
}
