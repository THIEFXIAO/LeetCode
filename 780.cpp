// 780. µΩ¥Ô÷’µ„

#include<iostream>

void main() {

	int sx = 1, sy = 1, tx = 3, ty = 5;

	while (tx > sx || ty > sy)
	{
		if (tx > ty)tx -= ty;
		else ty -= tx;
		if (tx == sx && ty == sy)
		{
			std::cout << "true" << std::endl;
			return;
		}
	}
	std::cout << "false" << std::endl;
}