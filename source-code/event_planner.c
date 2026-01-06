#include <stdio.h>
#include <string.h>

struct Budget {
 char category[50];
 float estimated;
 float actual;
};

int main() {
 struct Budget b[10];
 int count = 0, i;
 char eventName[100];
 char eventDate[40];
 float totalEstimated = 0, totalActual = 0;

 /* Create Event */
 printf("Enter Event Name: ");
 scanf(" %[^\n]", eventName);
 printf("Enter Event Date: ");
 scanf(" %[^\n]", eventDate);

 /* Add Categories */
 printf("\nEnter number of categories: ");
 scanf("%d", &count);
 for (i = 0; i < count; i++) {
 printf("\nEnter Category Name: ");
 scanf(" %[^\n]", b[i].category);
 printf("Enter Estimated Cost: ");
 scanf("%f", &b[i].estimated);
 printf("Enter Actual Cost: ");
 scanf("%f", &b[i].actual);
 totalEstimated += b[i].estimated;
 totalActual += b[i].actual;
 }

 /* Display Output */
 printf("\n====================================\n");
 printf("WEDDING / EVENT BUDGET SUMMARY\n");
 printf("====================================\n");
 printf("Event Name : %s\n", eventName);
 printf("Event Date : %s\n\n", eventDate);
 for (i = 0; i < count; i++) {
 printf("%d. %s | Estimated: %.2f | Actual: %.2f\n",
 i + 1,
 b[i].category,
 b[i].estimated,
 b[i].actual);
 }

 printf("\nTotal Estimated Cost: %.2f\n", totalEstimated);
 printf("Total Actual Cost : %.2f\n", totalActual);
 if (totalActual > totalEstimated)
 printf("Status: OVER Budget by %.2f\n",
 totalActual - totalEstimated);
 else if (totalEstimated > totalActual)
 printf("Status: UNDER Budget by %.2f\n",
 totalEstimated - totalActual);
 else
         
 printf("Status: Budget Balanced\n");
 printf("\nProgram Executed Successfully\n");
 return 0
