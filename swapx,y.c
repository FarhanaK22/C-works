#include<stdio.h>
void swap(int *a,int *b)
{int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
   int x,y,temp;
   x=20;
   y=30;
   printf("%d\t%d",x,y);
 swap(&x,&y);
    printf("\n%d\t%d",x,y);
    return 0;
}