#include <stdio.h>

int main()
{

    int salary[5] = {};

    for (int i=0; i<5 ; i++)
    {
        printf("\nEnter the salary of worker [%d]",salary[i]);
        scanf("%d",&salary[i]);
        
        if (salary[i] < 20000)
        {
            salary[i] += (salary[i] * 0.25);
            printf("\nEnter the new salary %d",salary[i]);
        }

    }

    return 0;
}