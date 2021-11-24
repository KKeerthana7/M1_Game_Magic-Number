#iinclude<stdio.h>


int sum_of_dig(int x) 
  
{
  
int s=0, digit;
  
while(x>0) 
  
{
digit = x℅10;
s = s+digit;
x = x/10;
  
  
}
return s;
  
}

int main()
  
{
int n, sum;
  
  
printf("enter the number\n") ;
  
gets("℅d", &n);
  
sum = sum_of_dig(n);
  
while(sum>0&&sum>9) 
{
sum = sum_of_dig(sum);
  
}
  
if (sum==1) 
  
printf("the given number ℅d is Magic Number and sum value is ℅d", n, sum);
  
else
  
printf ("the given number ℅d is not a Magic Number and sum value is %d", n, sum);
  
return 0;
  
}
