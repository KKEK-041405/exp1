#include<stdio.h>
void main() {
int a[100],i,j,n,low=0,temp=0,high,key,flag=0,mid;
printf("Enter Array Length\n");
scanf("%d",&n);
printf("Enter elements\n");
for(i=0;i<n;i++) {
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++) {
for(j=0;j<n-i-1;j++) {
if(a[j]>a[j+1]) {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Sorted Array : ");
for(i=0;i<n;i++) {
if(i<n-1)
printf("%d\t",a[i]);
else
printf("%d\n",a[i]); }
printf("Enter value to find :");
scanf("%d",&key);
high=n-1;
while(low<=high) {
mid=(low+high)/2;
if(key==a[mid]) {
flag=1;
break;
}
else if(key>a[mid])
low=mid+1;
else
high=mid-1;
}
if(flag==1) {
printf("Found element at %d",mid);
}
else
printf("Not found.");
}