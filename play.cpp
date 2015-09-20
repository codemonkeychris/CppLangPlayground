#include "stdafx.h"
#include <vector>

using namespace Guide;

void print(array_view<int> items)
{
    for (auto& i : items)
    {
        std::cout << i << "\n";
    }
}

int main()
{
    int list[] = { 1, 2, 3, 4 };

    auto view = as_array_view(list).sub(1, 2);
    print(view);

    return 0;
}

