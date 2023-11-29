#include<stdio.h>
void Linear(int a[],int n,int ele)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("Element exist\n");
    }
    else
    {
        printf("Element does not exist\n");
    }
}
/************************************************************************************************************************************/
 void Binary(int a[],int n,int key)
 {
    int f=0,l=n-1,c=0;
    while(f<=l)
    {
        int mid=(f+l)/2;
        if(a[mid]==key)
        {
            c++;
            break;
        }
        else if(a[mid]<key)
        {
            l=mid-1;
        }
        else
        {
            f=mid+1;
        }
    }
    if(c==1)
    {
        printf("Element exists which is %d\n");
    }
    else
    {
        printf("Element does not exist\n");
    }
}
/*********************************************************************************************************/
int main()
{
    int a[100],n,ele;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value which is to be searched");
    scanf("%d",&ele);
    Linear(a,n,ele);
    Binary(a,n,ele);
    return 0;
}