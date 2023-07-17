#include <iostream>
#include <stdio.h>
void fill(int n);
int A[9];
int flag[9];
int main(){
	for (int i = 0; i < 9; i++) flag[i] = 1;
	fill(0);
	return 0;
}
void fill(int n) {
	for (int i = 0; i < 9; i++) {
		if (flag[i]) {
			flag[i] = 0;
			A[n] = i + 1;
			fill(n + 1);
			flag[i] = 1;
		}//填1~9進入九宮格
	}
	if (n == 9 && A[4] == 5) {
		if (A[0] + A[1] + A[2] == 15 && A[3] + A[4] + A[5] == 15 && A[0] + A[3] + A[6] == 15
			&& A[1] + A[4] + A[7] == 15 && A[0] + A[4] + A[8] == 15 && A[2] + A[4] + A[6] == 15) {
			for (int i = 0; i < 9; i++) {
				printf("%d ",A[i]);
				if ((i + 1) % 3 == 0) 
					printf("\n");
			}
			printf("===\n");
		}//符合的才輸出
		return;
	}
}