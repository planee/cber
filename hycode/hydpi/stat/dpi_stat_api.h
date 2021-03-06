/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi_stat_api.h
编码格式:     ASCII
作者:         zengweixiu
创建:         2016-9-6
历史:
    1.日期    :2016-9-6
      作者    :zwx
      修改    :Created file
******************************************************************************/
#ifndef DPI_STAT_API_H_
#define DPI_STAT_API_H_

#include "pub_header.h"
#include "dpi_npcp.h"
#include "shmem.h"

/**************************************************************************************************
                                        宏定义
**************************************************************************************************/
#define DPI_PID_MAX 48


/**************************************************************************************************
                                        枚举定义
**************************************************************************************************/
enum flow_stat_group
{
    FSG_TCP     = 0,        /* TCP协议流量统计类 */
    FSG_UDP     = 1,            /* UDP协议流量统计类 */    
    FSG_SMTP    = 2,           /* SMTP协议流量统计类 */
    FSG_FTP     = 3,            /* FTP协议流量统计类 */
    FSG_HTTP    = 4,           /* HTTP协议流量统计类 */
    FSG_PRO_MAX,
   
    FSG_P2P     = 5,            /* P2P_Software应用流量统计类 */
    FSG_NETGAME = 6,        /* network_game应用流量统计类 */
    FSG_EMAIL   = 7,          /* email应用流量统计类 */
    FSG_IM      = 8,             /* instant_message应用流量统计类 */
    FSG_SM      = 9,             /* 流媒体应用流量统计类 */
    FSG_MAX,
};
enum flow_stat_type
{
    FST_FLOW_NUM = 0, /* 流数目 */
    FST_PACKETS  = 1, /* 包数目 */
    FST_BYTES    = 2, /* 字节数 */
    FST_MAX,
};

enum sys_stat_type
{
    SYS_NPCP_ERR_PKT = 0,
    SST_MAX,
};


/**************************************************************************************************
                                        结构体定义
**************************************************************************************************/
typedef struct flw_stat
{
    int64_t flow_num;/* 流数目 */
    int64_t packets; /* 包数目 */
    int64_t bytes;   /* 字节数 */
}flw_stat_t;       /* 协议流量和应用流量统计结构体 */


typedef struct proc_flow_stat
{
    flw_stat_t fs[FSG_MAX]; /* 流量统计结构体 */
}proc_flow_stat_t;         /* 分进程的流量统计结构 */


typedef struct sys_stat
{
    int64_t sys_s[SST_MAX];
}sys_stat_t;

typedef struct proc_stat
{
    proc_flow_stat_t proc_flow_stat[DPI_PID_MAX];
    sys_stat_t sys_stat[DPI_PID_MAX];
}proc_stat_t;


/**************************************************************************************************
                                        函数声明
**************************************************************************************************/
dpi_code_t dpi_flow_stat_inc(int process_id, int flow_stat_group, int stat_type); /*统计增加*/
dpi_code_t dpi_flow_stat_set(int process_id, int flow_stat_group, int stat_type, uint64_t num);/*统计设置*/
dpi_code_t dpi_flow_stat_clear(int process_id, int flow_stat_group, int stat_type);/*统计置0*/
dpi_code_t dpi_flow_stat_get_group(int flow_stat_group, void *outbuf);    /*按组获取所有进程统计总数*/
dpi_code_t dpi_flow_stat_clear_group(int flow_stat_group);                /*按组清除所有进程统计*/
dpi_code_t dpi_sys_stat_inc(int process_id, int sys_stat_type);             /*统计加1*/
dpi_code_t dpi_sys_stat_set(int process_id, int sys_stat_type, uint64_t num);/*统计置n*/
dpi_code_t dpi_sys_stat_clear(int process_id, int sys_stat_type);           /*统计置0*/
dpi_code_t dpi_sys_stat_get_all(int sys_stat_type, uint64_t *outbuf);       /*获取所有进程统计总数*/
dpi_code_t dpi_sys_stat_clear_all(int sys_stat_type);                       /*清除所有进程统计*/

#endif /* DPI_STAT_API_H_ */



















