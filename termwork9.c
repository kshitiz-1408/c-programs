#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<string.h>
struct cars
    {
        char car_ID[1000];
        char model[1000];
        float rent;
        float days;
        float trent; 
    };
int main() 
    {
        int i,n,temp;
        printf("\nenter the number of cars:");
        scanf("%d",&n);
        struct cars car[n];
        printf("\nenter the details of the cars:");
        for(i=0;i<n;i++)
        {
            printf("\nCAR %d:\n",i+1);
            printf("\nenter the car ID:");
            scanf("%s",car[i].car_ID);
            printf("\nenter the model of car:");
            scanf("%s",car[i].model);
            printf("\nenter the rental rate per day:");
            scanf("%f",&car[i].rent);
            printf("\nenter the number of days the car was on rent:");
            scanf("%f",&car[i].days);
            car[i].trent=car[i].rent*car[i].days;
        }
        for(i=0;i<n;i++)
        {
            printf("\nCAR %d:",i+1);
            printf("\nthe car ID:%s",car[i].car_ID);
            printf("\nthe model of car:%s",car[i].model);
            printf("\nthe rental rate per day:%d",car[i].rent);
            printf("\nnumber of days the car was on rent:%f",car[i].days);
            printf("\ntotal rent to pay:%f",car[i].trent);
        }                 
        return 0;
    }