#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#define stdout 1


int main(void)
{
    int num = get_max_pid();
    printf(stdout, "Maximum PID: %d\n", num);
    exit();
}