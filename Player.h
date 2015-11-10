
#include "cocos2d.h"

USING_NS_CC;

class Player : public Sprite{

public:
	static Player* create(const char*);//����Sprite�Ĺ��캯����ͨ������ģʽ
	int getDebt();      //��������ע��ֵ
	void addDebt(int);  //��Ҽ�ע����
	void setDebt(int);   //������ҵ���ע
	int getTotal();     //��������Ǯ��
	void setTotal(int);  //��������ܽ�Ǯ
	void setPhoto(char *);//�������ͷ��ͼƬ·��
	char * getPhoto();    //��ȡ���ͷ��ͼƬ·��
	void setCards(int, int);  //������ҵ����ŵ���
	int getCard01();        //��ȡ��ҵ�һ�ŵ���
	int getCard02();       //��ȡ��ҵڶ��ֵ���
	void setPlayerName(char *);//��������ǳ�
	bool isOnTable();          //��ȡ����Ƿ������Ϸ
	void setOnTable(bool);       //��������Ƿ������Ϸ

private:

	bool onTable;//�Ƿ��˳�����
	int card01, card02;// ���ŵ���,1~52
	char * photo;
	char * playerName;
	int debt;//��ע�ĳ���
	int total;// ��ҵ��ܾ���

};