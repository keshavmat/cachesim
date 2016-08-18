/* Header file that declares the base class for the cache */


#include <vector>
#include <string>

using namespace std;
//enum class CacheSize{ 4,8,16,32,64,512,1024};

class CacheBase{

private:
    string name;
    int size;
    vector<int> data_array;
    
public:
    CacheBase();
    void init(string,int);
    void write_address(int addr,int data);
    int read_address(int addr);
    void set_cache_size(int sz);
    int get_cache_size(void);
    void display_name(void);   

};

