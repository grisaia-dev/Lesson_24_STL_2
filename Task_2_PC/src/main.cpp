#include <iostream>
#include <vector>
#include <set>
#include <list>

template<typename Container>
void print_container(Container& con) {
    for (const auto& i : con)
        std::cout << i << " ";
    std::cout<<std::endl;
}

int main(void) {
    std::cout << "[vector]: ";
    std::vector<std::string> vec = { "one", "two", "three", "four" };
    print_container(vec);

    std::cout << "[list]: ";
    std::list<std::string> list = { "one", "two", "three", "four" };
    print_container(list);

    std::cout << "[set]: ";
    std::set<std::string> set = { "one", "two", "three", "four" };
    print_container(set);
    return 0;
}