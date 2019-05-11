/* 단순 교환 정렬 (제 3 버전 : 스캔 범위를 제한) */

#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>


#define swap(type, x, y) do {type t = x; x = y; y = t;} while (0)

/*--- 단순 교환 정렬 (제 3 버전 : 스캔 범위를 제한) ---*/
void bubble(int a[], int n)
{
	int k = 0; /* a[k] 보다 앞은 정렬됨. */

	while (k < n - 1) {
		int j;
		int last = n - 1; /* 마지막으로 교환한 위치 */
		for (j = n - 1; j > k; j--)
			if (a[j - 1] > a[j]) {
				swap(int, a[j - 1], a[j]);
				last = j;
			}
		k = last;
	}
}

int main(void)
{
	clock_t start, finish;
	double duration;
	start = clock();
	int c[10] = {3, 5, 7, 11, 13, 17, 19, 23, 31, 37};
	int j;
	for (j = 0; j < 10; j++){
		srand(c[j]);
	int i, nx;
	int * x; /* 배열의 첫 번째 요소에 대한 포인터 */
	
	puts("단순 교환 정렬");
	printf("요솟수 :");
	nx = 10000;
	// scanf("%d", &nx);
	x = calloc(nx, sizeof(int)); /* 요솟수 nx인 int 형 배열을 생성 */

	// for (i = 0; i < nx; i++) {
	// 	printf("x[%d] :", i);
	// 	x[i] = rand();
	// 	// scanf("%d", &x[i]);
	// }

	bubble(x, nx); /* 배열 x를 단순 교환 정렬 */

	puts("오름차순으로 정렬했습니다.");
	// for (i = 0; i < nx; i++)
	// 	printf("x[%d] = %d\n", i, x[i]);

	free(x); /* 배열을 삭제 */
	}
	

	finish = clock();
	duration = (double) (finish - start) / CLOCKS_PER_SEC;
	printf("%f 초입니다. \n", duration); 

	return 0;
}