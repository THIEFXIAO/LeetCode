// 796. ��ת�ַ���

/*
#include<iostream>
#include<string>

void main() {

	std::string s = "abcde", goal = "deabc";

	if (s.size() != goal.size()) return;
	std::string ans = s + s;
	int n = goal.size();
	unsigned int abc = ans.find(goal);
	// ����ֱ�ӵ���find
	// ans.find(goal); 
	// string::find ����ֵΪsize_t ��¼�ĵ�һ�γ��ֵ��±�
	// �Ҳ�������std::string::npos (static const size_t npos = -1)
	// ����if(string::find())��Զ����true;
	// ����tips: if(-1)��C++��true;
	
	if (ans.find(goal) != std::string::npos)
	{
		std::cout << "true" << std::endl;
	}

	//for (size_t i = 0; i < n; i++)
	//{
	//	std::string a = ans.substr(i, n);
	//	if (a == goal) return;
	//}
	std::cout << "false" << std::endl;
	
}
*/