#include "mod.h"

//�޸Ľڵ�ģ��
void mod(Book* head) {
	system("cls");
	//�������Ϊ�գ���ʼ�޸�
	if (head) {
		Book* p;	//����ָ��
		int id1, id2, inventory1;	//����num1������������鼮�޸���Ϣ,num2�����޸�
		char name1[50], author1[20];
		float price1;
		printf("������Ҫ�޸ĵ�ͼ���ţ�");
		//����Ҫ�޸ĵ�ͼ����
		scanf_s("%d", &id1);
		p = head->next;
		while (p != NULL) {
			if (p->id == id1) {		//�ж��Ƿ��ҵ��鼮
				printf("�������鱾����Ϣ����ʽ����� ���� ���� ����� �۸�\n");
				//Ϊ��ʱ������ͼ����Ϣ
				scanf("%d %s %s %d %f", &id2, name1, author1, &inventory1, &price1);
				p->id = id2;
				strcpy(p->name, name1);
				strcpy(p->author, author1);
				p->inventory = inventory1;
				p->price = price1;
				break;
			}
			else {
				//Ϊ��ʱ
				p = p->next;//ָ�����
			}
		}
		if (p == NULL) {//���ҵ����һ���ڵ㻹δ�鵽Ҫ�ı��ʱ�����������Ϣ
			printf("δ���ҵ���ͼ����\n");
			//ʹҳ��ͣ���ڵ�ǰҳ
			printf("�������������......");
			getch();
		}
	}
	else {
		printf("��δ����ͼ�������봴����������޸�!\n");
		//ʹҳ��ͣ���ڵ�ǰҳ
		printf("�������������......");
		getch();
	}

}