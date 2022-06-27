#pragma once
#include <iostream>
using namespace std;

class Human
{
private:
	int head;
	int body;
	int arms;
	int legs;
	string name;
	int height;
	int weight;

public:
	Human();
	void HumanNotice();	// 기본 정보
	void HumanInput(Human& h);	// 정보 입력
	void HumanInfo(const Human& h);	// 입력 정보 보기
	void HumanFix(Human& h);	// 입력 정보 수정
	void HumanPlay(int a);	// 행동 입력
};