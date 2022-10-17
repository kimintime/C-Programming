#include<stdio.h>
int main()
{
    int i;
    int variable = 1;
    for(i=5; i>=1; i--)
    {
        printf("%d ", variable);
        variable++;
    }
    return 0;
}  