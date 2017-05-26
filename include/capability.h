
#include "types.h"

typedef struct __user_cap_header_struct {
    uint32_t version;
    int pid;
} *cap_user_header_t;

typedef struct __user_cap_data_struct{
    uint32_t effective;
    uint32_t permitted;
    uint32_t inheritable;
} *cap_user_data_t;
