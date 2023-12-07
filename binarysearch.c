#include<stdio.h>
#include<conio.h>
#define size 10

int binsearch(int a[], int x , int low,int high)
{
  int mid;
  
  if(low>high)
     return(-1);
     
  mid=(low+high)/2 ;
  
  if(x==a[mid])
      return (mid);
  else if (x<a[mid])
      binsearch(a,x,low,mid-1);
  else
      binsearch(a,x,mid+1,high);     
  }
  
  int main()
  {
     int n , i , low , high , a[size],key,ans;
     
     printf("\n\t\t\t\tBINARY SEARCH RECURSIVE\n");
     
     printf("Enter the total number of Elements");
     scanf("%d",&n);
     
     printf("Enter the List of Elements\n");
     for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     
     low=0;
     high=n-1;
     
     printf("\nEnter the Element to be searched\n");
     scanf("%d",&key);
     
     ans=binsearch(a,key,low,high);    
  
     if(ans!=-1)
     printf("\nnumber %d present at location %d",key,ans+1);
     else
     printf("Element Not Present");  
  getch();
  return 0;
  }
