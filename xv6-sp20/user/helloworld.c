#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[]){
    int mypid = getpid();
    printf(1, "Hello World! %d\n", mypid);
    exit();
}
