

//Card.h 

#pragma once

#include "cocos2d.h"
#include "define.h"

USING_NS_CC;
/*
we name the card such as "2.png"

Clubs =  1,    1 ~ 13 ÷��
Diamonds,2     14~ 26 ����
Hearts,  3     27~ 39 ����
Spades,  4     40~ 52 ����

we get a random number from 1~52 as num,   we rename the pic_name as a number;

*/
class Card :public Sprite
	//�̳��Ծ�����
{
public:

	static Card* create(const char*);//����Sprite�Ĺ��캯����ͨ������ģʽ

	void setCardID(int);// set����
	void setCardName(char *);
	void setCardFace(int);
	void setCardSuit(int);

	int getCardID();// get����
	int getCardFace();
	int getCardSuit();
	char * getCardName();
	
private:
	int cardID;     // 0~51 ���������ID
	char * cardName;//  �Ƶ�����
	int cardFace;   //2 ~ 14����
	int cardSuit;   //0~3 ����
};