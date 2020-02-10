#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

#include<STC12C5A60S2.h>
//#include<intrins.h>

bit DS18B20_init(void);
void DS18B20_writedate(int dat);
int DS18B20_readdate(void);
int T_count(void);
#endif
