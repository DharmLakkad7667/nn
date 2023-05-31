#include<stdio.h>
#include<string.h>

 main()
 {
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a string:");
    scanf("%s",a);
    
    for(i=0;i < length ;i++)
	{
        if(a[i] !=a[length-i-1])
		{
            flag = 1;
            break;
           }
        }
    
    if (flag) 
	{
        printf("%s is not a palindrome",a);
    }    
    else
	 {
        printf("%s is a palindrome",b);
    }
    
}

