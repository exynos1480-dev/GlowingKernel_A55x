/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2010 Samsung Electronics.
 *
 */

#ifndef __S51xx_PCIE_H__
#define __S51xx_PCIE_H__

#include <linux/exynos-pci-noti.h>

#define MAX_MSI_NUM	(16)

extern void first_save_s51xx_status(struct pci_dev *pdev);
extern int s51xx_pcie_init(struct modem_ctl *mc);
extern int exynos_pcie_host_v1_register_event(struct exynos_pcie_register_event *reg);
/* not used: extern int exynos_pcie_host_v1_deregister_event(struct exynos_pcie_register_event *reg); */
extern void exynos_pcie_rc_register_dump(int ch_num);
extern int exynos_pcie_rc_set_outbound_atu(int ch_num, u32 target_addr, u32 offset, u32 size);
extern bool exynos_pcie_rc_get_cpl_timeout_state(int ch_num);
extern void exynos_pcie_rc_set_cpl_timeout_state(int ch_num, bool recovery);

struct s51xx_pcie {
	unsigned int busdev_num;
	int pcie_channel_num;
	struct pci_dev *s51xx_pdev;
	int irq_num_base;
	void __iomem *doorbell_addr;
	u32 __iomem *reg_base;
	u64 dbaddr_base;
	u32 dbaddr_offset;

	u32 link_status;
	bool suspend_try;

	struct exynos_pcie_register_event pcie_event;
	struct exynos_pcie_register_event pcie_cpl_timeout_event;
	struct pci_saved_state *pci_saved_configs;
};

//extern struct s51xx_pcie s5100pcie;

extern int exynos_pcie_host_v1_poweron(int ch_num, int spd);
extern int exynos_pcie_host_v1_poweroff(int ch_num);
extern void exynos_pcie_set_perst_gpio(int ch_num, bool on);
extern void exynos_pcie_set_ready_cto_recovery(int ch_num);
/* not used: extern int exynos_pcie_gpio_onoff(int ch_num, int val); */
/* not used(comment out): extern void exynos_pcie_msi_init_ext(int ch_num); */
int register_separated_msi_vector(int ch_num,
				  irq_handler_t handler, void *context,
				  int *irq_num);

#define AUTOSUSPEND_TIMEOUT	200

int s51xx_pcie_request_msi_int(struct pci_dev *pdev, int int_num);
void __iomem *s51xx_pcie_get_doorbell_address(void);
int s51xx_pcie_send_doorbell_int(struct pci_dev *pdev, int int_num);
void s51xx_pcie_save_state(struct pci_dev *pdev);
void s51xx_pcie_restore_state(struct pci_dev *pdev, bool boot_on);
int s51xx_check_pcie_link_status(int ch_num);
void s51xx_pcie_l1ss_ctrl(int enable);
void disable_msi_int(struct pci_dev *pdev);
void print_msi_register(struct pci_dev *pdev);

int exynos_pcie_rc_speedchange(int ch_num, int spd);

#endif /* __S51xx_PCIE_H__ */
