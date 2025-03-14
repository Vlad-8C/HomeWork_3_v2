////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* Напишите программу, которая запрашивает у пользователя два целых числа меньше 100 и выводит на экран результат их сравнения в текстовом виде. */
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>

int main() {
    int v1,v2,var_abs1,var_abs2;
    std::cout<<"Введите первое значение: "; std::cin>>v1;
    std::cout<<"Введите второе значение: "; std::cin>>v2;
    if (v1<0) std::cout<<"минус ";
    var_abs1=abs(v1);
    
    int units,two_dex,tens;
  
    //+++Первое число от 10 до 20+++//
    
    if ((var_abs1>10)&&(var_abs1<20))
    {
        two_dex=var_abs1-10;
        switch(two_dex)
        {
            case 1: std::cout<<"одиннадцать"; break;
            case 2: std::cout<<"двенадцать"; break;
            case 3: std::cout<<"тринадцать"; break;
            case 4: std::cout<<"четырнадцать"; break;
            case 5: std::cout<<"пятьнадцать"; break;
            case 6: std::cout<<"шестьнадцать"; break;
            case 7: std::cout<<"семнадцать"; break;
            case 8: std::cout<<"восемьнадцать"; break;
            case 9: std::cout<<"девятнадцать"; break;
        }
    }
    //+++Первое число до 100 исключая интервал от 10 до 20+++//
    else
    {
        //+++десятки+++//
        tens=var_abs1/10;
        switch(tens)
        {
            case 0:break;
            case 1: std::cout<<"десять"; break;
            case 2: std::cout<<"двадцать"; break;
            case 3: std::cout<<"тридцать"; break;
            case 4: std::cout<<"сорок"; break;
            case 5: std::cout<<"пятьдесят"; break;
            case 6: std::cout<<"шестьдесят"; break;
            case 7: std::cout<<"семьдесят"; break;
            case 8: std::cout<<"восемьдесят"; break;
            case 9: std::cout<<"девяносто"; break;
        }
        //+++единицы+++//
        units=var_abs1%10;
        switch(units)
        {
            case 0:break;
            case 1: std::cout<<"один"; break;
            case 2: std::cout<<"два"; break;
            case 3: std::cout<<"три"; break;
            case 4: std::cout<<"четыре"; break;
            case 5: std::cout<<"пять"; break;
            case 6: std::cout<<"шесть"; break;
            case 7: std::cout<<"семь"; break;
            case 8: std::cout<<"восемь"; break;
            case 9: std::cout<<"девять"; break;
        }
    }
    
    if (v1>v2) std::cout<<" больше чем ";
    else std::cout<<" меньше чем ";
    
    if (v2<0) std::cout<<"минус ";
    var_abs2=abs(v2);
    
    
    //+++Второе число от 10 до 20+++//
    if ((var_abs2>10)&&(var_abs2<20))
    {
        two_dex=var_abs2-10;
        switch(two_dex)
        {
            case 1: std::cout<<"одиннадцать"; break;
            case 2: std::cout<<"двенадцать"; break;
            case 3: std::cout<<"тринадцать"; break;
            case 4: std::cout<<"четырнадцать"; break;
            case 5: std::cout<<"пятьнадцать"; break;
            case 6: std::cout<<"шестьнадцать"; break;
            case 7: std::cout<<"семнадцать"; break;
            case 8: std::cout<<"восемьнадцать"; break;
            case 9: std::cout<<"девятнадцать"; break;
        }
    }
    //+++Второе число до 100 исключая интервал от 10 до 20+++//
    else
    {
        tens=var_abs2/10;
        switch(tens)
        {
            //+++десятки+++//
            case 0:break;
            case 1: std::cout<<"десять"; break;
            case 2: std::cout<<"двадцать"; break;
            case 3: std::cout<<"тридцать"; break;
            case 4: std::cout<<"сорок"; break;
            case 5: std::cout<<"пятьдесят"; break;
            case 6: std::cout<<"шестьдесят"; break;
            case 7: std::cout<<"семьдесят"; break;
            case 8: std::cout<<"восемьдесят"; break;
            case 9: std::cout<<"девяносто"; break;
        }
        
        units=var_abs2%10;
        switch(units)
        {
            //+++единицы+++//
            case 0:break;
            case 1: std::cout<<"один"; break;
            case 2: std::cout<<"два"; break;
            case 3: std::cout<<"три"; break;
            case 4: std::cout<<"четыре"; break;
            case 5: std::cout<<"пять"; break;
            case 6: std::cout<<"шесть"; break;
            case 7: std::cout<<"семь"; break;
            case 8: std::cout<<"восемь"; break;
            case 9: std::cout<<"девять"; break;
        }
    }
    
    std::cout<<std::endl;
    return 0;
}
