
#include <iostream>

void lab1();
void lab2();
void lab3();
void lab4();
void lab5();
void lab6();

int main() {
    int num;
    std::cout << "Enter the laboratory number: ";
    std::cin >> num;
    if (num == 1) {
        lab1();
    }
    else if (num == 2)
    {
        lab2();
    }
    else if (num == 3)
    {
        lab3();
    }
    else if (num == 4)
    {
        lab4();
    }
    else if (num == 5)
    {
        lab5();
    }
    else if (num == 6)
    {
        lab6();
    }
    else {
        std::cout << "Lab is no exists";
    };
}

void lab1()
{
    std::cout << "Enter value" << std::endl;
    int i = 0;
    std::cin >> i;
    char o = i;
    std::cout << o;
}

void lab2()
{
    std::cout << "Enter Value\n";
    double i = 0.0;
    std::cin >> i;
    std::cout << (i >= 0 && i <= 2 || i > 7 && i < 11) ? 1 : 0;
}

void lab3()
{
    unsigned int k, m, n;

    std::cout << "Enter value k";
    std::cin >> k;
    std::cout << "Enter value m";
    std::cin >> m;
    std::cout << "Enter value n";
    std::cin >> n;
    unsigned int mask_m = 1 << m;
    unsigned int mask_n = 1 << n;
    k = ((k & mask_m) != (k & mask_n)) * (k ^ (mask_m | mask_n)) + ((k & mask_m) == (k & mask_n)) * k;
    std::cout << "Result: " << k << std::endl;
}

void lab4()
{
    int i;
    std::cout << "Enter value n: ";
    std::cin >> i;
    int r = 1 << (3 * i);
    std::cout << std::endl << r;
}

void lab5()
{
    int k, r;
    std::cout << "Enter value k: ";
    std::cin >> k;
    r = (1 / k) + (1 / (k * k)) + (1 / (k * k * k));
    std::cout << r;
}

void lab6()
{
    int x;
    std::cout << "Enter X value\n";
    std::cin >> x;
    int output = (x < -1) ? x / (x - 1) : (x >= -1 && x <= 0) ? x + (x * x * x) : 4 + 1 / (x * x * x) - 1 / (x * x * x * x);
    std::cout << output;
}
