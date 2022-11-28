#include <stdio.h>
#include "my_mat.h"

int main()
{
    char WhichFunc;
    int i,j;

    if(scanf("%c", &WhichFunc)!=EOF)
    {
        while(WhichFunc!= 'D')
        {
            if(WhichFunc=='A')
            {
                A();
            }
            if(WhichFunc=='B')
            {
                if(scanf("%d %d", &i, &j)!=EOF)
                    B(i,j);
            }
            if(WhichFunc=='C')
            {
                if(scanf("%d %d", &i ,&j)!=Eof)
                    C(i,j);
            }
            if(scanf("%c", &WhichFunc)==EOF)
            {
            break;
            }
        }
    }

    return 0;
}