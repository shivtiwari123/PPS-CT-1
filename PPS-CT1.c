#include <stdio.h>
#include <math.h>

// HEADER FILES

int main() {

    // GIVING THE OPTIONS USER CAN CHOOSE

    printf("****** MENU ******\n");
    printf("1. Modulus of a number by a divisor of your choice.\n");
    printf("2. Check if number is Odd or Even.\n");
    printf("3. Find out the factorial of the number of your choice.\n");
    printf("4. Finding the sum of digits of a given number.\n");
    printf("5. Finding the sum of n natural numbers.\n");
    printf("******************\n");
    printf("Enter your choice : ");
    int ch;
    scanf("%d",&ch);

    switch(ch) {

        case 1:

        // CODE FOR SOLVING CHOICE 1

        printf("Enter a number and a divisor of your choice : ");
        int a,b,mod;
        scanf("%d %d",&a,&b);
        mod = a%b;
        printf("Modulus : %d",mod);
        break;

        case 2:

        // CODE FOR SOLVING CHOICE 2

        printf("Enter a number of your choice : ");
        int n;
        scanf("%d",&n);
        int g;
        g = n%2;

        // USING NESTED SWITCH CONCEPT
        
        switch(g) {
            case 0:
            printf("It's an Even Number");
            break;
            case 1:
            printf("It's an Odd Number");
            break;
        }
        break;

        case 3:

        // CODE FOR SOLVING CHOICE 3

        printf("Enter a number of your choice : ");
        int x,f=1,i;
        scanf("%d",&x);
        for (i=1; i<=x; i++) {
            f=f*i;
        }
        printf("Factorial of %d is : %d",x,f);
        break;

        case 4:

        // CODE FOR SOLVING CHOICE 4

        printf("Enter a number of your choice : ");
        int j,y,r,s=0;
        scanf("%d",&j);
        y=j;
        while(j>0) {
            r = j%10;
            s = s+r;
            j = j/10;
        }
        printf("Sum of digits of %d is : %d",y,s);
        break;

        case 5:

        // CODE FOR SOLVING CHOICE 5

        printf("Enter the number of natural numbers whose sum is to be found : ");
        int k,t=0,m;
        scanf("%d",&k);
        for (m=0; m<k; m++) {
            t = t+m;
        }
        printf("Sum of %d natural numbers is : %d",k,t);
        break;

        default:

        // IF ANY INVALID CHOICE IS INPUTTED FROM THE MENU

        printf("Invalid Input. Please check and try again");
    }

    return 0;
}