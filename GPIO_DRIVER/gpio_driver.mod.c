#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x92997ed8, "_printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x21f317d2, "gpiod_unexport" },
	{ 0x8fcbc4b5, "gpiod_put" },
	{ 0xd8953ef3, "device_destroy" },
	{ 0x94e8933d, "class_destroy" },
	{ 0x107f9d60, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x58616cd6, "cdev_init" },
	{ 0x28a136e2, "cdev_add" },
	{ 0x33639f78, "class_create" },
	{ 0x4dc6e3f, "device_create" },
	{ 0x389c3901, "gpiod_get" },
	{ 0x39a4660c, "gpio_to_desc" },
	{ 0x416af8cd, "gpiod_direction_output_raw" },
	{ 0x230a20ec, "gpiod_export" },
	{ 0x489fc7a5, "gpiod_get_value" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x7682ba4e, "__copy_overflow" },
	{ 0x9f081d67, "gpiod_set_value" },
	{ 0x4048dc1b, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CF8EA1D72A121456414501F");
