/* RT-Thread 配置头文件中文版本 */

#ifndef __RTTHREAD_CFG_H__
#define __RTTHREAD_CFG_H__

// <RDTConfigurator URL="http://www.rt-thread.com/eclipse">

// <integer name="RT_NAME_MAX" description="内核对象名称的最大长度，建议是4对齐后+2以让rt_object进行4字节对齐" default="6" />
#define RT_NAME_MAX	6
// <integer name="RT_ALIGN_SIZE" description="系统中默认的对齐字节数，同时从heap分配出的内存块也是按照这样的方式进行对齐" default="4" />
#define RT_ALIGN_SIZE	4
// <integer name="RT_THREAD_PRIORITY_MAX" description="系统中支持的最大优先级数目" default="32">
// <item description="8">8</item>
// <item description="32">32</item>
// <item description="256">256</item>
// </integer>
#define RT_THREAD_PRIORITY_MAX	32
// <integer name="RT_TICK_PER_SECOND" description="每秒的OS tick节拍数，建议按照应用场合取60，100，或者1000" default="100" />
#define RT_TICK_PER_SECOND	100
// <section name="RT_DEBUG" description="内核中是否打开一些调试选项（例如RT_ASSERT断言功能），建议打开" default="true" >
#define RT_DEBUG
// <integer name="RT_DEBUG_THREAD" description="是否打开线程调试选项" default="0" />
// #define RT_DEBUG_THREAD    0
// <integer name="RT_DEBUG_INIT" description="如果启用了组件自动初始化，可以打开这个调试项以分析组件的初始化情况" default="0" />
// #define RT_DEBUG_INIT      0
// <bool name="RT_USING_OVERFLOW_CHECK" description="是否支持任务栈溢出检测，这个是一个辅助项，仅在任务切换时进行栈溢出检查" default="true" />
#define RT_USING_OVERFLOW_CHECK
// </section>

// <bool name="RT_USING_HOOK" description="系统中是否支持钩子函数，以获取系统中的一些信息" default="true" />
#define RT_USING_HOOK
// <section name="RT_USING_TIMER_SOFT" description="软定时器功能（RT_TIMER_FLAG_SOFT_TIMER属性的定时器将在任务的上下文中执行）" default="true" >
// #define RT_USING_TIMER_SOFT
// <integer name="RT_TIMER_THREAD_PRIO" description="软定时器任务优先级" default="4" />
#define RT_TIMER_THREAD_PRIO	4
// <integer name="RT_TIMER_THREAD_STACK_SIZE" description="软定时器任务栈大小" default="512" />
#define RT_TIMER_THREAD_STACK_SIZE	512
// </section>

// <section name="IPC" description="任务间同步、通信机制配置" default="always" >
// <bool name="RT_USING_SEMAPHORE" description="支持信号量功能" default="true" />
#define RT_USING_SEMAPHORE
// <bool name="RT_USING_MUTEX" description="支持互斥锁功能" default="true" />
#define RT_USING_MUTEX
// <bool name="RT_USING_EVENT" description="支持事件组功能" default="true" />
#define RT_USING_EVENT
// <bool name="RT_USING_MAILBOX" description="支持邮箱功能" default="true" />
#define RT_USING_MAILBOX
// <bool name="RT_USING_MESSAGEQUEUE" description="支持消息队列功能" default="true" />
#define RT_USING_MESSAGEQUEUE
// </section>

// <section name="MM" description="内存管理配置" default="always" >
// <bool name="RT_USING_MEMPOOL" description="支持静态内存池功能" default="true" />
#define RT_USING_MEMPOOL
// <bool name="RT_USING_MEMHEAP" description="支持动态内存堆对象功能" default="true" />
#define RT_USING_MEMHEAP
// <bool name="RT_USING_HEAP" description="支持动态内存堆功能" default="true" />
#define RT_USING_HEAP
// <bool name="RT_USING_SMALL_MEM" description="小内存优化的内存堆管理算法" default="true" />
#define RT_USING_SMALL_MEM
// <bool name="RT_USING_SLAB" description="使用SLAB内存管理算法以支持大内存管理（>1MB级别的内存）" default="false" />
// #define RT_USING_SLAB
// </section>

