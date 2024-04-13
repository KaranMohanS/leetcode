#include<stdio.h>

int main()
{
    int startTimeSize,endTimeSize,c;
    scanf("%d %d",&startTimeSize,&endTimeSize);
    int startTime[startTimeSize],endTime[endTimeSize];
    for(int i=0,j=0;i<startTimeSize,j<endTimeSize;i++,j++)
    {
        scanf("%d \n %d",&startTime,&endTime);
    }
    int queryTime;
    scanf("%d",&queryTime);
    c=busystudents(startTime,startTimeSize,endTime, endTimeSize, queryTime);
    printf("%d",c);
}
int busystudents(int *startTime,int startTimeSize,int *endTime,int endTimeSize,int queryTime)
{
    int c=0;
    for(int i=0,j=0;i<startTimeSize,j<endTimeSize;i++,j++)
    {
        if(startTime[i]<=queryTime && endTime[i]>=queryTime)
        {
            c++;
        }
    }
    return c;
}