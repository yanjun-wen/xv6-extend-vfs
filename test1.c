#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

void main() {
  int inf = open("/tests/test1", O_RDONLY, 0);
  int outf = open("/mnt/test1", O_WRONLY | O_CREAT | O_TRUNC, 0600);
  int i;
  char buf[4096];
  do {
    i = read(inf, buf, 4096);
    write(outf, buf, i);
  } while (i);
  close(outf);
  close(inf);
}