#include"Create.h"

Book* create(Book *head) {
	system("cls");			//�����Ļ
	if (!head) {	//���������������������
		Book* p, * q;	//����ָ��
		head = (Book*)malloc(sizeof(Book));	//��ͷ�ڵ㿪�ٿռ�
		head->next = NULL;	//�ÿ�ͷ�ڵ��ָ����
		q = head;			//qָ���¼ͷ�ڵ�ĵ�ַ
		p = head->next;	//pָ���¼ͷ�ڵ��ָ����ĵ�ַ

		printf("�������鱾����Ϣ,��-1��������ʽ����� ���� ���� ����� �۸�\n");
		int id;	//����ı��
		scanf_s("%d", &id);

		while (id != -1) {
			p = (Book*)malloc(sizeof(Book));	//pָ�뿪�ٿռ�
			//�������Ա
			p->id = id;
			scanf("%s %s %d %f", p->name, p->author, &p->inventory, &p->price);
			p->next = NULL;	//�ÿ�p�ڵ��ָ����
			q->next = p;	//p��q�ڵ�����
			q = p;			//qָ�����
			printf("�������鱾����Ϣ����-1��������ʽ����� ���� ���� ����� �۸�\n");
			scanf_s("%d", &id);
		}
	}
	else {	//��������������ش�����Ϣ
		printf("�Ѵ���ͼ�����������ظ�����!\n");
		//ʹҳ��ͣ���ڵ�ǰҳ
		printf("�������������......");
		getch();
	}

	return head;	//�����������ʼλ��
}