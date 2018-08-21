#include <stdio.h>
int main(void)
{
  float download, fileSize, time;
  scanf("%f %f", &download, &fileSize);
  time = fileSize / download * 8;
  printf("At megabits %.2f per second, a file of %.2f megabytes \n", download, fileSize);
  printf("downloads in %0.2f seconds. \n", time);

  return 0;
}