#include <stdio.h>
#include <wiringPi.h>
#include <wiringPiI2C.h>
#include "inv_mpu.h"
#include "inv_mpu_dmp_motion_driver.h"
/*仅仅是做测试使用，所以main写得尽量简略，明了简单*/
int main (void)
{ 
	if (wiringPiSetup()==-1) 
	{
		printf("wiringPiSetup初始化失败\n");
		return -1;
	}
	if(mpu_dmp_init())
	{
		printf("dmp初始化失败\n");
		return 1;
	}else{
		printf("初始化成功\n");
	}
	float pitch,roll,yaw;

	while(1){ 
		while (mpu_dmp_get_data(&pitch, &roll, &yaw) != 0) {}
		printf("pitch:%f\troll:%f\tyaw:%f\n",pitch,roll,yaw);
	}
	return 0 ;
}


