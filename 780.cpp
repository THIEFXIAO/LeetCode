// 780. µΩ¥Ô÷’µ„

// 1 <= sx, sy, tx, ty <= 109

/*
#include<iostream>

bool reachingPoints(int sx, int sy, int tx, int ty) {

	while (tx > sx && ty > sy && tx != ty)
	{
		if (tx > ty) tx %= ty;
		else ty %= tx;
	}

	if (sx > tx || sy > ty) return false;
	if (sx == tx)return ((ty - sy) % tx == 0);
	if (sy == ty)return ((tx - sx) % ty == 0);
	return false;
}


int main() {

	int sx = 1, sy = 7, tx = 14, ty = 7;

	std::cout << reachingPoints(1, 1, 2, 2) << std::endl;
	
	return 0;
}
*/