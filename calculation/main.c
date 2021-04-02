#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300.15
#define TAXRATE_150.20
#define TAXRATE_REST.25
#define OVERTIME 40

int main()
{
    //declare variables

   int hours = 0;
   double grossPay = 0.0;
   double taxes = 0.0;
   double NetPay = 0.0;



    //to takes inputs from the user

    scanf("%d", &hours);

   //calculate gross pay

    if (hours <= 40 )
        grossPay = hours * PAYRATE;
    else
       {

       grossPay = 40 * PAYRATE;
     double OvertimeTimePAy = (hours-40) *(PAYRATE * 1.5);
      grossPay += OvertimeTimePAy;
       }

printf("Your gross pay this week is: %.2f\n", grossPay);

       //calculate  the Taxes

       if ( grossPay <= 300)

       taxes = grossPay * TAXRATE_300;

       else if ( grossPay >300 && grossPay<= 450)

        {
            taxes = grossPay * TAXRATE_300;
        taxes += (grossPay-300) * TAXRATE_150;
        }
        else if ( grossPay  > 450)
        {
            taxes =  300 * TAXRATE_300;
            taxes += 150 * TAXRATE_150;
            taxes += (grossPay-450) * TAXRATE_REST ;

        }

        //to calculate NetPay

        NetPay = grossPay - taxes;

          // display the output

          printf("Your taxes this week is: %.2f\n", taxes);
   printf("Your net pay this week is: %.2f\n", NetPay);





       return 0;







}
