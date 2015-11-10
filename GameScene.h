


#pragma  once
#include "iostream"
#include "cocos2d.h"
#include "card.h"
#include "Player.h"
#include "ezcard.h"
#include "final.h"
#include "SpalshScene.h"


USING_NS_CC;

class GameScene : public Layer{
	//GameScene��һ��ͼ��

public:
	bool init();   //���ø���ĳ�ʼ�����������ʼ��ʧ�ܣ���ʧ��
	CREATE_FUNC(GameScene);     //����create()����
	static Scene * createScene();//����һ��������������ǰ��ͼ��

	Player* addNewPlayer(char *,int);   //���һ�����
	Card* addNewCard(int);   // ���һ����
	


	void showTips(float);//��ʾ��ʾ
	//��ť����Ӧ�Ļص�����
	void button_giveUp(Object *);
	void button_xiaZhu(Object*);
	void button_jiaZhu(Object*);

	void button_gameEnd(Object *);
	//����������������ϵ����ֵ������Ϊ�ڲ�������ʽ��
	int checkFinal(Player *);

	//�����˿��ƵĻ�ɫ��������
	void sort_ezCard_suit(ezCard *arr, int n);
	//�����˿��Ƶ������С���������������ַ�����Ϊ�˼��������ֵ��
	void sort_ezCard_face(ezCard *arr, int n);



	int getOneNumber();//����һ������1 ~ 52���������������Ϊ�Ƶ�ID���ڴ���һ����ʱ���ôη���
	int getGaoPai(Player *);
	char * getPaiXing(int);// ���ظ����ֶ�Ӧ���͵��ַ���ָ��
	//������Щ��Ϸ���ݱ���

	//��ͷ�ļ��ж���������ҵ�ָ��
	Player * player_me;
	Player * player01;


	int player_num;//���Ϲ��ж��������
	int card_num;//���˶�������
	int debt_num;//Ŀǰ�����ϵĶ�ע�Ƕ���
	int game_round;//�ڼ��ַ���
	int gongGongCard[5];//5�Ź�����
	int different_card_array[9];//������������֤��ͬ
	int diff_count = 0;//�������Ѿ����ڼ�������ͬ��ֵ
	
	//ÿ����ҵĵ��ƣ��ݶ���4����ң�����Ŀ��Բ��ã��� �Ժ�����õ�
	//int player01_card[2];
	//int player02_card[2];
	//int player03_card[2];
	//int player04_card[2];

	void jump2final(float);
	void jump2Game(float);
	void jump2Splash(float);

};