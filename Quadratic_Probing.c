#include<stdio.h>
int QuadraticProbing(int a[],int size,int x)
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
        int i=0;
        while(flag==0)
        {
            int pos=(m+(i*i))%size;
            i++;
            if(a[pos]==0)
            {
                a[pos]=x;
                flag=1;
            }
        }
        
    }
    return flag;
}
/****************************************************************/
int main()
{
    int t=10,n,x;
    int table[10]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        QuadraticProbing(table,t,x);

    }
    for(int i=0;i<t;i++)
    {
        printf("%d   ",i);
    }
    printf("\n");
   
    for(int i=0;i<t;i++)
    {
        printf("%d ",table[i]);
        printf(" ");
    }
     return 0;
}