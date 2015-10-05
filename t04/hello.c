/* This code is based on the examples of the book Linux Device Drivers, 3rd
 * Edition
 * By Jonathan Corbet, Alessandro
 * Rubini, and Greg Kroah-Hartman
 *
 */

#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");


static int hello_init(void)
{
	pr_alert("Hello, world\n");
	return 0;
}


static void hello_exit(void)
{
	pr_alert("Goodbye, cruel world\n");
}
module_init(hello_init);
module_exit(hello_exit);
