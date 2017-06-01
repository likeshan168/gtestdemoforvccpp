#pragma once
class Caculation {
public:
	virtual ~Caculation() {}
public:
	virtual int Add(int a, int b) = 0;
};