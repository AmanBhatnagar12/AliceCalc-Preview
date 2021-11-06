//Alice Calculator
/*Simple Operations
Addition ,Sub*/

#include <stdio.h>
int main() {
// To input the numbers and perform the operations
int op;
// Numbers
int a,b;
// Result to display
float res;

//Name
printf("Alice Calculator\n");

printf("Enter the First number:-");
scanf("%d",&a);

printf("Enter the Second Number-:");
scanf("%d",&b);

printf("Enter the Operation: \n1 for Addition \n2 for Subtraction \nChoice: ");
scanf("%d",&op);

switch(op){
//Addition
case 1:
res=a+b;
printf("Result is %f",res);
break;

case 2:
res=a-b;
printf("Result is %f",res);
break;

default:
printf("None of the operations matched. Have a nice day");
}

return 0;
}