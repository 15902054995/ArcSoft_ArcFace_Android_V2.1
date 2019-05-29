//#include <stdio.h>
#include  "hellotest.h"
int main()
{

printf("hello world main.c\n");

int a,b,c;
a=1;
b=2;

c=a+b;
printf("%d+%d=%d\n",a,b,c);
c=a-b;
printf("%d-%d=%d\n",a,b,c);
c=a*b;
printf("%d*%d=%d\n",a,b,c);
c=b/a;
printf("%d/%d=%d\n",b,a,c);
fun();
return 0;
}
