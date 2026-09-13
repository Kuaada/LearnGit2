#include <stdio.h>
#include "device.h"

void show_device_status(void)
{
	printf("Device Monitor v1.1 Start\n");
}

void show_device_ip(const char *ip)
{
	printf("IP:%s\n",ip);
}
