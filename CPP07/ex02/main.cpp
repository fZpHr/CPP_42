#include "Array.hpp"

// subject main :

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

// My main :

#include <sstream>
#include <string>
int main()
{
    try
    {
        std::cout << "------------------------------------" << std::endl;
        std::cout << "Creating arrays of different types :" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        std::cout << "Array<int> ArrayInt(10);" << std::endl;
        Array<int> ArrayInt(10);
        std::cout << "Array<char> ArrayChar(10);" << std::endl;
        Array<char> ArrayChar(10);
        std::cout << "Array<std::string> ArrayString(10);" << std::endl;
        Array<std::string> ArrayString(10);
        std::cout << "Array<bool> ArrayBool(10);" << std::endl;
        Array<bool> ArrayBool(10);
        std::cout << "Array<float> ArrayFloat(10);" << std::endl;
        Array<float> ArrayFloat(10);
        std::cout << "Array<double> ArrayDouble(10);" << std::endl;
        Array<double> ArrayDouble(10);
        std::cout << "------------------------------------" << std::endl;
        std::cout << "Check empty arrays                 :" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        for (int i = 0; i < 10; i++)
        {
            std::cout << "ArrayInt[" << i << "] = " << ArrayInt[i] << std::endl;
            std::cout << "ArrayChar[" << i << "] = " << ArrayChar[i] << std::endl;
            std::cout << "ArrayString[" << i << "] = " << ArrayString[i] << std::endl;
            std::cout << "ArrayBool[" << i << "] = " << ArrayBool[i] << std::endl;
            std::cout << "ArrayFloat[" << i << "] = " << ArrayFloat[i] << std::endl;
            std::cout << "ArrayDouble[" << i << "] = " << ArrayDouble[i] << std::endl;
            std::cout << "------------------------------------" << std::endl;
        }

        std::cout << "Filling arrays with values..." << std::endl;
        std::stringstream ss;
        for (int i = 0; i < 10; i++)
        {
            ArrayInt[i] = i;
            ArrayChar[i] = i + 48;
            ss << i;
            ArrayString[i] = ss.str();
            ArrayBool[i] = i % 2;
            ArrayFloat[i] = i + 0.5;
            ArrayDouble[i] = i + 0.5;
        }

        std::cout << "------------------------------------" << std::endl;
        std::cout << "Printing arrays                    :" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        for (int i = 0; i < 10; i++)
        {
            std::cout << "ArrayInt[" << i << "] = " << ArrayInt[i] << std::endl;
            std::cout << "ArrayChar[" << i << "] = " << ArrayChar[i] << std::endl;
            std::cout << "ArrayString[" << i << "] = " << ArrayString[i] << std::endl;
            std::cout << "ArrayBool[" << i << "] = " << ArrayBool[i] << std::endl;
            std::cout << "ArrayFloat[" << i << "] = " << ArrayFloat[i] << std::endl;
            std::cout << "ArrayDouble[" << i << "] = " << ArrayDouble[i] << std::endl;
            std::cout << "------------------------------------" << std::endl;
        }

        std::cout << "Trying to access out of bounds     :" << std::endl;
        std::cout << "------------------------------------" << std::endl;
        outOfBounds(ArrayInt, -1);
        outOfBounds(ArrayInt, 10);
        outOfBounds(ArrayChar, -1);
        outOfBounds(ArrayChar, 10);
        outOfBounds(ArrayString, -1);
        outOfBounds(ArrayString, 10);
        outOfBounds(ArrayBool, -1);
        outOfBounds(ArrayBool, 10);
        outOfBounds(ArrayFloat, -1);
        outOfBounds(ArrayFloat, 10);
        outOfBounds(ArrayDouble, -1);
        outOfBounds(ArrayDouble, 10);
        std::cout << "------------------------------------" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "------------------------------------" << std::endl;
    }

}