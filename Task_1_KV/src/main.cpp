#include <algorithm>
#include <iostream>
#include <vector>

template<typename T>
void unique_sort_vector (std::vector<T>& _vec) {
    std::sort(_vec.begin(), _vec.end());
    auto last = std::unique(_vec.begin(), _vec.end());
    _vec.erase(last, _vec.end());
}

int main(void) {
    std::vector<int> vec = { 1, 1, 2, 5, 6, 1, 2, 4 };
    std::cout << "[IN]: ";
    for (const auto& i : vec)
        std::cout << i << " ";
    std::cout << std::endl;

    unique_sort_vector(vec);

    std::cout << "[OUT]: ";
    for (const auto& i : vec)
        std::cout << i << " ";
    std::cout << std::endl;
    return 0;
}