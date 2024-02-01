#include "GameCycle.h"
#include <chrono>
#include <iostream>
#include <ctime>

using namespace std;

GameCycle::GameCycle() {
	StartSequence();
	UpdateSequence();
};

GameCycle::~GameCycle() {

};

void GameCycle::StartSequence() {
	Start();
};

void GameCycle::UpdateSequence() {
	
	
	auto currentTime = chrono::system_clock::now();

	cout << "Update Sequence " << endl;

	for(int i = 0; i < 100000; i++){
		cout << "u";
	}

	auto endTime = chrono::system_clock::now();

	auto diffence = chrono::system_clock::duration(endTime - currentTime);

	cout << "Duration " << diffence.count() << endl;
};

void GameCycle::Start() {

};

void GameCycle::Update(float updateTime) {

};