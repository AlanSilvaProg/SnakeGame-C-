#include <new>
#include <iostream>
#include "GameStartup.h"
#include "MapDrawer.h"
#include "GameCycle.h"

using namespace std;

int main() {
	GameStartup::Initialize();

};

void GameStartup::Initialize() {
	GameCycle* mapDrawer = new GameCycle();

	cout << "Initialization" << endl;
};