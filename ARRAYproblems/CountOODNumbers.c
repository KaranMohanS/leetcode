#include<stdio.h>
int main()
{
    int low,high;
    scanf("%d %d",&low,&high);
    int c=countodd(low,high);
    printf("ODD Number Count--->%d",c);
}
int countodd(int low,int high)
{                             // method 1;
    int c;
    //for(int i=low;i<=high;i++)
   // {
   ///     if(i%2!=0)
    //    {
   //         c++;
    //   }
   // }
                           // method 2
    if(low%2!=0 || high%2!=0)
    {
        c++;
    }
    return (high-low)/2+c;
}
