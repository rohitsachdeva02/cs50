#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int change;
    int coin=0;
    int addr=0;
    float amt;
    do 
    {
        printf("O hai! How much change is owed?\n");    
        amt=get_float();
    }
    while(amt<0);
    
    change=amt*100;
    printf("Original change is : %i \n",change);
    while(change>=25)
    {
        addr=change/25;
        change=change%25;
        coin=coin+addr;
        printf("change in 25 is: %i \n",change);
        printf("coin in 25 is : %i \n",coin);
    }
    while(change>=10)
    {
        
        addr=change/10;
        change=change%10;
        coin=coin+addr;
            printf("change in 10 is: %i \n",change);
        printf("coin in 10 is : %i \n",coin);
    }
    while(change>=5)
    {
        
        addr=change/5;
        change=change%5;
        coin=coin+addr;
            printf("change in 5 is: %i \n",change);
       printf("coin in 5 is : %i \n",coin);
    }
    while(change>1)
    {
        change=change/1;
        addr=change%1;
        coin=coin+addr;
            printf("change in 1 is: %i \n",change);
        printf("coin in 1 is : %i \n",coin);
    }
    while(change==1)
    {
        change=change-1;
        coin=coin+1;
        
            printf("change eq 1 is: %i \n",change);
        printf("coin eq 1 is : %i \n",coin);
    }
    printf("%i\n",coin);
    
}
