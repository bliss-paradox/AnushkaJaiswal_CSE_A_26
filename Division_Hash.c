#include<stdio.h>
#include<math.h>
int NearestPrime(int ts)
{
    int i=0,j=0,flag=0;
    for(i=ts;i>=2;i--)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        return i;
    }
}
/*****************************************************************************************************************************/
int divisionHash(int key,int t)
{
    
     int np=NearestPrime(t);
     int l=key%np;
    return l;

}
/****************************************************************************************************************************/
int main()
{
    printf("Therefore the result is as shown:\n");
    printf("%d\n",divisionHash(1234,100));
    printf("%d\n",divisionHash(2335,100));


    return 0;
}