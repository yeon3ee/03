#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	
	printf("a������ b�� �ϰڽ��ϴ�.\n");
	printf("a�� �Է��ϼ��� : ");
	scanf("%d",&a);
	
	printf("b�� �Է��ϼ��� : ");
	scanf("%d", &b);
	
	float result =(float) a/b;
	printf("�������� ����� %f �Դϴ�.\n", result);
	return 0;
}
