#pragma once
#include<string>

struct user
{
	std::string name;
	int score;
	bool operator<(const user& a) const
	{
		return score > a.score;
	}
};