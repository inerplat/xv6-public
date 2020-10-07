#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
#define stdout 1


int main(void)
{
    int num = get_num_proc();
    printf(stdout, "Total Number of Active Processes : %d\n", num);
    exit();
}