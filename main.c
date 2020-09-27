#include <stdio.h>
int main(void) {
  int select;
  float num1,num2,ans;

  printf("MENU \n");
  printf("1.ADD (+) \n");
  printf("2.Subtract (-)\n");
  printf("3.Multiply (*) \n");
  printf("4.Divide (/) \n");
  printf("5.Modulo (%%) \n");

  printf("Enter Number 1: ");
  scanf("%f",&num1);
  printf("Enter Number 2: ");
  scanf("%f",&num2); 
  printf("Select Choice : ");
  scanf("%d",&select); 

  int n1=(int)num1, n2=(int)num2;

  switch(select){
    case 1 :
      ans = num1+num2;
      printf("Answer is %.3f + %.3f = %.3f ",num1,num2,ans);
      break;
    case 2 :
      ans = num1-num2;
      printf("Answer is %.3f - %.3f = %.3f ",num1,num2,ans);
      break;
    case 3 :
      ans = num1*num2;
      printf("Answer is %.3f * %.3f = %.3f ",num1,num2,ans);
      break;
    case 4 :
      ans = num1/num2;
      if(num2 == 0){
        printf("Divide by Zero !!!");
      }
      else{
      printf("Answer is %.3f / %.3f = %.3f ",num1,num2,ans);
      }
      break; 
    case 5 :
      ans = n1%n2;
      if(num2 == 0){
        printf("Divide by Zero !!!");
      }
      else{
        printf("Answer is %.3f + %.3f = %.3f ",num1,num2,ans);
      }
      break;     
  }
}