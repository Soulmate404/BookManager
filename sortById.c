#include "sortById.h"

//������ݱ������ð������
void sortById(Book* head) {
	//������û���޸�ͷ�ڵ�ָ��ֵ��ֻ���޸�ָ������head->next��ֵ
	Book* pre, * p, * tail, * temp;
	tail = NULL;
	pre = head;
	while ((head->next->next) != tail) { //(head->next)!=tailͬ������ ����ִ�����һ�����Ƚ�
		p = head->next;
		pre = head;
		while (p->next != tail) {
			if ((p->id) > (p->next->id)) {
				pre->next = p->next; //�����ڵ㷽��
				temp = p->next->next;
				p->next->next = p;
				p->next = temp;
				p = pre->next;  //p����һ���ڵ�
			}
			p = p->next;  //p��ǰ��һ���ڵ�
			pre = pre->next;
		}
		tail = p;
	}
}