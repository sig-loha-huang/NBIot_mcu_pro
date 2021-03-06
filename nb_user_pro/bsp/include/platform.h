/*******************************************************************************
* COPYRIGHT@ SIGBEAN
********************************************************************************
* 文件名称: platform.h
* 功能描述: 
* 其它说明: 
* 编写日期: 
* 修改历史: 
* 修改日期修改人BugID/CRID      修改内容
* ------------------------------------------------------------------------------
* 
*******************************************************************************/

/******************************** 头文件保护开头 ******************************/
#ifndef __PLATFORM_H__
#define __PLATFORM_H__

/******************************** 包含文件声明 ********************************/

/******************************** 宏和常量定义 ********************************/
#define         NB_STATE_CLOSE          0x00                
#define         NB_STATE_OPEN           0x01
#define         NB_STATE_USIM_READY     0x02
#define         NB_STATE_USIM_OUT       0x03
#define         NB_STATE_ATTACHED       0x04
#define         NB_STATE_DEATACHED      0x05
#define         NB_STATE_UNKNOWN        0xFF

#define         NB_AT_USER_RESP         0x01
#define         NB_AT_AUTO_RESP         0x00

/******************************** 类型定义 ************************************/


typedef struct StrNBStatue_tag
{
    u32 u32NBState;         /*NB当前运行状态*/
}StrNBStatue;
/******************************** 全局变量声明 ********************************/
extern StrNBStatue  g_StruNBStatue;

/******************************** 外部函数原形声明 ****************************/


/******************************** 头文件保护结尾 ******************************/
#endif /* __PLATFORM_H__ */
/******************************** 头文件结束 **********************************/

