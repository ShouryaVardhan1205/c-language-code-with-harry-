/* 3. Calculate income tax paid by an employee to the government as per the slabs mentioned below: 
 Income Slab Tax
 2.5 – 5.0L 5%
 5.0L - 10.0L 20%
 Above 10.0L 30%
 Note that there is no tax below 2.5L. Take income amount as an input from the user.*/
 #include<stdio.h>
     int main()
     {
      float income,amount5,amount20,amount30;
      printf("Enter your income:");
      scanf("%f", &income);
     if(income<250000)
     {
        printf("Your income does not fall under any tax slab.\n");
     }
      else if(income>= 250000 && income<500000)
      {
        printf("Your income falls under 5 percent tax slab.\n");
        amount5 = 0.05*(income-250000);
        printf("The amount you would pay as income tax is %.2f.\n", amount5);
      }
      else if(income>=500000 && income<1000000)
      {
        printf("Your income falls under 20 percent tax slab.\n");
        amount20 =0.05*(500000-250000)+0.2*(income-500000);
        printf("The amount you would pay as income tax is %.2f.\n", amount20);
      }
      else
      {
        printf("Your income falls under 30 percent tax slab.\n");
        amount30 =0.05*(500000-250000)+0.2*( 1000000-500000)+0.3*(income-1000000);
        printf("The amount you would pay as income tax is %.2f.\n", amount30);
      }

        return 0;
     }