#ifndef _KERNEL_SCHEDULER_H_
#define _KERNEL_SCHEDULER_H_

#include <stdbigos/types.h>
#include "../virtual_memory/address_space.h"

typedef struct process {
    u32 id;
    void* stack_ptr;
    address_space_t* address_space;
} process_t;

void scheduler_init(void);
void scheduler_add_process(process_t* process);
void scheduler_remove_process(u32 process_id);
#endif