#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
    int true_ppid, fork_ppid;
    true_ppid = getpid();
    if (!fork()){
        fork_ppid = getppid();    
        if (fork_ppid == true_ppid)
            printf(1,"Success!\n");
        else
            printf(1, "Failure!\n");
        exit();
    }
    wait();
    return 0;
}
