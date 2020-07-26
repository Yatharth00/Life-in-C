 //Write a C program to check two given integers,
  //and return true if one of them is 30 or if their sum is 30.

  #include<stdio.h>
  int main()
  {
      int a,b;
      printf("enter the number");
      scanf("%d %d",&a,&b);
     int c =  checking_func(a,b);
        printf("%d",c);      
  }
  int checking_func(int a,int b)
  {
      return a==30||b==30||(a+b==30);
  }
