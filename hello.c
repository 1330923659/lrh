#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
    printk(KERN_ALERT"Hello, lrh202103060235\n");
    return 0;
}

static void hello_exit(void)
{
    printk(KERN_ALERT"Goodbye,lrh202103060235\n");
}

module_init(hello_init);
module_exit(hello_exit);
