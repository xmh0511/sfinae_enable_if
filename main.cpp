#include <iostream>
#include "enable_if.hpp"
class Test
{
public:
    static const bool value = false;
};

template<typename T>
if_condition<enable_if<T::value,true>::value> show()
{
    std::cout<<"abc"<<std::endl;
};

template<typename T>
if_condition<enable_if<T::value,false>::value> show()
{
    std::cout<<"error"<<std::endl;
};
int main() {
    show<Test>();
    return 0;
}