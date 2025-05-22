#include <stdio.h>

int main() {
    int n,i;
    int pos,value,temp,key,found=0;
    printf("Enter the number of element : ");
    scanf("%d",&n);

    int a[100];
    printf("A : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");
    printf("----Printing----\n\n");
    printf("A : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    while(1)
    {
       int choice;
       printf("-----Menu-----\n");
       printf("1.Insert\n");
       printf("2.Update\n");
       printf("3.Delete\n");
       printf("4.Display\n");
       printf("5.sort in ascending\n");
       printf("6.sort in descending\n");
       printf("7.search\n");
       printf("8.exit\n");
       printf("Enter Your Choice: ");
       scanf("%d",&choice);
       printf("\n");

       if(choice == 8)
       {
           printf("Exiting....\n");
           break;
       }

       switch(choice)
       {
       case 1:
           printf("Enter position to insert : ");
           scanf("%d",&pos);

           printf("Enter value to insert : ");
           scanf("%d",&value);

           for(i=n; i>pos; i--)
           {
               a[i]=a[i-1];
           }
           a[pos]=value;
           n++;
           printf("\nArray after insertion:\nA : ");
           for(i=0; i<n; i++)
           {
               printf("%d ",a[i]);
           }
           printf("\n\n");
           break;

       case 2:
           printf("Enter position you want to update : ");
           scanf("%d",&pos);

           printf("Enter the new value to insert : ");
           scanf("%d",&value);

           a[pos]=value;

           printf("\nArray after update :\nA : ");
           for(i=0; i<n; i++)
           {
               printf("%d ",a[i]);
           }
           printf("\n\n");
           break;

       case 3:
           printf("Enter the value to delete  : ");
           scanf("%d",&value);

           printf("Enter position you want to delete : ");
           scanf("%d",&pos);

           for(i=pos; i<n-1; i++)
           {
               a[i]=a[i+1];
           }
           n--;
           printf("\nArray after deleting :\nA : ");
           for(i=0; i<n; i++)
           {
               printf("%d ",a[i]);
           }
           printf("\n\n");
           break;
       case 4:
           printf("A : ");
           for(i=0; i<n; i++)
           {
               printf("%d ",a[i]);
           }
           printf("\n\n");
           break;
       case 5:

           for(i=0; i<n; i++)
           {
               for(int j=i+1; j<n; j++)
               {
                   if(a[i]>a[j])
                   {
                       temp = a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }
           printf("A : ");
           for(i=0; i<n; i++)
           {
               printf("%d ",a[i]);
           }
           printf("\n\n");
           break;
       case 6:

           for(i=0; i<n; i++)
           {
               for(int j=i+1; j<n; j++)
               {
                   if(a[i]<a[j])
                   {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }
           printf("A : ");
           for(i=0 ;i<n; i++)
           {
               printf("%d ",a[i]);
           }
           printf("\n\n");
           break;
       case 7:
           printf("Enter the number you looking for : ");
           scanf("%d",&key);
           for(i=0;i<n;i++)
           {
               if(key == a[i])
               {
                   printf("Value %d found at index %d\n",key,i);
                   found =1;
                   break;
               }
           }
           if(!found)
           {
               printf("Value not found!!\n");
           }
           printf("\n");
           break;
       default :
           printf("Invalid Choice!! choose again!!\n");
           break;

       }



    }

    return 0;
}
