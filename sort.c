#include<stdio.h>
void main(){
	int s;
	int sz;
	
	printf("Please enter array size\n");
	scanf("%d",&sz);
	int arr[sz];
	for(int c=0;c<sz;c++){
	printf("Please enter number %d\n",c+1);
	scanf("%d",&arr[c]);
	}
	for(int x=0;x<sz;x++){
		for(int y=x+1;y<sz;y++){
			if(arr[x]>=arr[y]){
				s=arr[x];
				arr[x]=arr[y];
				arr[y]=s;
			}
			
		}
		
	}
	
	for(int c=0;c<sz;c++){
	printf("arr no %d   %d\n",c+1,arr[c]);

	}
}