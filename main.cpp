/* Attempt to make a trace driven caceh simulator in CPP */
/* Author: Keshav L Mathur Date: August 17 */


#include <iostream>
#include <string>
//#include "BaseCache.h"
#include "BaseCache.cpp"
using namespace std;

int main()
{
    
    CacheBase cache;

    cache.init("L1cache",32);
    cache.display_name();
    cache.write_address(12,77);
    cout<<"\nBasic Test:"<<cache.read_address(12)<<"\n";
return 0;


}
