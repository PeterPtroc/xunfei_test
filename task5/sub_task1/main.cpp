#include <iostream>
#include "Vector.h"

int main(int argc, char* argv[])
{
    if (argc != 5)
    {
        std::cout << "错误参数，格式应为: " << argv[0] << " x1 y1 x2 y2" << std::endl;
        return 1;
    }

    double x1 = atof(argv[1]);
    double y1 = atof(argv[2]);
    double x2 = atof(argv[3]);
    double y2 = atof(argv[4]);
    Vector v1(x1, y1);
    Vector v2(x2, y2);

    Vector result = v1.add(v2);

    // // ↓输出v1v2
    // std::cout << "v1:";
    // v1.print();
    // std::cout << "v2:";
    // v2.print();
    // ↓输出和
    std::cout << "向量之和";
    result.print();
    // ↓输出相加后的模长
    std::cout << "模长";
    result.dir();

    return 0;
}
