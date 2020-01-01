#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int l,int h){
	while(l<=h) {
		int mid=(l+h)/2;
		if(h-l==1)
		return arr[l]>arr[h]?arr[h]:arr[l];
		if(h-l==0)
		return arr[h];
		if(arr[mid-1]>arr[mid]&&arr[mid+1]>arr[mid])
		return arr[mid];
		if(arr[h]>arr[mid])
		h=mid-1;
		else
		l=mid;
	}
}
int main() {
	int test,r;
	scanf("%d",&test);
	for(int i=0;i<test;i++) {
		int n;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++) 
		scanf("%d",&arr[i]);
		int res=bs(arr,0,n-1);
		printf("%d\n",res);
	}
}
