#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

#define BUF_SIZE 4096
  
int    *read_std_out()
{
    int ret;
    char buf[BUF_SIZE + 1];

    ret = read(0, buf, BUF_SIZE);

    printf("Meat : %s", buf);
    return (0);
}

int main(int argc, char **argv)
{
    read_std_out();

    return (0);
}