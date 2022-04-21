#include<stdio.h>
void print_array(int *a, int n);

int main(void)
{
    int array[5];
    
    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return 0;
}

void print_array(int *a, int n)
{
    int i = 0;
    
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n -1)
            printf(", ");
        
    }
    putchar('\n');
        
}
