#include<stdio.h>
struct customer
{
    char cust_name[20];
    int amount_due;
    int amount_paid;
    int mobile_no;
    int no_of_orders;
};
int main()
{
    int n,t;
    printf("\nEnter number of customers visited:");
    scanf("%d",&n);
          printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>Menu<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
    printf("\n<<<<<<<<<<C@FE ITEM$ WITH CODE$>>>>>>>\n");
    printf("\n1.BURGER : Rs. 50\n2.PIZZA : Rs.  90\n3.ESPRESSO: Rs. 35\n4.FRENCH FRIES : Rs. 50\n5.CHOCOLATE MOUSSE : Rs. 45");
    struct customer c[n];
    int i,j=1,at=0;
    for(i=0;i<n;i++)
    {
    printf("\n%d)Enter customer name:",i+1);
    scanf("%s",c[i].cust_name);
    printf("Number of orders:");
    scanf("%d",&c[i].no_of_orders);
    int q = 0;
    do
    {
    printf("\nEnter Code of order no. %d :",j);
    scanf("%d",&t);
    printf("Enter quantity : ");
    scanf("%d",&q);
    switch(t)
    {
    case 1:
    at = at + 50 * q;
    break;
    case 2:
    at = at + 90 * q;
    break;
    case 3:
    at = at + 35 * q;
    break;
    case 4:
    at = at + 50 * q;
    break;
    case 5:
    at = at + 45 * q;
    break;
    default:
    printf("\nWrong item");
    }
    j++;
    }while(c[i].no_of_orders>=j);
    j=1;
    c[i].amount_due=at;
    printf("Total Amount:%d",at);
    printf("\nEnter amount paid:");
    scanf("%d",&c[i].amount_paid);
    printf("\nEnter Mobile Number:");
    scanf("%d",&c[i].mobile_no);
    printf("************************CUSTOMER BILL*****************************\n");
    printf("__________________________________________________________________\n");
    printf("|SN\t\t|NAME\t\t|NO OF ORDERS\t\tAMOUNT PAID\n");
    printf(" %d\t\t %s\t\t  %d\t\t\t%d",i+1,c[i].cust_name,c[i].no_of_orders,c[i].amount_paid);
    at=0;
    }
    printf("\n\n***********************************CUSTOMER VISITED INFO*******************************************\n");
    printf("_____________________________________________________________________________________________________\n");
printf("|SN\t\t|NAME\t\t|NO OF ORDERS\t\tAMOUNT PAID\t\tMOBILE NUMBER\n");
for ( i = 0; i < n; i++)
{
printf(" %d\t\t %s\t\t  %d\t\t\t%d\t\t\t%d",i+1,c[i].cust_name,c[i].no_of_orders,c[i].amount_paid,c[i].mobile_no);
printf("\n---------------------------------------------------------------------------------------------------\n");
    }
return 0;
}
