1)
  #include <stdio.h>
#include <stdlib.h>

int main() {
int *arr = (int*)malloc(3 * sizeof(int));
arr[0] = 10; arr[1] = 20; arr[2] = 30;
printf("%d %d %d\n", arr[0], arr[1], arr[2]);
free(arr);
return 0;
}

2)
#include <stdio.h>
#include <stdlib.h>

int main() {
float *nums = (float*)malloc(3 * sizeof(float));
nums[0] = 1.1; nums[1] = 2.2; nums[2] = 3.3;
printf("%.1f %.1f %.1f\n", nums[0], nums[1], nums[2]);
free(nums);
return 0;
}


3)
#include <stdio.h>
#include <stdlib.h>

int main() {
char *name = (char*)malloc(6 * sizeof(char));
name[0] = 'H'; name[1] = 'e'; name[2] = 'l'; name[3] = 'l'; name[4] = 'o'; name[5] = '\0';
printf("%s\n", name);
free(name);
return 0;
}
