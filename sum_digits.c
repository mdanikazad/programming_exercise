#include <stdio.h>
#include <string.h>

int main()
{
    int sum = 0, n;
    scanf("%d",&n);
    
    char s[1000001];
    scanf("%s", s);
    
    int slen = strlen(s);
    
    for(int i =0; i<slen; i++)
    {
        sum += s[i] - '0';
    }
    printf("%d", sum);

    return 0;
}

