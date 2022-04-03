// 70. 爬楼梯

// 递归树太大了，会直接超时

/*
#include<iostream>
#include<vector>


int main() {

	int n = 45;

	std::vector<int> step(n + 1);
	if (n < 3) return n;
	step[0] = 0; step[1] = 1; step[2] = 2;
	for (size_t i = 3; i < n + 1; i++) step[i] = step[i - 1] + step[i - 2];
	return step[n];
}
*/