#include<stdio.h>  
int main()
{    

int number=0;    
  
printf("enter a number:");  
scanf("%d",&number);  
  
switch(number){  
case 1:  
printf("Food Item = Pizza \n ");
printf("Price= Rs.239 \n");
break;
case 2:  
printf("Food Item = Burger \n ");
printf("Price= Rs.129 \n");
break;

case 3: 
printf("Food Item = Pasta \n ");
printf("Price= Rs.179 \n");
break;
 
case 4:  
printf("Food Item = French Fries \n ");
printf("Price= Rs.99 \n");
break;
  
case 5:  
printf("Food Item = Sandwich \n ");
printf("Price= Rs.149 \n");
break;
default:  
printf("You order out of menu card");  
}  
return 0;  
}

