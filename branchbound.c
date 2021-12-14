#include <stdio.h>
#include <conio.h> 
int main()
{
 
    int
        cost[20][20],
        min, l, m, sr[20], sc[20], flag[20][20], i, j, k, rf[20], cf[20], n;
 
    int
        nrz[20],
        ncz[20], cn, a, noz, nrz1[20], ncz1[20], counter = 0;
 
    printf(
        "\n\nEnter the total number of assignments:");
 
    scanf(
        "%d", &n);
 
    /* Enter the cost matrix*/
 
    printf(
        "\nEnter the cost matrix\n");
 
    for (i = 0; i < n; i++)
 
    {
 
        printf(
            "\n");
 
        for (j = 0; j < n; j++)
 
        {
 
            printf(
                "cost[%d][%d] = ", i, j);
 
            scanf(
                "%d", &cost[i][j]);
        }
    }
 
    printf(
        "\n\n");
 
    /* Display the entered cost matrix*/
 
    printf(
        "Cost matrix:\n");
 
    for (i = 0; i < n; i++)
 
    {
 
        for (j = 0; j < n; j++)
 
            printf(
                "\t%d\t", cost[i][j]);
 
        printf(
            "\n");
    }
 
    /* operation on rows*/
 
    for (i = 0; i < n; i++)
 
    {
 
        min = cost[i][0];
 
        /* find the minmum element in each row*/
 
        for (j = 0; j < n; j++)
 
        {
 
            if (min > cost[i][j])
 
                min = cost[i][j];
        }
 
        /*subtract the minimum element from each element of the respective rows*/
 
        for (j = 0; j < n; j++)
 
            cost[i][j] = cost[i][j] - min;
    }
 
    /* operation on colums*/
 
    for (i = 0; i < n; i++)
 
    {
 
        min = cost[0][i];
 
        /* find the minimum element in each column*/
 
        for (j = 0; j < n; j++)
 
        {
 
            if (min > cost[j][i])
 
                min = cost[j][i];
        }
 
        /*subtract the minimum element from each element of the respective columns*/
 
        for (j = 0; j < n; j++)
 
            cost[j][i] = cost[j][i] - min;
    }
 
    printf(
        "\n\n");
 
    printf(
        "Cost matrix after row & column operation:\n");
 
    for (i = 0; i < n; i++)
 
    {
        for (j = 0; j < n; j++)
 
            printf(
                "\t%d\t", cost[i][j]);
 
        printf(
            "\n");
    }
 
repeatx:;
 
    /*Draw minimum number of horizontal and vertical lines to cover all zeros in
  
resulting matrix*/
 
    a = 0;
    noz = 0, min = 1000;
 
    for (i = 0; i < n; i++)
 
    {
        for (j = 0; j < n; j++)
 
            flag[i][j] = 0;
    }
 
    for (i = 0; i < n; i++)
 
    {
        cn = 0;
 
        for (j = 0; j < n; j++)
 
        {
            if (cost[i][j] == 0)
 
            {
                cn++;
 
                flag[i][j] = 1;
            }
        }
 
        nrz[i] = cn;
 
        noz = noz + cn;
    }
 
    for (i = 0; i < n; i++)
 
    {
        cn = 0;
 
        for (j = 0; j < n; j++)
 
        {
            if (cost[j][i] == 0)
 
            {
                cn++;
 
                flag[j][i] = 1;
            }
        }
 
        ncz[i] = cn;
 
        noz = noz + cn;
    }
 
    for (i = 0; i < n; i++)
 
    {
        nrz1[i] = nrz[i];
 
        ncz1[i] = ncz[i];
    }
 
    k = 0;
 
    while (nrz[k] != 0 || ncz[k] != 0)
 
    {
 
        for (i = 0; i < n; i++)
 
        {
            cn = 0;
 
            for (j = 0; j < n; j++)
 
            {
                if (flag[i][j] == 1)
 
                    cn++;
 
                nrz[i] = cn;
            }
 
            if (nrz[i] == 1)
 
            {
                for (j = 0; j < n; j++)
 
                {
                    if (flag[i][j] == 1)
 
                    {
                        flag[i][j] = 2;
 
                        for (k = 0; k < n; k++)
 
                        {
                            if (flag[k][j] == 1)
 
                                flag[k][j] = 0;
                        }
                    }
                }
            }
        }
 
        for (i = 0; i < n; i++)
 
        {
            cn = 0;
 
            for (j = 0; j < n; j++)
 
            {
                if (flag[j][i] == 1)
 
                    cn++;
 
                ncz[i] = cn;
            }
 
            if (ncz[i] == 1)
 
            {
                for (j = 0; j < n; j++)
 
                {
                    if (flag[j][i] == 1)
 
                    {
                        flag[j][i] = 2;
 
                        for (k = 0; k < n; k++)
 
                        {
                            if (flag[j][k] == 1)
 
                                flag[j][k] = 0;
                        }
                    }
                }
            }
        }
 
        k++;
    }
 
    for (i = 0; i < n; i++)
 
    {
        for (j = 0; j < n; j++)
 
        {
            if (flag[i][j] == 2)
 
                a++;
        }
    }
 
    /* If minimum number of lines, a is equal to the order of the matrix n then
  
assignment can be optimally completed.*/
 
    if (a == n)
 
    {
 
        printf(
            "\nAssignments completed in order!!\n");
 
        /* Display the order in which assignments will be completed*/
 
        for (i = 0; i < n; i++)
 
        {
            for (j = 0; j < n; j++)
 
            {
                if (flag[i][j] == 2)
 
                    printf(
                        " %d->%d ", i + 1, j + 1);
            }
 
            printf(
                "\n");
        }
 
        getch();
 
        exit(0);
    }
 
    /* if order of matrix and number of lines is not same then its difficult to
  
find the optimal solution.
  
Now determine the smallest uncovered element i.e. element not covered by lines
  
and then subtract this minimum element from all uncovered elements and add the
  
same elements at the intersection of horizontal and vertical lines.*/
 
    else
 
    {
        for (i = 0; i < n; i++)
 
        {
            rf[i] = 0, sr[i] = 0;
 
            cf[i] = 0, sc[i] = 0;
        }
 
        for (k = n; (k > 0 && noz != 0); k--)
 
        {
            for (i = 0; i < n; i++)
 
            {
                m = 0;
 
                for (j = 0; j < n; j++)
 
                {
                    if ((flag[i][j] == 4) && (cost[i][j] == 0))
 
                        m++;
                }
 
                sr[i] = m;
            }
 
            for (i = 0; i < n; i++)
 
            {
                if (nrz1[i] == k && nrz1[i] != sr[i])
 
                {
                    rf[i] = 1;
 
                    for (j = 0; j < n; j++)
 
                    {
                        if (cost[i][j] == 0)
 
                            flag[i][j] = 4;
                    }
 
                    noz = noz - k;
                }
            }
 
            for (i = 0; i < n; i++)
 
            {
 
                l = 0;
 
                for (j = 0; j < n; j++)
 
                {
                    if ((flag[j][i] == 4) && (cost[j][i] == 0))
 
                        l++;
                }
 
                sc[i] = l;
            }
 
            for (i = 0; i < n; i++)
 
            {
                if (ncz1[i] == k && ncz1[i] != sc[i])
 
                {
                    cf[i] = 1;
 
                    for (j = 0; j < n; j++)
 
                    {
                        if (cost[j][i] == 0)
 
                            flag[j][i] = 4;
                    }
 
                    noz = noz - k;
                }
            }
 
            for (i = 0; i < n; i++)
 
            {
                for (j = 0; j < n; j++)
 
                {
                    if (flag[i][j] != 3)
 
                    {
                        if (rf[i] == 1 && cf[j] == 1)
 
                        {
                            flag[i][j] = 3;
 
                            if (cost[i][j] == 0)
 
                                noz = noz + 1;
                        }
                    }
                }
            }
        }
 
        for (i = 0; i < n; i++)
 
        {
            for (j = 0; j < n; j++)
 
            {
                if (rf[i] != 1 && cf[j] != 1)
 
                {
                    if (min > cost[i][j])
 
                        min = cost[i][j];
                }
            }
        }
 
        for (i = 0; i < n; i++)
 
        {
            for (j = 0; j < n; j++)
 
            {
                if (rf[i] != 1 && cf[j] != 1)
 
                    cost[i][j] = cost[i][j] - min;
            }
        }
 
        for (i = 0; i < n; i++)
 
        {
            for (j = 0; j < n; j++)
 
            {
                if (flag[i][j] == 3)
 
                    cost[i][j] = cost[i][j] + min;
            }
        }
    }
 
    printf(
        "\n\n");
 
    if (counter < 10)
 
    {
 
        counter = counter + 1;
 
        printf(
            "\n\nIntermediate Matrix: \n");
 
        for (i = 0; i < n; i++)
 
        {
 
            for (j = 0; j < n; j++)
 
                printf(
                    "\t%d\t", cost[i][j]);
 
            printf(
                "\n");
        }
    }
 
    else
 
    {
 
        printf(
            "\n\nOptimal solution to given problem is not possible");
 
        getch();
 
        return 0;
    }
 
    goto repeatx;
}
 
