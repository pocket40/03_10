#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcpy �Լ��� ����� ��� ����

typedef struct _Person { // ����ü �̸��� _Person
	char name[20];
	int age;
	char address[100];
} Person; //typedef�� ����Ͽ� ����ü ��Ī�� Person���� ����

int main()
{
	Person p1; // ����ü ��Ī Person���� ���� ����

	//������ ����ü ����� �����Ͽ� �� �Ҵ�
	strcpy(p1.name, "ȫ�浿");
	p1.age = 30;
	strcpy(p1.address, "����� ��걸 �ѳ���");

	//������ ����ü ����� �����Ͽ� �� ���
	printf("�̸�:%s\n", p1.name);
	printf("�̸�:%d\n", p1.age);
	printf("�̸�:%s\n", p1.address);
}
