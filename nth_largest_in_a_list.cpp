// C PROGRAM FOR FINDING Nth LARGEST NUMBER IN A LIST

#include <stdio.h>
 int main (){
 int num[20];
 int i, j, a, n;
 printf("enter number of elements in an array\n");
 scanf("%d", &n);
 printf("Enter the elements\n");
 for (i = 0; i < n; ++i)
 scanf("%d", &num[i]);
 for (i = 0; i < n; ++i){
 for (j = i + 1; j < n; ++j){
 if (num[i] < num[j]){
 a = num[i];
 num[i] = num[j];
 num[j] = a;
 }
 }
 }
 int nth;
 printf("N = ");
 scanf("%d",&nth);
 printf("%dth Largest number : %d",nth,num[nth-1]);
}

