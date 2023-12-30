// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main(){
    int choice;
    printf("please select the Required option :  \n 1. Calculate SI and CI \n 2. Calculate GST \n 3. Calculate Discount ");
    scanf("%d",&choice);
    
    switch (choice){
        
        case 1:
float P,R,T,SI,A,CI;//declaring variable
    
   printf ("Enter the principle of interest of (P)\n");// taking principle from user
   scanf ("%f",& P);
   printf ("Enter the rate of interest of (R)\n");//taking Rate from user
   scanf ("%f",& R);
   printf ("Enter the time of interest of (T)\n");//taking time from user
    scanf ("%f", & T);
    
    SI = (P*R*T)/100; //formula of simple interest
    printf (" Simple interest is = %.2f \n",SI); //printing output 
    
  A = P*((pow((1+R/100),T)));//calculate amount
   CI = A-P;// calculate compound interest
   printf (" Compound Interest is = %.2f \n",CI);
   break;
   case 2 : 

 float amount,gst, tamount;//Declaring Variables

printf("Please enter the amount: \n");
scanf("%f",&amount);

printf("Please enter the GST Percentage");// Taking GST % from
scanf("%f",&gst);

float GSTamount = (amount * gst)/100;//Calculations
 tamount = amount + GSTamount;

printf("This is the final discount amount:%.2f \n", GSTamount);

printf("The final amount after adding GST is %.2f:", tamount);
break;

case 3:
//Declaring variables

float amount1, percentage, discounted_amt, final_amt;

//Taking orginal amount from user

 printf("Enter the orignal amount:\n");

 scanf("%f", &amount1);

//Taking discount percentage from user

printf("Enter the discount percentage:\n");

scanf("%f", &percentage);

//Calculatingdiscounted amount and final amount

discounted_amt=amount1-(amount1*percentage)/100;
printf("This is the final discount amount:%.2f \n", discounted_amt);

final_amt = amount1-discounted_amt;
 //Printing output

printf("this is the final item amount:%.2f \n",final_amt);
break;
return 0;
}
}
