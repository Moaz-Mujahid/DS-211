#include <iostream>
#include <string>
#include <vector>
//Q1
//int sum(int n) {
//	if(n!=0)
//		return n+sum(n-1);
//	return 0;
//}

//Q2
//int sumDigits(int n) {
//	if(n!=0)
//	return n%10 + sumDigits(n /10);
//	return 0;
//}


//Q3
//bool isPalindrome(const std::string& str, int left, int right)
//{
//	if (left > right) {
//		return str[left]==str[right] && isPalindrome(str, left + 1, right - 1);
//	}
//	return true;
//}



//Q4
//int findMaximum(const std::vector<int>& values, int index) 
//{	
//	auto it = values.begin();
//	it += index;
//	int max=*it;
//	if (it != values.end()) {
//		if(findMaximum(values, index + 1) > max)
//			return max = findMaximum(values, index + 1);
//		return max;
//	}
//	return max;
//}


int main()
{
	//Q1 call
	//int n = sum(5);
	//std::cout << n;
	//return 0;

	//Q2 call
	//int n = sumDigits(5724);
	//std::cout << n;


	//Q3 call
	//std::string n = "lefl";
	//std::cout << isPalindrome(n,0,3);


	//Q4 call
	//std::vector<int> v = { 12, 5, 27, 8, 19, 3 };
	//std::cout << findMaximum(v, 0);
}