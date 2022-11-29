#include <stdio.h>

int main()
{

    int blousesize[4] = {14,17,32,43};


    for (int i=0; i<4 ; i++)
    {
        printf("The new elemenet will be:\t|\t%d",blousesize[i] -= 10);
    }

    return 0;
}