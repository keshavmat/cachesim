/* Cache base class member function definitions */


#include <vector>
#include <string>
#include <cassert>
#include "BaseCache.h"


CacheBase::CacheBase(){
    name = "Base";
    size = 0;   
}

void CacheBase::init(std::string inst_name, int sz){
    name = name + "." + inst_name;
    size = sz;
    data_array.resize(size);
}
void CacheBase:: display_name(){
    cout<<"\n"<<name<"\n";
}
void CacheBase::set_cache_size(int sz){
    size =sz;
}

int  CacheBase::get_cache_size(){
    return size;
}

void CacheBase::write_address(int addr,int data){
    assert(addr<1024);
    data_array[addr]=data;
}

int CacheBase::read_address(int addr){
    assert(addr<1024);
    return data_array[addr];
}