// <section name="RT_USING_DEVICE" description="设备驱动框架配置" default="true" >
#define RT_USING_DEVICE
// <bool name="RT_USING_UART0" description="支持UART0" default="true" />
#define RT_USING_UART0
// </section>

// <section name="RT_USING_CONSOLE" description="支持终端功能（rt_kprintf函数可用）" default="true" >
#define RT_USING_CONSOLE
// <integer name="RT_CONSOLEBUF_SIZE" description="终端缓存区大小（也定义了一次最多可以向终端输出的字节数）" default="128" />
#define RT_CONSOLEBUF_SIZE	128
// <string name="RT_CONSOLE_DEVICE_NAME" description="终端使用的字符设备名（例如使用的是UART0设备）" default="uart" />
#define RT_CONSOLE_DEVICE_NAME	"uart0"
// </section>

// <bool name="RT_USING_COMPONENTS_INIT" description="支持系统组件自动初始化功能" default="true" />
#define RT_USING_COMPONENTS_INIT
// <section name="RT_USING_FINSH" description="finsh shell选项配置" default="true" >
#define RT_USING_FINSH
// <bool name="FINSH_USING_SYMTAB" description="finsh支持EXPORT符号方式" default="true" />
#define FINSH_USING_SYMTAB
// <bool name="FINSH_USING_DESCRIPTION" description="包括符号的描述信息" default="true" />
#define FINSH_USING_DESCRIPTION
// <integer name="FINSH_THREAD_STACK_SIZE" description="finsh shell的任务栈大小" default="4096" />
#define FINSH_THREAD_STACK_SIZE	4096
// <bool name="FINSH_USING_MSH" description="支持面向应用的msh shell" default="true" />
#define FINSH_USING_MSH
// <bool name="FINSH_USING_MSH_DEFAULT" description="shell默认使用msh方式" default="true" />
//#define FINSH_USING_MSH_DEFAULT
// <bool name="FINSH_USING_MSH_ONLY" description="shell仅使用msh方式" default="true" />
//#define FINSH_USING_MSH_ONLY
// <bool name="FINSH_USING_AUTH" description="shell支持权限验证功能" default="true" />
//#define FINSH_USING_AUTH
// <string name="FINSH_DEFAULT_PASSWORD" description="shell密码验证方式默认密码" default="rtthread" />
//#define FINSH_DEFAULT_PASSWORD	"rtthread"
// </section>

// <section name="LIBC" description="C运行库配置" default="always" >
// <bool name="RT_USING_LIBC" description="支持完整的libc库" default="true" />
#define RT_USING_LIBC
// <bool name="RT_USING_PTHREADS" description="系统支持pthread线程接口" default="true" />
// #define RT_USING_PTHREADS
// </section>

// <section name="RT_USING_DFS" description="支持设备虚拟文件系统" default="true" >
// #define RT_USING_DFS
// <bool name="DFS_USING_WORKDIR" description="使用工作目录方式，否则必须使用绝对路径进行访问" default="true" />
// #define DFS_USING_WORKDIR
// <integer name="DFS_FILESYSTEMS_MAX" description="系统中支持的最大文件系统种类" default="4" />
#define DFS_FILESYSTEMS_MAX	2
// <integer name="DFS_FD_MAX" description="系统中支持的同时打开文件最大数目" default="4" />
#define DFS_FD_MAX	4
// <bool name="RT_USING_DFS_ELMFAT" description="支持FAT文件系统" default="true" />
#define RT_USING_DFS_ELMFAT
// <bool name="RT_DFS_ELM_REENTRANT" description="FAT文件系统支持多任务保护" default="true" />
#define RT_DFS_ELM_REENTRANT
// <integer name="RT_DFS_ELM_USE_LFN" description="FAT文件系统长文件名吗，当前只支持3这种方式" default="0">
// <item description="LFN with static LFN working buffer">1</item>
// <item description="LFN with dynamic LFN working buffer on the stack">2</item>
// <item description="LFN with dynamic LFN working buffer on the heap">3</item>
// </integer>
#define RT_DFS_ELM_USE_LFN	3
// <integer name="RT_DFS_ELM_CODE_PAGE" description="OEM code page，建议使用437，否则需要载入相应的码表" default="437">
#define RT_DFS_ELM_CODE_PAGE	437
// <integer name="RT_DFS_ELM_MAX_LFN" description="文件名最大长度" default="256" />
#define RT_DFS_ELM_MAX_LFN	128
// <integer name="RT_DFS_ELM_MAX_SECTOR_SIZE" description="支持的最大扇区大小，例如底层是flash，它的最小擦除单位是4096，需要把它设置为4096" default="256" />
#define RT_DFS_ELM_MAX_SECTOR_SIZE	512
// <bool name="RT_DFS_ELM_USE_ERASE" description="FAT文件系统是否支持擦除操作" default="false" />
// #define RT_DFS_ELM_USE_ERASE
// <bool name="RT_USING_DFS_YAFFS2" description="支持YAFFS2文件系统" default="false" />
// #define RT_USING_DFS_YAFFS2
// <bool name="RT_USING_DFS_UFFS" description="支持UFFS文件系统" default="false" />
// #define RT_USING_DFS_UFFS
// <bool name="RT_USING_DFS_DEVFS" description="支持以设备文件方式访问系统中的设备驱动对象" default="true" />
// #define RT_USING_DFS_DEVFS
// <bool name="RT_USING_DFS_NFS" description="支持NFSv3网络文件系统（客户端），服务端可以使用FreeNFS" default="false" />
// #define RT_USING_DFS_NFS
// <string name="RT_NFS_HOST_EXPORT" description="网络文件系统服务端输出路径" default="192.168.1.5:/" />
#define RT_NFS_HOST_EXPORT	"192.168.1.5:/"
// </section>

