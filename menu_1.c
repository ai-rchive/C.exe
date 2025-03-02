#include <stdio.h>
int validan(){
	int a;
	do {
		scanf("%d",&a);
		if (a!=1 && a!=2){
			printf("INVALID INPUT TRY AGAIN \n");
			while(getchar()!='\n');
		}
	}while (a!=1 && a!=2);
	return a;
}

int valida(){
	int a;
	do {
		scanf("%d",&a);
		if (a!=1 && a!=2 && a!=3){
			printf("INVALID INPUT TRY AGAIN \n");
			while(getchar()!='\n');
		}
	}while (a!=1 && a!=2 && a!=3);
	return a;
}

int valids(){
	int a,check;
	do {
		check=scanf("%d",&a);
		if (check!=1){
			printf("INVALID INPUT TRY AGAIN \n");
			while(getchar()!='\n');
		} else if (a<1){
			printf("INVALID INPUT TRY AGAIN \n");
			while(getchar()!='\n');
			a=0;
			check=0;
		}
	}while (check!=1);
	return a;
}

int validi(){
	int a,check;
	do {
		check=scanf("%d",&a);
		if (check!=1){
			printf("INVALID INPUT TRY AGAIN \n");
			while(getchar()!='\n');
		} 
	}while (check!=1);
	return a;
}

void search1(int arr[],int s, int key){
	int check = 0;
	int keyi[s];
	int j=0;
	
	for (int i=0;i<s;i++){
		if (key==arr[i]){
			check++;
			keyi[j]=i;
			j++;
		}
	}
	if (check>0){
		printf("%d found at :\n",key);
		int j=0;
		while(check>0){
			printf("array[%d]\n",keyi[j]);
			check--;
			j++;
		}
	}else{
		printf("%d is not found in the array\n",key);
	}
}
		
void search2(int r,int c, int arr[r][c],int s, int key){
	int check = 0;
	int keyi[s],keyj[s];
	int k=0;
	
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			if (key==arr[i][j]){
			check++;
			keyi[k]=i;
			keyj[k]=j;
			k++;
		}
		}

	}
	if (check>0){
		printf("%d found at :\n",key);
		int k=0;
		while(check>0){
			printf("array[%d][%d]\n",keyi[k],keyj[k]);
			check--;
			k++;
		}
	}else{
		printf("%d is not found in the array\n",key);
	}
}


