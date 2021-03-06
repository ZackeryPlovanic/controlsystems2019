////////////////////////////////////////////////////////////////////////////////
//                               CONSTANTS.H                                  //
////////////////////////////////////////////////////////////////////////////////
//                                                                            //
// Use this header to store variables that are global for the entire project. //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#pragma once
#define EEPROM_SIZE 0x64

#define BEGINING_ADDR 0x00

#define BNO055_CHIP_ID     0x00
#define BNO055_ACC_ID      0x01
#define BNO055_PAGE_ID     0x07
#define BNO055_ADDR0       0x28
#define BNO055_ADDR1       0x29
#define BNO055_OPR_MODE    0x3D
#define BNO055_PWR_MODE    0x3E
#define BNO055_SYS_TRIGGER 0x3F

#define act_PHASE 5
#define act_ENABLE 17



constexpr int kRotundaPin = 19;		//Servo 1
constexpr int kRotundaPosMin = 0;
constexpr int kRotundaPosmax = 3600;
constexpr double kRotundaStartPos = 1800;
constexpr double kRotundaStartDuty = 50.0;
constexpr double kRotundaFreq = 50;
constexpr double kRotundaPWMMin = 2.5;
constexpr double kRotundaPWMMax = 12.5;

constexpr int kElbowPin = 27;		//Servo 2
constexpr int kElbowLimitMin = 100;
constexpr int kElbowLimitMax = 290;
constexpr double kElbowRange = 300;
constexpr double kElbowStartPos = 150;
constexpr double kElbowFreq = 50;
constexpr double kElbowPWMMin = 2.5;
constexpr double kElbowPWMMax = 12.5;

constexpr uint32_t kMotorFreq = 5000;
constexpr uint32_t kShoulderSigPin = 25;
constexpr uint32_t kShoulderDirPin = 26;
constexpr double kShoulderLimitMin = 5;
constexpr double kShoulderLimitMax = 70;
constexpr uint32_t kShoulderEnablePWMMin = 0;	//percentage
constexpr uint32_t kShoulderEnablePWMMax = 100;	//percentage

constexpr uint32_t kWristLeftSigPin = 0;
constexpr uint32_t kWristLeftDirPin = 2;
constexpr uint32_t kWristRightSigPin = 16;
constexpr uint32_t kWristRightDirPin = 4;	//port 2
constexpr double kWristPitchLimitMin = -90;
constexpr double kWristPitchLimitMax = 90;
constexpr uint32_t kWristEnablePWMMin = 0;	    //percentage
constexpr uint32_t kWristEnablePWMMax = 100;	//percentage


//#define IMU_ADDRESS_ROTUNDA   0x2B
#define IMU_ADDRESS_SHOULDER  0x29
//#define IMU_ADDRESS_ELBOW     0x2A
// #define IMU_ADDRESS_WRIST     0x29
#define BEGINING_ADDR         0x00

#define BNO055_CHIP_ID	      0x00
#define BNO055_ACC_ID         0x01
#define BNO055_PAGE_ID        0x07

#define BNO055_ACC_DATA_X_LSB 0x08
#define BNO055_ACC_DATA_X_MSB 0x09

#define BNO055_EUL_YAW_LSB    0x1A
#define BNO055_EUL_YAW_MSB    0x1B
#define BNO055_EUL_ROLL_LSB   0x1C
#define BNO055_EUL_ROLL_MSB   0x1D
#define BNO055_EUL_PITCH_LSB  0x1E
#define BNO055_EUL_PITCH_MSB  0x1F
#define BNO055_UNIT_SEL       0x3B
#define BNO055_OPR_MODE       0x3D
#define BNO055_PWR_MODE       0x3E
#define BNO055_SYS_TRIGGER    0x3F

#define MPU6050_ACCEL_XOUT_H 0x3B
#define MPU6050_ACCEL_XOUT_L 0x3C
#define MPU6050_ACCEL_YOUT_H 0x3D
#define MPU6050_ACCEL_YOUT_L 0x3E
#define MPU6050_ACCEL_ZOUT_H 0x3F
#define MPU6050_ACCEL_ZOUT_L 0x40
#define MPU6050_TEMP_OUT_H   0x41
#define MPU6050_TEMP_OUT_L   0x42
#define MPU6050_GYRO_XOUT_H  0x43
#define MPU6050_GYRO_XOUT_L  0x44
#define MPU6050_GYRO_YOUT_H  0x45
#define MPU6050_GYRO_YOUT_L  0x46
#define MPU6050_GYRO_ZOUT_H  0x47
#define MPU6050_GYRO_ZOUT_L  0x48

#define MPU6050_ADDR0        0x68
#define MPU6050_ADDR1	     0x69
#define MPU6050_PWR_MGMT_1   0x6B
