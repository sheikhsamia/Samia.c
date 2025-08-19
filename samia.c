    #include<stdio.h>
    int main() {
    int a,b,temp;
    printf("enter frist number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping");
    printf("Frist number = %d\n",a);
    printf("second number = %d\n",b);
    return 0;
    }