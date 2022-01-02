#include <stdio.h>
/******Practice******/
//int main() {
//	
//	return 0;
//}

/******29.******/
//int main() {
//	
//	return 0;
//}


/******30.Triangle-1******/
//int main(){
//	int n, i, j;
//	scanf("%d", &n);
//	for(i=n; i>=1; i--){
//		for(j=1; j<=i; j++){
//			printf("@");
//		}
//		printf("\n");
//	}	
//	return 0;
//}

/******31.Triangle-2******/
//int main(){
//	int n, i, j, k;
//	scanf("%d", &n);
//	for(i=n; i>=1; i--){
//		for(k=1; k<i; k++){
//			printf(" ");
//		}
//		for(j=1; j<=n-i+1; j++){
//			printf("@");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

/******31.Triangle-3******/
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	//증가.... 
	for(i=1; i<=n/2+1; i++){
		for(k=i; k<n/2+1; k++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("@");
		}
		printf("\n");
	}
	
	//감소... 
	for(i=1; i<=n/2; i++){
		for(k=1; k<=i; k++){
			printf(" ");
		}
		for(j=i; j<=n/2; j++){
			printf("@");
		}
		printf("\n");
	}	
	
	
	return 0;
}