void sort1(int a[],int s){
	for (int i=0;i<s-1;i++){
		int min=i;
		for(int j=i+1; j<s; j++){
			if (a[min]>a[j]){
				min = j;
			}
		}
		if (min !=i){
			int temp = a[i];
			a[i]=a[min];
			a[min]=temp;
		}

	}
	printf("\nSorted array\n");
	for (int i=0; i<s;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void sort2(int a[],int s,int r, int c){
	for (int i=0;i<s-1;i++){
		int min=i;
		for(int j=i+1; j<s; j++){
			if (a[min]>a[j]){
				min = j;
			}
		}
		if (min !=i){
			int temp = a[i];
			a[i]=a[min];
			a[min]=temp;
		}

	}
	int arr[r][c];
	int k=0;
	for (int i=0;i<r;i++){
		for (int j=0; j<c; j++){
			arr[i][j]=a[k];
			k++;
		}
	}
	printf("\nSorted array\n");
	for (int i=0;i<r;i++){
		printf("\n");
		for (int j=0; j<c; j++){
			printf("%d\t",arr[i][j]);
		}
		
	}
	printf("\n");
}

int main(){
	char name [80];
	int a;
	printf("Please enter your name\n");
	scanf("%s",name);
	do{
		printf("%s, Please choose: (Enter the number)\n",name);
		printf("\t 1. 1d Array\n");
		printf("\t 2. 2d Array\n");
		printf("\t 3. Exit\n");
		a=valida();
		if (a==3){
			printf("%s, Are you sure you want to exit (1 for YES, 2 for NO)\n",name);
			a=validan();
			if (a==1){
				printf("%s, Thank you for using the program\nEXITING...",name);
				a=3;
			}else{
				a=0;
			}
			}
		
		
		while(a==1){
			int s,a1;
			printf("%s, Please choose what you want to your array:\n",name);
			printf("\t 1. Search\n");
			printf("\t 2. Sort\n");
			printf("\t 3. Back\n");
			a1=valida();
			if (a1==3){
			a=0;
			}	
			
			while(a1==1){
				int key=0;
				printf("%s, Please enter the size of your array:\n",name);
				s=valids();
				int arr[s];
				printf("%s, Please enter %d integers:\n",name,s);
				for (int i=0; i<s;i++){
					arr[i]=validi();
				}		
				printf("%s, Please an integer you want to find\n",name);
				key=validi();
				search1(arr,s,key);
				printf("%s, Do you want to try again or go back?(1 for TRY AGAIN, 2 for GO BACK)\n",name);
				a1=validan();
				if (a1==2){
					a1=0;
				}
			}
				while(a1==2){
				printf("%s, Please enter the size of your array:\n",name);
				s=valids();
				int arr[s];
				printf("%s, Please enter %d integers:\n",name,s);
				for (int i=0; i<s;i++){
					arr[i]=validi();
				}
				
				printf("Unsorted array:");
				printf("\n");
				for (int i=0;i<s;i++){
					printf("%d\t",arr[i]);
				}
				sort1(arr,s);
				printf("%s, Do you want to try again or go back?(1 for TRY AGAIN, 2 for GO BACK)\n",name);
				a1=validan();
				if (a1==2){
					a1=0;
				} 
			}
		}
	
		while(a==2){
			int s,a1;
			printf("%s, Please choose what you want to your array:\n",name);
			printf("\t 1. Search\n");
			printf("\t 2. Sort\n");
			printf("\t 3. Back\n");
			a1=valida();
			if (a1==3){
			a=0;
			}
			while(a1==1){
				int key=0;
				int r,c;
				printf("%s, Please enter the size of the rows of your array:\n",name);
				r=valids();
				printf("%s, Please enter the size of the columns of your array:\n",name);
				c=valids();
				s=r*c;
				int arr[r][c];
				printf("%s, Please enter %d integers:\n",name,s);
				for (int i=0; i<r;i++){
					for (int j=0; j<c;j++)
						arr[i][j]=validi();
				}		
				printf("%s, Please an integer you want to find\n",name);
				key=validi();
				search2(r,c,arr,s,key);
				printf("%s, Do you want to try again or go back?(1 for TRY AGAIN, 2 for GO BACK)\n",name);
				a1=validan();
				if (a1==2){
					a1=0;
				}
			}
			while(a1==2){
				int r,c;
				printf("%s, Please enter the size of the rows of your array:\n",name);
				r=valids();
				printf("%s, Please enter the size of the columns of your array:\n",name);
				c=valids();
				s=r*c;
				int arr[r][c];
				printf("%s, Please enter %d integers:\n",name,s);
				for (int i=0; i<r;i++){
					for (int j=0; j<c;j++)
						arr[i][j]=validi();
				}		
				
				printf("Unsorted array:");
				printf("\n");
				for (int i=0; i<r;i++){
					printf("\n");
					for (int j=0; j<c;j++)
						printf("%d\t",arr[i][j]);		
				}
				//2d to 1d
				int x[s];
				int k=0;
				for (int i=0; i<r;i++){
					for (int j=0; j<c;j++)
						x[k]=arr[i][j];
						k++;
				}	
				sort2(arr,s,r,c);
				printf("\n%s, Do you want to try again or go back?(1 for TRY AGAIN, 2 for GO BACK)\n",name);
				a1=validan();
				if (a1==2){
					a1=0;
				} 
			}
			}
	
	}while (a!=3);
	return 0;
}
