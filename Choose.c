#include"Choose.h"
#include<stdio.h>


//ѡ����
void choose() {
	Book* head = NULL;
	int flag;	//�������˵�����
	int i = 1;		//����ѭ��,��-1��ֹ

	while (i > 0) {
		printMainMenu();	//��ӡ�˵�
		scanf_s("%d", &flag);//ѡ����

		switch (flag) { //���������ֶ�Ӧ�˵����֣�ͨ��nȷ����������
		case 1://����
			head = create(head);
			sortById(head);	//����
			break;
		case 2://����
			insert(head);
			break;
		case 3://ɾ��
			del(head);
			break;
		case 4://�޸�
			mod(head);
			break;
		case 5://����
			printSearchMenu();	//��ӡ��ѯ�˵�
			int flagSerch = 0;	//���Ʋ�ѯ�˵�����
			scanf_s("%d", &flagSerch);
			switch (flagSerch) {
			case 1:	//��ѯ����ͼ����Ϣ
				printBook(head);
				break;
			case 2:	//���ݱ�Ų�ѯ
				searchById(head);
				break;
			case 3:	//����������ѯ
				searchByName(head);
				break;
			case 4:	//�������߲�ѯ
				searchByAuthor(head);
				break;
			defalt:	//�������˵�
				break;
			}
			break;
		default:
			i = -1;	//����ѭ�����˳�����ϵͳ
			printf("\n�ɹ��˳�����ϵͳ��\n\n");
			printf("�������ַ��رմ���");
			getch();
			break;
		}	
	}
}