# Requirements:
# Introduction : Magic number
     A number is said to be a Magic Number, if the recursive sum of the digits up to single digit will be equal to 1.
# Features:
     If the single digit of the given sum of the digits is 1 the the number is called a magic number.
     for example,For example, 325 is a magic number because the sum of its digits (3+2+5) is 10, and again sum up the resultant (1+0), we get a single digit (1) as the result. Hence, the number 325 is a magic number.
# Swot Analysis:
Strength - It is easier to read and understnand.

Weakness - It may makes the code more verbose.

Oppurtunity - Learn the tricks of numericals.

Threats - No software can be created.
# 4W:
Where: It can be palyed in system and mobilephones.

When : The user can access it anytime , everywhere.

Who: People who likes mathematical tricks.

Why: It is a fun based method between two people.
# 1H:
* Go to the mobile application.
* Open the calculator app and to perform the mathematical pattern.
# Detail Requirements:
 * High Level Requirements:
 
   Input a number.
 
   Calculate the sum of the digits.
 
   Check the final answer is equal to the condition given.
 
   If yes,then the number is a Magic Number.
 
 * Low Level Requirements:
 
    User inputs.
    
    Condition should be applied.
    
    
 # Design
    
![Structural diagram](https://user-images.githubusercontent.com/94303488/143221580-413deb31-abcc-4593-a46b-40a80a0cd636.png)
![Behavioural Diagram](https://user-images.githubusercontent.com/94303488/143221633-de8c77f2-9031-4f34-a880-fa70a65f4cc4.png)

# Implementation:
 #include<stdio.h>


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

# TestPlan
   High Level Requirements:

Input a number.

Calculate the sum of the digits.

Check the final answer is equal to the condition given.

If yes,then the number is a Magic Number.

Low Level Requirements:

User inputs.

Condition should be applied.

# Output
 
![output](https://user-images.githubusercontent.com/94303488/143222653-74fe6b00-8c71-4462-b3ac-27912698f695.jpeg)
