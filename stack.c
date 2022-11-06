#include<stdio.h>
main()
{
    int i,a[50],n;
    print("Enter num of elements:")
    scanf("%d",&n)
    printf("Enter elements")
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i])
    }
    printf("The array is:")
    for(i=0;i<n;i++)
    {
        printf("%d/t",a[i])
    }
}