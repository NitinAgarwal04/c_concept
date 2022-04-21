#include <stdio.h>
int main()
{int billamt,amtgiven;
scanf("%d",&billamt);
scanf("%d",&amtgiven);
int c=billamt%amtgiven;
int d=billamt/amtgiven;
printf("Quotient:%d\n",d);
printf("Remainder:%d",c);
return 0;
}
