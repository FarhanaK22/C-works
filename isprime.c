#include<stdio.h>
#include<math.h>
  int isprime(int n)
    {
        if(n<=1)
    return 0;
    if(n==2||n==3)
    return 1;
    if(n%2==0||n%3==0)
    return 0;

    for(int i=5;i<=sqrt(n);i+6)
    {  
        if(n%i==0)
        return 0;
    }
    return 1;
    }
int main(){
    int n,k;
    scanf("%d",&n);
    if(isprime(n))
    printf("Prime num");
    else
    printf("not a prime");
return 0;
}