#include<stdio.h>
int main()
{
  int salarysize;
  printf("enter salarySize");
  scanf("%d",&salarysize);

  int salary[salarysize];
  printf("enter salarys");
  for(int i=0;i<salarysize;i++)
  {
    scanf("%d",&salary[i]);
  }
  int ans=average(salary,salarysize); 
  printf("average salary--->%d",ans);
  return 0;
}
int average(int* salary,int salarysize)
{
  int max=salary[0];
  int min=salary[0];
  int sum=0;

  for(int i=0;i<salarysize;i++)
  {
    if(salary[i]<min)
    {
      min=salary[i];
    }
    if(salary[i]>min)
    {
      min=salary[i];
    }
    sum=sum+salary[i];
  }
 int  average=(sum-min-max)/(salarysize-2);
  return average;
}