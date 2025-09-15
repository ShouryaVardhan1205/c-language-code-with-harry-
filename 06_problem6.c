//Write a program to find greatest of four numbers entered by the user
#include<stdio.h>
     int main()
     {
        float a,b,c,d; // Here a,b,c and d are 4 numbers to be entered by the user.
        printf("Enter four numbers:");
        scanf("%f %f %f %f", &a,&b,&c,&d);
        if(a==b && b==c && c==d)
        {
            printf("All the four numbers are equal.\n");
        }
        else if(a>b && a>c && a>d)
        {
            printf("First number is the greatest of all four.\n");
        }
        else if(b>a && b>c && b>d)
        {
            printf("Second number is the greatest of all four.\n");
        }
        else if(c>a && c>b && c>d)
        {
            printf("Third number is the greatest of all four.\n");
        }
        else if(d>a && d>b && d>c)
        {
            printf("Fourth number is the greatest of all four.\n");
        }
        

        return 0; 
     }