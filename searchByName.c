#include "searchByName.h"

//������������ͼ����Ϣ
void searchByName(Book* head) {
	system("cls");		// ����
	
	//�������Ϊ�գ���ʼ��ѯ
	if (head) {
		Book* p;//����ָ��
		char name1[50];//����name1���������������
		printf("��������Ҫ���ҵ�����:");
		//�����������
		scanf("%s", name1);
		p = head->next;
		while (p != NULL) {
			if (strcmp(p->name, name1) == 0) { //�ж��Ƿ��ҵ��鼮
				//Ϊ��ʱ�������Ϣ
				printf("���\t����\t����\t����\t�۸�\n");
				printf("%d\t%s\t%s\t%d\t%.2f\n", p->id, p->name, p->author, p->inventory, p->price);
				break;
			}
			else {
				//Ϊ��ʱ
				p = p->next;//ָ�����
			}	
		}
		if (p == NULL) {	//���ҵ����һ���ڵ㻹δ�鵽Ҫ�ı��ʱ�����������Ϣ
			printf("δ��ѯ����ͼ�飡\n");
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