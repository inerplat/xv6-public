#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#define stdout 1


int main(void)
{
    struct processInfo ps;
    get_proc_info(1, &ps);
    exit();
}