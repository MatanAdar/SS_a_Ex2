#include <stdio.h>
#include "my_mat.h"

int main()
{
    char WhichFunc=0;
    int i=0;
    int j=0;

    scanf("%c", &WhichFunc);

    while(WhichFunc!= 'D')
    {
        if(WhichFunc=='A')
        {
            A();
        }
        if(WhichFunc=='B')
        {
            scanf("%d %d", &i, &j);
            B(i,j);
        }
        if(WhichFunc=='C')
        {
            scanf("%d %d", &i ,&j);
            C(i,j);
        }
        scanf("%c", &WhichFunc);
    }

    printf("\n");
    return 0;

}