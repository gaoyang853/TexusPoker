
#pragma once


USING_NS_CC;

class ezCard{
	//easy card���Լ�������࣬��card�࣬Ϊ�˷������
private:
	int Suit;
	int Face;
	int ID; // 1 ~ 52
public:
	int getSuit();//get����
	int getFace();
	int getID();
	void setSuit(int);//set����
	void setFace(int);
	void setID(int);
	ezCard(int);// ���캯��
	
};

//~ezCard();//@����� ��������������������������Ϊ����������Ѿ�ʵ���ˣ����ԾͲ���������Ĭ�����������ˣ����������������ӵ�ʱ��û���ҵ�ʵ��
/************************************************************************/
/* >GameScene.obj : error LNK2019: �޷��������ⲿ���� "public: __thiscall ezCard::~ezCard(void)"
(??1ezCard@@QAE@XZ)���÷����ں��� "public: void __thiscall GameScene::sort_ezCard_suit(class ezCard *,int)"
(?sort_ezCard_suit@GameScene@@QAEXPAVezCard@@H@Z) �б�����                                                                     */
/************************************************************************/