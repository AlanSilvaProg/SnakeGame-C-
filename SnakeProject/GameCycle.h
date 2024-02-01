#pragma once
class GameCycle
{
private:
	void StartSequence();
	void UpdateSequence();

	float lastUpdate;
protected:
	void Start();
	void Update(float updateTime);

public:
	GameCycle();
	~GameCycle();
};

