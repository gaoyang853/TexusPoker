
#include "final.h"
#include "GameScene.h"

bool final_layer::init(){
	//���ø���ĳ�ʼ�����������ʼ��ʧ�ܣ���ʧ��
	if (!Layer::init()){
		return false;
	}


	//your codes
	auto sprite = Sprite::create("button01.png");
	this->addChild(sprite);
	sprite->setPosition(300, 300);


	auto screenSize = Director::getInstance()->getWinSize();//��ȡ��Ļ�ߴ�
	
	



	


	return true;

}

Scene * final_layer::createScene()
{
	auto scene = Scene::create();
	auto layer = final_layer::create();
	scene->addChild(layer);
	return scene;
}


