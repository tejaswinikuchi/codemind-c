#include<stdio.h>
int main()
{
    int un;
    float cost;
    scanf("%d",&un);
    if(un<=199)
    {
        cost=1.20;
    }
    else if(un>=200 && un<400)
    {
        cost=1.40;
    }
    else if(un>=400 && un<600)
    {
        cost=1.60;
    }
    else if(un>=600 && un<800)
    {
        cost=1.80;
    }
    else if(un>=800)
    {
        cost=2.00;
    }
    float bill=un*cost;
    float surcharge;
    if(bill>400)
    {
        surcharge=(0.15*bill);
    }
    else 
    {
      surcharge=0;  
    }
    float tbill=bill+surcharge;
    printf("Units Consumed: %d
",un);
    printf("Cost per Unit: %.2f
",cost);
    printf("Bill: %.2f
",bill);
    printf("Surcharge: %.2f
",surcharge);
    printf("Total Amount: %.2f",tbill);
}