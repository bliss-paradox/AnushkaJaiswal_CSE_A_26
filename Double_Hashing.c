#include<stdio.h>
int DoubleHashing(int a[],int size,int x)
{
    int h=x%size;
    int flag=1;
    if(a[h]==0)
    {
        a[h]=x;

    }
    else
    {
        flag=0;
        int i=1;
        int hash=(2*x -7);
        while(flag==0){
            int pos=(h+ i*hash)%size;
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
/*****************************************************************************************************************************/
int main()
{
    int n,x,t=15;
    int table[15]={0};
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        DoubleHashing(table,t,x);
    }
    for(int i=0;i<t;i++)
    {
        printf("%d  ",i);
    }
    printf("\n");
    for(int i=0;i<t;i++)
    {
        printf("%d  ",table[i]);
    }
 return 0;
}