#include<stdio.h>

int dwarfarr(int a[5]){
	
	printf("Array:");
	for(int i=0;i<5;i++){
	int temp[5];
	for(int i=0;i<5;i++){
		temp[i]=0;
	}	
	
	int k=0;
	int sum=0;
	for(int i=1;i<a[i]-1;i++){
		if(a[i]%i==0){
			sum+=i;
			temp[k]=i;
			k++;
		}
	}
	
	printf("\nFactors are:\t\t");
	k=0;
	while(temp[k]!=0){
		printf("%d\t",temp[k]);
		k++;
	}	
	
	k=0;
	printf("\nSum of its factors=\t");
	while(temp[k]!=0){
		if(k==0){
		printf("%d ",temp[k]);
		}else{
		printf("+%d ",temp[k]);	
		}
		k++;
	}
	
	printf("=%d",sum);
	float div=(float)a[i]/2;
	

	printf("\nHalf of the number: \t%d/2 = %.2f\n",a[i],div);                       
	if(sum>a[i]/2){
	printf("%d is a dwarf number",a[i]);
	}else{
	printf("%d is NOT a dwarf number",a[i]);
	}
		printf("\n");  
	}
}

int dwarfptr(int *p){
	
	printf("\nPointer:");
	for(int i=0;i<5;i++){
	int temp[5];
	for(int i=0;i<5;i++){
		temp[i]=0;
	}	
	
	int k=0;
	int sum=0;
	for(int i=1;i<*(p+i)-1;i++){
		if(*(p+i)%i==0){
			sum+=i;
			temp[k]=i;
			k++;
		}
	}
	
	printf("\nFactors are:\t\t");
	k=0;
	while(temp[k]!=0){
		printf("%d\t",temp[k]);
		k++;
	}	
	
	k=0;
	printf("\nSum of its factors=\t");
	while(temp[k]!=0){
		if(k==0){
		printf("%d ",temp[k]);
		}else{
		printf("+%d ",temp[k]);	
		}
		k++;
	}
	
	printf("=%d",sum);
	float div=(float)*(p+i)/2;
	

	printf("\nHalf of the number: \t%d/2 = %.2f\n",*(p+i),div);                       
	if(sum>*(p+i)/2){
	printf("%d is a dwarf number",*(p+i));
	}else{
	printf("%d is NOT a dwarf number",*(p+i));
	}
		printf("\n");  
	}
}

int dwarfarrptr(int a[5]){
	
	printf("\nArray as a Pointer:");
	for(int i=0;i<5;i++){
	int temp[5];
	for(int i=0;i<5;i++){
		temp[i]=0;
	}	
	
	int k=0;
	int sum=0;
	for(int i=1;i<*(a+i)-1;i++){
		if(*(a+i)%i==0){
			sum+=i;
			temp[k]=i;
			k++;
		}
	}
	
	printf("\nFactors are:\t\t");
	k=0;
	while(temp[k]!=0){
		printf("%d\t",temp[k]);
		k++;
	}	
	
	k=0;
	printf("\nSum of its factors=\t");
	while(temp[k]!=0){
		if(k==0){
		printf("%d ",temp[k]);
		}else{
		printf("+%d ",temp[k]);	
		}
		k++;
	}
	
	printf("=%d",sum);
	float div=(float)*(a+i)/2;
	

	printf("\nHalf of the number: \t%d/2 = %.2f\n",*(a+i),div);                       
	if(sum>*(a+i)/2){
	printf("%d is a dwarf number",*(a+i));
	}else{
	printf("%d is NOT a dwarf number",*(a+i));
	}
		printf("\n");  
	}
}

int main(){
	
	int a [5]={3,6,9,12,14};	
	printf("Integers in the Array:\t");
	for(int i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	printf("\n\n"); 
	int *p=a;
	
	dwarfarr(a);
	printf("\n\n\n"); 
	dwarfptr(p);
	printf("\n\n\n"); 
	dwarfarrptr(a);
	
	return 0;
}

