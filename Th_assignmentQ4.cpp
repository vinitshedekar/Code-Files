/*4.A foodcourt provides option of prepaid vouchers The customers can buy food from the foodcourt using those vouchers. 
The foodcourt maintains customer name, voucher id and voucher balance. Whenever a product is bought from the shops in foodcourt, 
the appropriate amount will be deducted from the voucher. Write a program in C to define a structure FOODCOURT with appropriate 
members and create a function to update the voucher balance whenever a product is bought by customer.*/
#include <stdio.h>
#include <string.h>
struct foodcourt
{
    char name[20];
    int voucher_id;
    float voucher_balance;
};
int main()
{
    int n;
    printf("Enter number of customers: \n");
    scanf("%d",&n);
    struct foodcourt cust[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter name,voucher id and voucher balance %d\n",i+1);
        scanf("%s %d %f",&cust[i].name,&cust[i].voucher_id,&cust[i].voucher_balance);
    }
    char ans;
    printf("Did you purchase something?\n");
    scanf("%c",&ans);
    if (ans=='y')
    {
        {
            int m;
            float amount;
            printf("Enter voucher id: \n");
            scanf("%d",&m);
            for (int i=0;i<n;i++)
            {
                if (m==cust[i].voucher_id)
                {
                    printf("Enter the amount of the comodity: \n");
                    scanf("%f",&amount);
                    cust[i].voucher_balance-=amount;
                }
            }
        }
        printf("The updated data\n");
        for (int i=0;i<n;i++)
        {
            printf("%s \n",cust[i].name);
            printf("%d \n",cust[i].voucher_id);
            printf("%f \n",cust[i].voucher_balance);
        }
    }
    else
    {
        printf("The current data\n");
        for (int i=0;i<n;i++)
        {
            printf("%s \n",cust[i].name);
            printf("%d \n",cust[i].voucher_id);
            printf("%f \n",cust[i].voucher_balance);
        }
    }
return 0;
}