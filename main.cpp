#include<algorithm>
#include<iostream>
#include<ranges>
#include<vector>

template<typename T>
void show(const T& cont)
{
	for (auto&& a : cont)
		std::cout << a << " ";
	std::cout << "\n";
}

int main()
{
	{
		std::vector<int> v{1, 3, 2, 5, 4, 6, 5, 8, 6, 9, 0, 12, 11};
		std::vector<int> w = v | std::views::filter([](auto i) { return i % 2 == 0; }) | std::ranges::to<std::vector>(); //c++23
		show(v);
		show(w);
	}
	
	return 0;
}