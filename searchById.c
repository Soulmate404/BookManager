#include "searchById.h"

//���ݱ�Ų���ͼ����Ϣ
void searchById(Book* head) {
	system("cls");		// ����
	//�������Ϊ�գ���ʼ��ѯ
	if (head) {
		Book* p;//����ָ��
		int id1;//����id1������������鼮
		printf("��������Ҫ���ҵ�ͼ����:");
		//������ұ��
		scanf_s("%d", &id1);
		p = head->next;
		while (p != NULL) {
			if (p->id == id1) { //�ж��Ƿ��ҵ��鼮
				//Ϊ��ʱ�������Ϣ
				printf("���\t����\t����\t����\t�۸�\n");
				printf("%d\t%s\t%s\t%d\t%.2f\n", p->id, p->name, p->author, p->inventory, p->price);
				break;
			}
			else
				//Ϊ��ʱ
				p = p->next;//ָ�����
		}
		if (p == NULL)//���ҵ����һ���ڵ㻹δ�鵽Ҫ�ı��ʱ�����������Ϣ
			printf("δ��ѯ����ͼ�飡\n");
	}
	//���Ϊ��
	else {
		printf("��δ����ͼ������������鱾���ٲ�ѯ!\n");
	}

	//ʹҳ��ͣ���ڵ�ǰҳ
	printf("�������������......");
	getch();
}