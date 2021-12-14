#include <stdio.h> //standard  I/O
#include <stdlib.h>
#include <string.h>
#include<math.h>
 
int a[30], count;
 
int place(int i, int j)
{
    int k;
    for (k = 1; k <= i - 1; k++)
    {
        if (a[k] == j)
        {
            return 0;
        }
        else if (abs(a[k] - j) == abs(k - i))  //for diagonal logic
        {
            return 0;
        }
    }
    return 1;
}
 
void print_func(int n)
{
    int i, j, k;
    printf("\n solution number=%d\n", ++count);

    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = 1; j <= n; j++)
        {
            if (a[i] == j)
            {
                printf("\t 1");
            }
 
            else
            {
                printf("\t 0");
            }
        }
    }
}
 
void queen(int i, int n)
{
    int j, k;
    for (j = 1; j <= n; j++)
    {
        if (place(i, j))
        {
            a[i] = j;
            if (i == n)
            {
                print_func(n);
            }
            else
            {
                queen(i + 1, n);
            }
        }
    }
}
 
int main()
{
    int n;
    printf("\n\n Enter the number of queens:");
    scanf("%d", &n);
    queen(1, n);
    return 0;
}
 
