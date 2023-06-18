#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                int tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d", a[i]);
    }
   

    return 0;
}

