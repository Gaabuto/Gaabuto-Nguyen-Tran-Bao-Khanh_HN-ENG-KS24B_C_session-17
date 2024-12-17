#include <stdio.h>

void addAr(int ar[], int *size){
	printf("so phan tu co trong mang: ");
	scanf("%d", size);
	while(*size<=0||*size>100){
			printf("ko hop le, vui long nhap lai(1-100): ");
			scanf("%d",size);
		}
		for(int i=0;i<*size;i++){
		printf("nhap gia tri thu %d: ",i + 1);
		scanf("%d",(ar+i));
}
}

void evenNum(int ar[],int size){
	int number[100]; 
	int count=0; 
	for(int i=0;i<size;i++){
		if(ar[i]%2==0){
			number[count]=ar[i];
			count++ ;
		}		
	} 
	printf("cac so chan la:"); 
	for(int i=0;i<count;i++){
		printf("%d ",number[i]); 
	}
	printf("\n") ;
} 
void prime(int ar[],int size){
	int number[100];
	int index=0;
	for(int i=0;i<size;i++){
		int count=0;
		for(int j=2;j<ar[i];j++){
			if(ar[i]%j==0){
				count++; 
				break; 
			} 
		}
		if(count==0){
			number[index]=ar[i];
			index++; 
		}  
	} 
	if(index==0){
		printf("ko co so nguyen to\n"); 
	} else{
	printf("cac so nguyen to la:");
	for(int i=0;i<index;i++){
		printf("%d ",number[i]); 
	} 
	printf("\n"); 
}
}



int main(){
	int choose,ar[100],size;
	do{
		printf("\t MENU\n1.Nhap vao so phan tu va tung phan tu\n2.In ra cac phan tu  la so chan\n3.In ra cac phan tu la so nguyen to\n4.Dao nguoc mang\n5.sap xep mang\n6.Tim kiem\n7.Thoat\nLua chon cua ban: ");
		scanf("%d",&choose); 
		switch(choose){
			case 1:{
				addAr(ar,&size);
				break;
			}
			case 2:{
				if(size==0){
					printf("mang chua duoc nhap\n"); 
				} else{
					evenNum(ar,size);
				break;
			}
			case 3:{
				prime(ar,size); 
				break;
			}
		}
	}
}while(choose != 6);
}
