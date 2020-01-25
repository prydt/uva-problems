#include <stdio.h>

int main()
{
    while(true)
    {
        int k, x1, y1, x, y;
        scanf("%d", &k);
        if(k==0)
            break;
        scanf("%d %d", &x1, &y1);

        while(k--)
        {
            scanf("%d %d", &x, &y);

            if(x == x1 || y == y1)
                printf("divisa\n");
            else if(x > x1 && y > y1)
                printf("NE\n");
            else if(x < x1 && y > y1)
                printf("NO\n");
            else if(x > x1 && y < y1)
                printf("SE\n");
            else if(x < x1 && y < y1)
                printf("SO\n");
        }
    }
}
