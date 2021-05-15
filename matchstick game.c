#include<stdio.h>

int main()
{
    int m = 21, p, c;

    while(1)
    {
        printf("\nNumber of Match sticks left = %d\n", m);
        printf("Pick 1 or 2 or 3 or 4 matches\n");
        scanf("%d", &p);

        if(p > 4 || p < 1)
            {
                printf("\nEnter a number between 1 to 4, try again\n");
            	continue;
			}

        m = m - p;

        printf("Number of matches left = %d\n", m);

        c = 5 - p;

        printf("out of which computer picked up %d\n", c);

        m = m - c;

        if(m == 1)
        {
            printf("\nNumber of matches left = %d\n", m);
            printf("Computer wins!!!\nYou lost the Game\n");
            break;
        }
    }

    return 0;
}
