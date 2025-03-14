#include <iostream>

int main()
{
    bool Arr[2]={true, false};
    std::cout<< "||: \n";
    for (int i=0; i<2;i++)
    {
        for (int j=0; j<2;j++)
        {
            std::cout << std::boolalpha<<Arr[i]<<" || "<<Arr[j]<<" = "<<(Arr[i]||Arr[j])<<'\n';
        }
    }
    std::cout<<std::endl<<"&&: \n";
    
    for (int i=0; i<2;i++)
    {
        for (int j=0; j<2;j++)
        {
            std::cout<< std::boolalpha<<Arr[i]<<" && "<<Arr[j]<<" = "<<(Arr[i]&&Arr[j])<<'\n';
        }
    }
    std::cout<< std::endl;
}