// <section name="RT_USING_LWIP" description="lwIP轻型TCP/IP协议栈配置" default="true" >
#define RT_USING_LWIP
// <bool name="RT_LWIP_ICMP" description="支持ICMP协议（ping操作需要）" default="true" />
#define RT_LWIP_ICMP
// <bool name="RT_LWIP_IGMP" description="支持IGMP协议" default="false" />
// #define RT_LWIP_IGMP
// <bool name="RT_LWIP_UDP" description="支持UDP协议" default="true" />
#define RT_LWIP_UDP
// <bool name="RT_LWIP_TCP" description="支持TCP协议" default="true" />
#define RT_LWIP_TCP
// <bool name="RT_LWIP_DNS" description="支持DNS协议" default="true" />
#define RT_LWIP_DNS
// <bool name="RT_LWIP_SNMP" description="支持SNMP协议" default="false" />
// #define RT_LWIP_SNMP
// <bool name="RT_LWIP_DHCP" description="以DHCP方式动态获得本机的IP地址" default="false" />
// #define RT_LWIP_DHCP
// <integer name="RT_LWIP_TCPTHREAD_PRIORITY" description="TCP线程的优先级" default="12" />
#define RT_LWIP_TCPTHREAD_PRIORITY	12
// <integer name="RT_LWIP_TCPTHREAD_MBOX_SIZE" description="TCP线程的邮箱大小" default="32" />
#define RT_LWIP_TCPTHREAD_MBOX_SIZE	8
// <integer name="RT_LWIP_TCPTHREAD_STACKSIZE" description="TCP线程的栈大小" default="4096" />
#define RT_LWIP_TCPTHREAD_STACKSIZE	4096
// <integer name="RT_LWIP_ETHTHREAD_PRIORITY" description="以太网收发线程的优先级" default="14" />
#define RT_LWIP_ETHTHREAD_PRIORITY	14
// <integer name="RT_LWIP_ETHTHREAD_MBOX_SIZE" description="以太网收发线程的邮箱大小" default="8" />
#define RT_LWIP_ETHTHREAD_MBOX_SIZE	8
// <integer name="RT_LWIP_ETHTHREAD_STACKSIZE" description="以太网收发线程的栈大小" default="512" />
#define RT_LWIP_ETHTHREAD_STACKSIZE	512
// <ipaddr name="RT_LWIP_IPADDR" description="本机的静态IP地址" default="192.168.1.30" />
#define RT_LWIP_IPADDR0 192
#define RT_LWIP_IPADDR1 168
#define RT_LWIP_IPADDR2 1
#define RT_LWIP_IPADDR3 30
// <ipaddr name="RT_LWIP_GWADDR" description="网关地址" default="192.168.1.1" />
#define RT_LWIP_GWADDR0 192
#define RT_LWIP_GWADDR1 168
#define RT_LWIP_GWADDR2 1
#define RT_LWIP_GWADDR3 1
// <ipaddr name="RT_LWIP_MSKADDR" description="子网掩码" default="255.255.255.0" />
#define RT_LWIP_MSKADDR0 255
#define RT_LWIP_MSKADDR1 255
#define RT_LWIP_MSKADDR2 255
#define RT_LWIP_MSKADDR3 0
// </section>

