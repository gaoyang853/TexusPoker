
#include "SpalshScene.h"
#include "GameScene.h"


bool Spalsh::init(){
	if (!Layer::init()){
		return false;
	}
	// your codes here

	//����������󷽷�1��ֱ��ʹ�õ���ͼƬ��Ϊ����
	Sprite * s = Sprite::create("dezhoupuke.png");
	this->addChild(s);// ��������ӵ��������
	auto screenSize = Director::getInstance()->getWinSize();//��ȡ��Ļ�ߴ�
	s->setPosition(screenSize.width/2,screenSize.height-100);//��������Ļ�е�λ��

	auto sprite1 = Sprite::create("texus_poker.png");
	// ��bird.plist�е�ͼƬbook.png
	sprite1->setPosition(screenSize.width / 2 - 26, screenSize.height /2+200);//��������Ļ�е�λ��
	this->addChild(sprite1);// ��������ӵ��������

	//label,ʹ��ϵͳ����
	auto gametitle = Label::createWithSystemFont("design by MengLei", "Arial", 20);
	gametitle->setPosition(screenSize.width / 2 +140, 50);//��������Ļ�е�λ��
	this->addChild(gametitle);// ��������ӵ��������
	
	//дһ����ת�ĺ���
	this->scheduleOnce(schedule_selector(Spalsh::jump2game), 2);//��ʱ5��


	return true;
}

Scene * Spalsh::createScene()
{
	auto scene = Scene::create();
	auto layer = Spalsh::create();
	scene->addChild(layer);
	return scene;
}

void Spalsh::jump2game(float t){
	//�ص����� 
	auto scene = GameScene::createScene();
	Director::getInstance()->replaceScene(TransitionCrossFade::create(0.5, scene));//��ĳ�ֶ�����ʽ��ת������һ������
}
