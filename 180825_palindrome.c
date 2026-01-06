#include<stdio.h>
int main(){
int a , asli , ulta=0,dig;
printf("Enter the num: ");
scanf("%d",&a);
asli = a;
while(a>0){
ulta = ulta*10+dig;
dig = a%10;
a=a/10;
}
if(asli==ulta)
printf("Palindrome");
else
printf("not palindrome");
return 0;
}
