#include <iostream>
using namespace std;

#include "json.cpp"
using namespace yazi::json;


int main()
{
    
    Json v1;
    Json v2 = true;
    Json v3 = 123;
    Json v4 = 1.23;
    Json v5 = "hello world";

    bool b = v2;
    int i = v3;
    double f = v4;
    const string &s = v5;
    

   /*
    Json arr;
    arr[0] = true;
    arr[1] = 123;
    
    arr.append(1.23);
    arr.append("hello world");

    std::cout << arr.str() << std::endl;

    bool b = arr[0];
    int i = arr[1];
    double f = arr[2];
    const string & s = arr[3];
   */

    /*  object类型
    Json obj;
    obj["bool"] = true;
    obj["int"] = 123;
    obj["double"] = 1.23;
    obj["str"] = "hello world";

    std::cout << obj.str() << std::endl;
    */
    
    
    //数组类型
    /*
    Json arr;
    arr[0] = true;
    arr[1] = 123;
    arr[2] = 1.23;
    arr[3] = "hello world";
    
    
    arr.remove(0);
    std::cout << arr.str() << std::endl;
    arr.clear();
    */
    
    //对象类型
    /*
    Json obj;
    obj["bool"] = true;
    obj["int"] = 123;
    obj["double"] = 1.23;
    obj["str"] = "hello world";

    obj.remove("str");
    std::cout << obj.str() << std::endl;

    obj.clear();
    */
    return 0;
}