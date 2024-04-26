#include <stdio.h>
#include <conio.h>
int main() {
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(i==1||j==1||i==7||j==7)
            printf("A");
            else if(i==2||j==2||i==6||j==6)
            printf("B");
            else if(i==3||j==3||i==5||j==5)
            printf("C");
            else
            printf("D");
        }
        printf("\n");
    }
return 0;
}
