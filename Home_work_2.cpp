#include <iostream>

int main()
{
int a,b,c,check;
    std::cout<<"введите три числа через пробел (1 2 3)";std::cin>>a>>b>>c;
check=c>=b
    ?c>=a
        ?a>=b?1:2
        :3
    :(c>=a)
        ?4
        :(a>=b)?6:5;
switch(check){
    case 1: std::cout<<c<<'\t'<<a<<'\t'<<b<<std::endl; break;
    case 2: std::cout<<c<<'\t'<<b<<'\t'<<a<<std::endl; break;
    case 3: std::cout<<a<<'\t'<<c<<'\t'<<b<<std::endl; break;
    case 4: std::cout<<b<<'\t'<<c<<'\t'<<a<<std::endl; break;
    case 5: std::cout<<b<<'\t'<<a<<'\t'<<c<<std::endl; break;
    case 6: std::cout<<a<<'\t'<<b<<'\t'<<c<<std::endl; break;
    }
}
