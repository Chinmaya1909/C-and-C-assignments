#include <stdio.h>
#include <string.h>
 
typedef struct{
 
    char name[30];
    int id;
    char experience;
    int salary;
 
} Employee;
 
int main()
{
    int i, n=5;
 
    Employee e[n];

    printf("Enter %d Employee Details-\n\n",n);
    for(i=0; i<n; i++){
 
        printf("Employee %d:\n",i+1);
        printf("Name: ");
        scanf("%s",e[i].name);
        printf("Id: ");
        scanf("%d",&e[i].id);
        printf("experience:");
        scanf("%s",e[i].experience);
        printf("Salary: ");
        scanf("%d",&e[i].salary);
 
        printf("\n");
    }
    printf("Employees Details\n");
 
    for(i=0; i<n; i++){
 
        printf("Name \t: ");
        printf("%s \n",e[i].name);
        printf("Id \t: ");
        printf("%d \n",e[i].id);
        printf("Experience \t:");
        printf("%s\n",e[i].experience);
        printf("Salary \t: ");
        printf("%d \n",e[i].salary);
        printf("\n");
    }
 
    return 0;
 
}
