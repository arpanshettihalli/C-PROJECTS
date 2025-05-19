#include<iostream>
namespace rainterrain_asphalt{
    int x=3;
}
namespace asphalt{
    int x=5;
}
namespace mud{
    int x=34;
}
int main()
{   int x=3;
    std::cout<<"hello world"<<'\n';
    std::cout<<"my name is arpan"<<'\n';
    char c='a'+3;
    int a=34.4+c;
    std::cout<<char(a)<<std::endl;
    const double pi=3.14;
    std::string sentence= "arpan";
    std::string beac="is";
    std::cout<<sentence<<'\n'<<beac<<'\n';
    std::cout<<asphalt::x<<'\n';
    std::cout<<mud::x<<'\n';
    return 0;
}