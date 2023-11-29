#include<stdio.h>
int LinearProbing(int a[],int size,int x)
{
    int m=x%size;
    int flag=1;
    if(a[m]==0)
    {
        a[m]=x;
    }
    else
    {
        flag=0;
        for(int i=1;i<size;i++)
        {
            int pos=(m+i)%size;
            if(a[pos]==0)
            {
                a[pos]=x;
                flag=1;
                break;
            }
        }
    }
    return flag;
}
/***********************************************************/
int main()
    {
    int t=10,n,x;
    int table[10]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        LinearProbing(table,t,x);

    }
    for(int i=0;i<t;i++)
    {
        printf("%d",i);
    }
    printf("\n");
   
    for(int i=0;i<t;i++)
    {
        printf("%d",table[i]);
        printf(" ");
    }
    return 0;
}