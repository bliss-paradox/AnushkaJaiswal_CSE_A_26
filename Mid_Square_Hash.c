#include<stdio.h>
#include<math.h>
int DigitCount(int n)
{
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    return c;
}
/***********************************************************************/
int MidSquareHashing(long long n,int t)
{
    int d=DigitCount(t-1);
    int a=DigitCount(n);
    int r=((2*a)-d)/2;
    int e=pow(10,r);
    n=(n*n)/e;
    int mod=pow(10,d);
    return n%mod;
    
}
/***********************************************************************/
int main()
{
    printf("%d\n",MidSquareHashing(1234,100));
    printf("%d\n",MidSquareHashing(4565,100));


    return 0;
}