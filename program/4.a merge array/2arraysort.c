#include<stdio.h>
int main()
{
    int a[10],b[10],c[20],i,j,k,size,size2,size3;
    size3=size+size2;
    printf("\nenther the size of first array :  ");
    scanf("%d",&size);
    printf("\nenter the elements of first array:  ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("\nenter the size 2nd array :");
    scanf("%d",&size2);
    printf("\n enter the elements of 2nd array:");
    for(j=0;j<size2;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\n the array elements you have been enterde are:");
    printf("\nfirst array:");
    for(i=0;i<size;i++)
    {
        printf("\nthe element of first array at index %d is :%d",i,a[i]);
    }
    printf("\nsecond array:");
    for(j=0;j<size2;j++)
    {
        printf("\nthe element of second array at index %d is :%d",j,b[j]);

    }
i=0;
j=0;
k=0;

      while((i<size)&&(j<size2))
      {
          if(a[i]<b[j])
          {
              c[k]=a[i];
              i++;
              k++;

          }
          else
          {
              c[k]=b[j];

              j++;
              k++;
          }

      }
       if(i>=size)
       {


          while(j<size2)
          {
              c[k]=b[j];
              j++;
              k++;

      }    }

         if(j>=size2)
         {


          while(i<size)
          {
              c[k]=a[i];
              i++;
              k++;
          }

          printf("\nthe third array after sorting is ");

     for(k=0;k<size+size2;k++)
          {
              printf("\nthe elements are :%d",c[k]);
          }



return 0;


}
}
