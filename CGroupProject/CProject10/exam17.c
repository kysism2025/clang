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

	printf("�κ�Ʈ�� �÷��� �Է��ϼ���(��, ��):");

	// ��� ���� �����ڴ� �ּҿ����ں��� �켱 ������ ����.
	scanf_s("%lf%lf", &v.left, &v.right);
	v1 = &v;

	printf("���� left:%.1lf\n", v.left);
	printf("���� right:%.1lf\n", v.right);
	
	v = exchange(v);

	printf("���� left:%.1lf\n", v.left);
	printf("���� right:%.1lf\n", v.right);
	

	exchange2(v1);
	printf("���� left:%.1lf\n", v.left);
	printf("���� right:%.1lf\n", v.right);
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