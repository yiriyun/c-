#include <stdio.h>

int main() {
	printf("��������ߵ�Ӣ�ߺ�Ӣ�磬"
	       "������\"5 7\"��ʾ5Ӣ����7Ӣ��:");

	int foot;
	int inch;

	scanf("%d %d", &foot, &inch);

	printf("�����%f�ס�\n",
	       ((foot + inch / 12.0) * 0.3048));

	return 0;
}