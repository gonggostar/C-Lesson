#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{	
	//����� n, t�� ���� ���� ���
	printf("�ȳ��ϼ���\n"); // \n : �ٹٲ�, new line
	printf("�ȳ�\n�ϼ���\t"); // \t : tab��� ���� , ������ ���⶧ ���
	printf("tab��ŭ �̵���\n");
	printf("Hello C");
	printf("\rWelcome C"); //\r : Ŀ���� ������ ó�� ��ġ�� �̵���Ų��.
	printf("\b\bC++\n"); //\b : back space �������� ��ĭ �Ű��� ���
	printf("��⵵ \"������\"\n"); // ū����ǥ(�ο��ȣ)����� ���ϴ� ��� �յڷ� \"�� �־��ش�
	printf("c:\\test.txt\n"); //�������� ��ȣ ����� ���� ��� �������ø� �ѹ��� �־��ش�

	//
	int age = 10;   // 4����Ʈ
	char ch = 'K';  // 1����Ʈ
	short kor = 96; // 2����Ʈ
	float pi = 3.14F; // 4����Ʈ
	double math = 42.195;

	//���� ����(Formatted Character)
	printf("���̴� %d�� �Դϴ�\n", age);
	printf("%corea\n", ch);
	printf("�������� : %hd\n", kor); //short�� ����
	printf("PI : %f\n", pi);
	printf("PI : %4.2f\n", pi); // �Ҽ��� ���� 4�ڸ��� Ȯ���ϰ� �Ҽ��� ���ϴ� 2�ڸ��� ������ %.2f�� ����
	printf("marathon : %6.1f\n", math);
	printf("marathon : %.3f\n", math);
	printf("%5d\n", age); //5�ڸ��� Ȯ���ϰ�, ���� �����Ͽ� ���
	printf("%-5d\n", age);

	// 16���� ���
	printf("10 = %X\n", age);

	// % ��ȣ�� ���
	printf("���� %d%%\n", kor);

	// %s : ���ڿ� ���
	printf("�� �̸��� %s �Դϴ�\n", "ȫ�浿");

	// %p : Ư�� ��ü�� �޸� �ּҸ� ����Ѵ�.
	printf("ch�� �ּ� : %p\n", &ch); //& : �ּ� ������(���� �տ� �ܵ����� ���� ���)

	printf("�� �̸��� %s�̰�, ���̴� %d�� �Դϴ�.\n", "ȫ�浿", age);

	printf("\n\n================================================================\n");

	//ǥ�� �Է� �Լ� : scanf
	printf("���̸� �Է��ϼ���>>> ");
	scanf("%d", &age);// ������ ������ �Ѱ��� �Է¹޴´�.
	printf("�� �̸��� %s�̰�, ���̴� %d�� �Դϴ�.\n", "ȫ�浿", age);

	float height;
	printf("����� Ű�� �Է��ϼ��� >>> ");
	scanf("%f", &height);
	printf("�Է¹��� Ű�� %.2fcm �Դϴ�\n", height);

	scanf("%c", &ch); // �Է� ���� Ŭ����(����Ű ���) �������� ������

	printf("���ĺ� ���ڸ� �Է��ϼ��� >>> ");
	scanf("%c", &ch);  // ���ĺ� �ѱ��� �Է¹ޱ�
	printf("�Էµ� ���ĺ��� %c�Դϴ�\n", ch);


	printf("���������� �Է��ϼ��� >>> ");
	scanf("%hd", &kor);  //kor�� short���̹Ƿ� �ݵ�� %hd�� ����ؾ� �Ѵ�.
	printf("�Էµ� ���������� %d�� �Դϴ�\n", kor);

	short eng;
	short history;
	printf("����, ����, ���� ������ �Է��ϼ���>>> ");
	scanf("%hd %hd %hd", &kor, &eng, &history);
	printf("����:%d��, ����:%d��, ����:%d��\n", kor, eng, history);


	return 0;
}