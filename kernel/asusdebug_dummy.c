#include <linux/types.h>
#include <linux/errno.h>
#include <linux/time.h>
#include <linux/kernel.h>
#include <linux/poll.h>
#include <linux/proc_fs.h>
#include <linux/fs.h>
#include <linux/workqueue.h>
#include <linux/rtc.h>
#include <linux/list.h>
#include <linux/syscalls.h>
#include <linux/delay.h>
#include <asm/uaccess.h>
#include <asm/io.h>
#include <linux/export.h>
#include <linux/slab.h>
//extern int g_user_dbg_mode;

#include <linux/rtc.h>
#include "rtmutex_common.h"

void *PRINTK_BUFFER_VA;
unsigned int asusdebug_enable = 0;
struct mutex fake_mutex;
struct completion fake_completion;
struct rt_mutex fake_rtmutex;

void save_all_thread_info(void)
{

}
EXPORT_SYMBOL(save_all_thread_info);

void delta_all_thread_info(void)
{

}
EXPORT_SYMBOL(delta_all_thread_info);

void save_phone_hang_log(void)
{

}
EXPORT_SYMBOL(save_phone_hang_log);

#if 0
void *memset_nc(void *s, int c, size_t count)
{
        u8 *p = s;
        while (count--)
                *p++ = c;
        return s;
}
EXPORT_SYMBOL(memset_nc);
#endif
