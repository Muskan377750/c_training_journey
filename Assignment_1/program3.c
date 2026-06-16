#include <stdio.h>

int main(){
    int employees_id;
    int working_hrs;
    float salary_amount;

    printf("Enter employees ID : ");
    scanf("%d",&employees_id);
    printf("Enter working hours : ");
    scanf("%d",&working_hrs);
    printf("Enter salary amount per hour : ");
    scanf("%f",&salary_amount);

    printf("Employees ID = %d\n",employees_id);
    printf("Salary = %.2f\n",salary_amount*working_hrs);
    return 0;
}