// <section name="RT_USING_RTGUI" description="RT-Thread 原生的GUI组件功能配置" default="true" >
#define RT_USING_RTGUI
// <integer name="RTGUI_NAME_MAX" description="widget/object 最大名称长度，用于根据名称查找控件" default="12" />
#define RTGUI_NAME_MAX	12
// <bool name="RTGUI_USING_SMALL_SIZE" description="采用小内存版本的GUI，这时候窗口一些功能会给裁剪掉" default="true" />
#define RTGUI_USING_SMALL_SIZE
// <bool name="RTGUI_USING_FONT16" description="使用8*16点阵大小的ASCII字库" default="true" />
#define RTGUI_USING_FONT16
// <bool name="RTGUI_USING_FONT12" description="使用6*12点阵大小的ASCII字库" default="true" />
// #define RTGUI_USING_FONT12
// <bool name="RTGUI_USING_FONTHZ" description="支持中文字库" default="true" />
#define RTGUI_USING_FONTHZ
// <integer name="RTGUI_DEFAULT_FONT_SIZE" description="默认字体大小，当指定字库不存在时，GUI会自己查找默认大小的字库进行替换显示" default="16" />
#define RTGUI_DEFAULT_FONT_SIZE	16
// <bool name="RTGUI_USING_DFS_FILERW" description="使用dfs文件系统做为读写接口，用于读取GUI字库文件与打开保存图形文件" default="true" />
#define RTGUI_USING_DFS_FILERW
// <bool name="RTGUI_USING_HZ_BMP" description="使用汉字点阵字库" default="true" />
#define RTGUI_USING_HZ_BMP
// <bool name="RTGUI_IMAGE_XPM" description="支持显示XMP图形文件" default="true" />
#define RTGUI_IMAGE_XPM
// <bool name="RTGUI_IMAGE_JPEG" description="支持显示JPEG图形文件" default="true" />
#define RTGUI_IMAGE_JPEG
// <bool name="RTGUI_IMAGE_PNG" description="支持显示PNG图形文件" default="true" />
#define RTGUI_IMAGE_PNG
// <bool name="RTGUI_IMAGE_PNG" description="支持显示BMP图形文件" default="true" />
#define RTGUI_IMAGE_BMP
// <bool name="RTGUI_USING_HZ_FILE" description="支持汉字字库文件" default="false" />
#define RTGUI_USING_HZ_FILE
// <bool name="RTGUI_USING_MOUSE_CURSOR" description="显示鼠标" default="false" />
#define RTGUI_USING_MOUSE_CURSOR
// </section>

// <section name="RT_USING_MODBUS" description="Modbus协议栈配置" default="true" >
// <bool name="RT_MODBUS_SLAVE_RTU" description="使用从机RTU模式" default="false" />
#define RT_MODBUS_SLAVE_RTU
// <bool name="RT_MODBUS_MASTER_RTU" description="使用主机RTU模式" default="false" />
#define RT_MODBUS_MASTER_RTU
// <bool name="RT_MODBUS_MASTER_SLAVE_RTU" description="使用主、从机RTU模式" default="false" />
#define RT_MODBUS_MASTER_SLAVE_RTU
// </section>

// <section name="RT_USING_SFUD" description="SFUD 万能 SPI Flash 驱动配置" default="true" >
#define RT_USING_SFUD
// <bool name="RT_SFUD_USING_SFDP" description="支持自动探测 JEDEC 规定的 SFDP 参数表" default="true" />
#define RT_SFUD_USING_SFDP
// <bool name="RT_SFUD_USING_FLASH_INFO_TABLE" description="使用已定义的 Flash 配置信息表" default="false" />
#define RT_SFUD_USING_FLASH_INFO_TABLE
// </section>

// </RDTConfigurator>

#endif
