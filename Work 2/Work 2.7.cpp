#include <stdio.h>
#include <string.h>
#define STR 256

int main()

{
    char st[STR];

    int i, l;

    gets (st);

    for (int i = 0; i < strlen(st); i++)
    {
		int k = 0;
        char prov[256];
        char si = st[i];
        for (l = 0; l <= i; l++)
        {
            if (si == prov[l])
            {
                l = 0;
                break;
            }
            if (si == st[l])
            {
                k++;
            }
        }
        if (l != 0)
        {
            printf("|%c|%d|\n", si, k);
        }
        prov[i] = si;
    }
}
