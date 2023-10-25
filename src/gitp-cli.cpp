#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << "=== Program arguments ===\n";
    for (int i = 0; i < argc; ++i)
        std::cout << '\t' << i << ": " << argv[i] << '\n';
}
