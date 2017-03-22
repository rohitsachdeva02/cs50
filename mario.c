#include <stdio.h>
#include <cs50.h>
int main(void)
{
int height;
    
    do
    {
        printf("Height: ");
         height=get_int();    
    }
    while(height>23||height<0);
        for(int r=1;r<=height;r++)
        {
            for(int s=1;s<=height-r;s++)
            {
               printf(" ");    
            }
            int hash;
           for(hash=1;hash<=r;hash++)
           {
               printf("#");
           }
           printf("  ");
           for(hash=1;hash<=r;hash++)
           {
               printf("#");
           }
        printf("\n");
    }
}
