#include <stdio.h>
#include <conio.h>
int fact(int n);
int main() {
int sum=0,num;
printf("enter the number of terms:");
scanf("%d",&num);
while(num>0){
sum=sum+fact(num)/num;
num--;}
printf("the sum of this series=%d",sum);
return 0;
}
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
