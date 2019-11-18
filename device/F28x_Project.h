/*****************************************************
 * 文件名称:F28x_Project.h
 * 文件说明:全局头文件
 * 功能说明:
 * 完成时间:
 *    版本:
 * 修改记录:
 *****************************************************/
#ifndef F28X_PROJECT_H
#define F28X_PROJECT_H
//************************全局头文件************************
//----------------------C基础头文件-----------------------
#include <stdbool.h>
#include <stdint.h>
#include <string.h>
//----------------------CLA头文件-----------------------
#include "f28004x_cla_typedefs.h"
//----------------------header头文件--------------------
#include "f28004x_device.h"
//----------------------Example头文件-------------------
#include "f28004x_examples.h"
//----------------------driverlib头文件-----------------
#include "driverlib.h"
//----------------------flash_api_lib头文件-------------
#include "F021_F28004x_C28x.h"
//----------------------device头文件--------------------
#include "device.h"
/******************************************************
函数名称:USER_getLibVersion
函数描述：获取使用的driverlib库版本
输入参数:
返回值:
******************************************************/
static inline
Uint32 USER_getLibVersion()
{
   return(Version_getLibVersion());
}
/******************************************************
函数名称:USER_getWareVersion
函数描述：获取使用的C2000ware版本
输入参数:
返回值:
******************************************************/
static inline
Uint32 USER_getWareVersion()
{
   return(2000003U);
}
/******************************************************
函数名称:USER_getComplierVersion
函数描述：获取使用的编译器版本
输入参数:
返回值:
******************************************************/
static inline
Uint32 USER_getComplierVersion()
{
   return(180104U);
}
#endif  // end of F28X_PROJECT_H definition

