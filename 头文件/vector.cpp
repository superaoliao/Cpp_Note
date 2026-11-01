#include<vector>
using namespace std;
vector<int> a;              // 空数组，size() == 0
vector<int> b(5);           // 5 个元素，都初始化为 0
vector<int> c(5, 9);        // 5 个元素，都是 9
vector<int> d = {3,1,4};    // 花括号初始化，3 个元素
vector<vector<int>> g(3, vector<int>(4, 7));   // 3 行 4 列二维数组，全 7
//可以cin>>vector<int> a (n);n为已设定的变量

vector<int> a = {3, 1, 4, 1, 5};
a.size()      // 5         元素个数（类型是无符号的 size_t）
a.empty()     // false     是否为空
a.front()     // 3         第一个
a.back()      // 5         最后一个
a[2]          // 4         下标访问，不检查越界
a.at(2)       // 4         下标访问，越界抛 std::out_of_range
a.push_back(x)// 尾部追加 x
a.pop_back()  // 删掉最后一个
a.clear()     // 清空（size 变 0，capacity 不变）
a.resize(n)   // 强行改成 n 个元素
a.begin(), a.end()   // 迭代器，配合 sort / for 用。
//vector也包含这些（他们通常带“.”）
