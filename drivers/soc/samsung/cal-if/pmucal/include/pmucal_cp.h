#ifndef __PMUCAL_CP_H__
#define __PMUCAL_CP_H__
#include "pmucal_common.h"

struct pmucal_cp {
	struct pmucal_seq *init;
	struct pmucal_seq *status;
	struct pmucal_seq *reset_assert;
	struct pmucal_seq *reset_release;
	struct pmucal_seq *cp_active_clear;
	struct pmucal_seq *cp_reset_req_clear;
	struct pmucal_seq *cp_enable_dump_pc_no_pg;
	struct pmucal_seq *cp_disable_dump_pc_no_pg;
	u32 num_init;
	u32 num_status;
	u32 num_reset_assert;
	u32 num_reset_release;
	u32 num_cp_active_clear;
	u32 num_cp_reset_req_clear;
	u32 num_cp_enable_dump_pc_no_pg;
	u32 num_cp_disable_dump_pc_no_pg;
};

/* APIs to be supported to PWRCAL interface */
#if IS_ENABLED(CONFIG_CP_PMUCAL)
extern void cp_set_device(struct device *dev);
extern int pmucal_cp_initialize(void);

extern int pmucal_cp_init(void);
extern int pmucal_cp_status(unsigned int pmu_cp_status);
extern int pmucal_cp_reset_assert(void);
extern int pmucal_cp_reset_release(void);
extern int pmucal_cp_active_clear(void);
extern int pmucal_cp_reset_req_clear(void);
extern int pmucal_cp_enable_dump_pc_no_pg(void);
extern int pmucal_cp_disable_dump_pc_no_pg(void);
#else
static inline void cp_set_device(struct device *dev) { return; }
static inline int pmucal_cp_initialize(void) { return 0; }

static inline int pmucal_cp_init(void) { return 0; }
static inline int pmucal_cp_status(unsigned int pmu_cp_status) { return 0; }
static inline int pmucal_cp_reset_assert(void) { return 0; }
static inline int pmucal_cp_reset_release(void) { return 0; }
static inline int pmucal_cp_active_clear(void) { return 0; }
static inline int pmucal_cp_reset_req_clear(void) { return 0; }
static inline int pmucal_cp_enable_dump_pc_no_pg(void) { return 0; }
static inline int pmucal_cp_disable_dump_pc_no_pg(void) { return 0; }
#endif

extern struct pmucal_cp pmucal_cp_list;
extern unsigned int pmucal_cp_list_size;
#endif
