// SPDX-License-Identifier: GPL-2.0
/* Hello.c */
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init hello_init(void)
{
	pr_alert("Hello its my hello module");
	return 0;
}

static void __exit hello_exit(void)
{
	pr_alert("Thx for using my hello module");
}

module_init(hello_init);
module_exit(hello_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello module");
MODULE_AUTHOR("Volkov Arthur");
