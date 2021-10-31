#include<stdio.h> 
 struct Employee 
 { 
 char Name[20]; 
 int emp_num, age; 
 float Salary; 
 }; 
 int main() 
 { 
 struct Employee emp[20]; 
 int i,n; 
 printf("Enter the no. of Employee:"); 
 scanf("%d",&n); 
 for(i=0;i<n;i++) 
 { 
 printf("Enter full name:"); 
 scanf("%s",emp[i].Name); 
 printf("Enter employee id:"); 
 scanf("%d", &emp[i].emp_num); 
 printf("Enter salary:"); 
 scanf("%f",&emp[i].Salary); 
printf("Enter age:"); 
 scanf("%d",&emp[i].age); 
 } 
 printf("Display Information\n"); 
 for(i=0;i<n;i++) 
 { 
 printf("Name: %s\n ",emp[i].Name); 
 printf("Employee Number: %d\n ", emp[i].emp_num); 
 printf("Salary: %f \n ", emp[i].Salary); 
printf("age: %d \n ", emp[i].age); 
 } 
 return 0; 
 }
