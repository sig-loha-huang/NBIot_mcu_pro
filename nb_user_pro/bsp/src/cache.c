/*******************************************************************************
 * COPYRIGHT@SIGBEAN
 *******************************************************************************
 * 文件名称:  
 * 功能描述: （简要描述本文件的功能、内容及主要模块）    
 * 使用说明: （描述使用文件功能时的制约条件）
 * 文件作者:                
 * 编写日期: 
 * 修改历史: 
 *  
 * 修改日期修改人  BugID/CRID      修改内容
 * -----------------------------------------------------------------------------
 * 
 ******************************************************************************/
/******************************* 包含文件声明 *********************************/
#include <cortex_m4.h>
#include <cache.h>
#include <stdio.h>

/******************************* 局部宏定义 ***********************************/

/******************************* 局部常数和类型定义 ***************************/

/******************************* 局部函数原型声明 *****************************/

/******************************* 函数实现 *************************************/
/*******************************************************************************
* 函数名称: Dd_Cache_Enable
* 函数功能: cache使能
* 相关文档: 
* 函数参数:
* 参数名称:  
* 返回值:
* 函数说明:
* 修改日期版本号修改人修改内容
* -----------------------------------------------------------------
* 
*******************************************************************************/
void Dd_Cache_Enable(void)
{
    /* bit4：固定0，预留write ,bit3：使能，1有效, bit2-bit0：7表示2MB，6表示1MB... */
    REG(REG_CACHE_CTRL) = 0x0F;
}
/*******************************************************************************
* 函数名称: Dd_Cache_Disable
* 函数功能: cache禁用
* 相关文档: 
* 函数参数:
* 参数名称:  
* 返回值:
* 函数说明:
* 修改日期版本号修改人修改内容
* -----------------------------------------------------------------
* 
*******************************************************************************/
void Dd_Cache_Disable(void)
{
    /* bit4：固定0，预留write ,bit3：使能，1有效, bit2-bit0：7表示2MB，6表示1MB... */
    REG(REG_CACHE_CTRL) = 0x07;
}
/*******************************************************************************
* 函数名称: Dd_Cache_SetCacheableMemRGN
* 函数功能: NB使用 配置cache映射范围第一片映射区
* 相关文档: 
* 函数参数: srcaddr:映射起始地址 dstaddr:映射的终止地址
* 参数名称:  
* 返回值:
* 函数说明: 当终止地址>起始地址时该部分cache disable
* 修改日期版本号修改人修改内容
* -----------------------------------------------------------------
* 
*******************************************************************************/
void Dd_Cache_SetCacheableMemRGN(u32 srcaddr ,u32 dstaddr)
{
    srcaddr = (srcaddr - 0x08000000)/(4*1024);
    
    dstaddr = (dstaddr - 0x08000000)/(4*1024) - 1;
    
    REG(REG_CACHE_RGN0) = (srcaddr) | (dstaddr << 16);
}
/*******************************************************************************
* 函数名称: Dd_Cache_SetCacheableMemRGN1
* 函数功能: NB使用 配置cache映射范围第二片映射区
* 相关文档: 
* 函数参数: srcaddr:映射起始地址 dstaddr:映射的终止地址
* 参数名称:  
* 返回值:
* 函数说明: 当终止地址>起始地址时该部分cache disable
* 修改日期版本号修改人修改内容
* -----------------------------------------------------------------
* 
*******************************************************************************/
void Dd_Cache_SetCacheableMemRGN1(u32 srcaddr ,u32 dstaddr)
{
    srcaddr = (srcaddr - 0x08000000)/(4*1024);
    
    dstaddr = (dstaddr - 0x08000000)/(4*1024) - 1;
    
    REG(REG_CACHE_RGN1) = (srcaddr) | (dstaddr << 16);
}

/*******************************************************************************
* 函数名称: Dd_Cache_SetCacheableMemRGN2
* 函数功能: MCU使用 配置cache映射范围第一片映射区
* 相关文档: 
* 函数参数: srcaddr:映射起始地址 dstaddr:映射的终止地址
* 参数名称:  
* 返回值:
* 函数说明: 当终止地址>起始地址时该部分cache disable
* 修改日期版本号修改人修改内容
* -----------------------------------------------------------------
* 
*******************************************************************************/
void Dd_Cache_SetCacheableMemRGN2(u32 srcaddr ,u32 dstaddr)
{
    srcaddr = (srcaddr - 0x08000000)/(4*1024);
    
    dstaddr = (dstaddr - 0x08000000)/(4*1024) - 1;
    
    REG(REG_CACHE_RGN2) = (srcaddr) | (dstaddr << 16);
}
/*******************************************************************************
* 函数名称: Dd_Cache_SetCacheableMemRGN2
* 函数功能: MCU使用 配置cache映射范围第二片映射区
* 相关文档: 
* 函数参数: srcaddr:映射起始地址 dstaddr:映射的终止地址
* 参数名称:  
* 返回值:
* 函数说明: 当终止地址>起始地址时该部分cache disable
* 修改日期版本号修改人修改内容
* -----------------------------------------------------------------
* 
*******************************************************************************/
void Dd_Cache_SetCacheableMemRGN3(u32 srcaddr ,u32 dstaddr)
{
    srcaddr = (srcaddr - 0x08000000)/(4*1024);
    
    dstaddr = (dstaddr - 0x08000000)/(4*1024) - 1;
    
    REG(REG_CACHE_RGN3) = (srcaddr) | (dstaddr << 16);
}

/******************************* 源文件结束 ***********************************/

