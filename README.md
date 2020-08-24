# MPU6050-DMP-driver-for-raspi
MPU6050驱动移植到树莓派上，使用MPU6050上的DMP硬件处理获取三个角度pitch，roll，yaw

环境准备

    安装wiringPi

文件介绍 

    一共8个文件，MPU6050.c为测试文件，MPU6050.out为在树莓派zeroW上编译好的可执行文件，将MPU6050连接到树莓派GPIO默认i2c引脚上可以测试一下

编译运行

   进入文件目录下
  
    #:gcc inv_mpu_dmp_motion_driver.c inv_mpu.c MPU6050.c -o MPU6050.out -lm -l wiringPi
