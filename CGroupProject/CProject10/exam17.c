#include <stdio.h>

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision v);
struct vision exchange2(struct vision* v);

void main() {

	struct vision v;
	struct vision* v1;

	printf("로보트의 시력을 입력하세요(좌, 우):");

	// 멤버 참조 연산자는 주소연산자보다 우선 순위가 높다.
	scanf_s("%lf%lf", &v.left, &v.right);
	v1 = &v;

	printf("이전 left:%.1lf\n", v.left);
	printf("이전 right:%.1lf\n", v.right);
	
	v = exchange(v);

	printf("이후 left:%.1lf\n", v.left);
	printf("이후 right:%.1lf\n", v.right);
	

	exchange2(v1);
	printf("이후 left:%.1lf\n", v.left);
	printf("이후 right:%.1lf\n", v.right);
}

struct vision exchange(struct vision v) {

	double tmp;
	tmp = v.right;
	v.right = v.left;
	v.left = tmp;
	return v;
}

struct vision exchange2(struct vision* v) {

	double tmp;

	tmp = (*v).right;
	(*v).right = (*v).left;
	(*v).left = tmp;
}