#include"PrintBook.h"

//���������
void printBook(Book *head) {
	system("cls");		// ����
	//�������Ϊ�գ���ʾ��Ϣ
	if (head) {
		Book* p = head->next;
		printf("���\t����\t����\t����\t�۸�\n");
		while (p) { //��p��Ϊ�յ�ʱ��ִ��
			printf("%d\t%s\t%s\t%d\t%.2f\n", p->id, p->name, p->author, p->inventory, p->price);
			printf("\n");
			p = p->next;//ָ�����
		}
	}
	//���Ϊ��
	else {
		printf("��δ����ͼ������������鱾���ٲ�ѯ!\n");
	}

	//ʹҳ��ͣ���ڵ�ǰҳ
	printf("�������������......");
	getch();
}