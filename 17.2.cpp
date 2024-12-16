#include <stdio.h>
#include <string.h>

void addAr(char ar[], int *size){
	
	printf("moi ban nhap chuoi: ");
	getchar();
	fgets(ar,100,stdin);
	ar[strcspn(ar, "\n")] = '\0';
	*size = strlen(ar);
}

void printAr(char ar[], int size){
	if (size == 0){
		printf("Ban chua nhap chuoi nao\n");
		return ;
	}
	printf("Chuoi cua ban dai %d ky tu\n ", size);
}

void countAlphabet(char ar[], int size ){
	int count = 0;
	for ( int i = 0; i < size; i ++){
		if ((ar[i] >= 'A' && ar[i] <= 'Z') || (ar[i] >= 'a' && ar[i] <= 'z')){
		count ++;
	}
	}
	printf("Co %d chu cai trong chuoi\n",count);
}

void countNumber(char ar[], int size){
	int count = 0;
	for ( int i = 0; i < size; i ++){
		if (ar[i] >= '0' && ar[i] <= '9'){
			count ++;
		}
	}
	printf("Co %d chu so trong chuoi\n",count);
}

void countAnomaly(char ar[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (!((ar[i] >= 'A' && ar[i] <= 'Z') || 
              (ar[i] >= 'a' && ar[i] <= 'z') || 
              (ar[i] >= '0' && ar[i] <= '9'))) {
            count++;
        }
    }
    printf("Co %d ky tu dac biet trong chuoi\n", count);
}

int main(){
	int choose,size = 0;
	char ar[100] = "";
	do{
		
		printf("\t MENU\n1. Nhap vao chuoi\n2. In ra chuoi\n3. Dem so luong chu cai trong chuoi roi in ra\n4. Dem so luong chu so trong chuoi roi in ra\n5. Dem so luong ky tu dac biet trong chuoi roi in ra\n6. Thoat\n Moi ban chon lua chon cua ban: ");
		scanf("%d",&choose);
		switch ( choose){
			case 1:{
				addAr(ar,&size);
				break;
			}
			case 2:{
				printAr(ar, size);
				break;
			}
			case 3:{
				countAlphabet(ar, size);
				break;
			}
			case 4:{
				countNumber(ar, size);
				break;
			}
			case 5:{
				countAnomaly(ar, size);
				break;
			}
			default:{
				printf("K hop le, moi ban nhap lai !!");
				break;
			}
				
		}
		
		
	}while( choose != 6);
	
	
	return 0;
}
