
#pragma  once
#include "cocos2d.h"
#include "GameScene.h"

USING_NS_CC;

class final_layer :public Layer{

public:
	bool init();   //���ø���ĳ�ʼ�����������ʼ��ʧ�ܣ���ʧ��
	CREATE_FUNC(final_layer);     //����create()����
	static Scene * createScene();//����һ��������������ǰ��ͼ��


};