#include "Insert.h"

//����ڵ�ģ�飨�ɶ�����룩
void insert(Book *head) {
	system("cls");

	//�������Ϊ�գ���ʼ����
	if (head) {
		int flag = 1;	//flagʵ���ж�ָ���Ƿ񵽴����һ���ڵ�

		Book* p, * q, * r;	//����ָ����ڲ������
		printf("�������鱾����Ϣ,��-1��������ʽ����� ���� ���� ����� �۸�\n");

		int id;	//����ı��
		scanf_s("%d", &id);

		while (id != -1) {	//����-1����
			r = (Book*)malloc(sizeof(Book));	//rָ�뿪�ٿռ�
			r->next = NULL;	//�ÿ�r��ָ����
			r->id = id;
			scanf("%s %s %d %f", r->name, r->author, &r->inventory, &r->price);

			q = head;//qָ���¼ͷ�ڵ�ĵ�ַ
			p = head->next;//pָ���¼ͷ�ڵ��ָ����ĵ�ַ
			while (q->next != NULL && p->id < r->id) { //ѭ����������q->next��Ϊ��,�Լ���ͼ�����������
				p = p->next;//pָ�����
				q = q->next;//qָ�����
				if (q->next == NULL) { //����жϷ�ֹq->nextΪ��ʱ����ִ��ѭ���ǳ���Ұָ��ʹ�������
					p = NULL;//��ֹ����Ұָ��p
					q->next = r;//���ӽڵ�
					r->next = NULL;//�ÿ�rָ����
					flag = 0;//�������һ���ڵ����flag
					break;
				}
			}
			if (flag) { //�ж��Ƿ񵽴����һ���ڵ㣬Ϊ��ִ�иò���
				r->next = p;
				q->next = r;
				//ʵ�ֽ�r�ڵ��������
			}
			printf("�������鱾����Ϣ,��-1��������ʽ����� ���� ���� ����� �۸�\n");
			scanf_s("%d", &id);
		}
	}
	//�������Ϊ��
	else {
		printf("��δ����ͼ�������봴��������ٲ���!\n");
		//ʹҳ��ͣ���ڵ�ǰҳ
		printf("�������������......");
		getch();
	}
	

}