#include <stdio.h>

int main()
{
    int num1 = 0,num2 = 1,dummy,fibsum,add;

    printf("Enter Dummy Variable");
    scanf("%d",&dummy);

    printf("%d\n",num1);
    printf("%d\n",num2);

    add = num1 + num2;

    for (int i = 0; dummy > i; i++)
    {
        fibsum = num1 + num2;

        add +=fibsum;

        printf("%d\n",fibsum);

        num1 = num2;
        num2 = fibsum;


    }




    return 0;
}
