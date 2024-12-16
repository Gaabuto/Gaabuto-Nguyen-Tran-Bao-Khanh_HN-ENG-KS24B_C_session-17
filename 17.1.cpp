#include <stdio.h>
void addIndex(int ar[], int *size){
	
	printf("moi ban nhap so phan tu: ");
	scanf("%d",size);
	
	for ( int i = 0; i < *size; i ++){
		printf("moi ban nhap phan tu thu %d: ", i + 1);
		scanf("%d", &ar[i]);
	}
	printf("\n");
}

void printAr(int ar[], int *size){
	printf("cac phan tu co trong mang la: ");
	for ( int i = 0; i < *size; i ++){
		printf("%d ",ar[i]);
	}
	printf("\n");
}

void calcSum( int ar[], int *size){
	int sum = 0;
	for (int i = 0; i < *size; i ++){
		sum += ar[i];
	}
	printf("tong cac so co trong phan tu la %d\n", sum);
}

void findMax( int ar[], int *size){
	int max = ar[0];
	for (int i = 0; i < *size; i ++){
		if ( ar[i] > max){
			max = ar[i];
		}
	}
	printf("phan tu lon nhat trong mang la %d\n", max);
}

int main(){
	int choose,ar[100],size,sum,max;
	
	
	do{
		printf("\t MENU\n1. nhap vao so phan tu va tung phan tu\n2. Hien thi cac phan tu co trong mang\n3. Tinh do dai mang\n4. Tinh tong cac phan tu trong mang\n5. Tim phan tu lon nhat\n6. Thoat\nMoi ban chon lua chon cua ban: ");
	scanf("%d", &choose);
	
		switch ( choose) {
			case 1:{
				addIndex(ar,&size);
				break;
			}
			case 2:{
				printAr(ar,&size);
				break;
			}
			case 3:{
				printf("Do dai cua mang la %d\n", size);
				break;
			}
			case 4:{
				calcSum(ar, &size);
				break;
			}
			case 5:{
				findMax(ar,&size);
				break;
			}
			default:{
				printf("K hop le, moi ban nhap lai !!");
				break;
			}
		}
		
		
		
	}while (choose != 6);
	printf("Tam biet");
	return 0;
}
