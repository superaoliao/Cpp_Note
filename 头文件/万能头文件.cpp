#include <bits/stdc++.h>



//包含
① C 兼容层
#include <cctype>  <cerrno>  <cfloat>  <climits>  <clocale>  <cmath>
#include <csetjmp> <csignal> <cstdarg> <cstddef>  <cstdio>   <cstdlib>
#include <cstring> <ctime>   <cwchar>  <cwctype>
#include <cfenv>   <cinttypes> <cstdint> <cuchar>
#include <ccomplex> <cstdalign> <cstdbool> <ctgmath> <ciso646>
#include <stdatomic.h> <stdbit.h> <stdckdint.h>

  
② 容器与数据结构
#include <array>   <bitset>  <deque>   <forward_list> <list>
#include <map>     <queue>   <set>     <stack>        <vector>
#include <unordered_map> <unordered_set>
#include <valarray> <initializer_list> <tuple> <utility>
#include <string> <string_view> <span> <mdspan>
#include <flat_map> <flat_set> <inplace_vector>

  
③ 算法、迭代器、函数对象
#include <algorithm> <numeric>  <functional> <iterator>
#include <memory>   <limits>   <ratio>      <type_traits>
#include <typeinfo> <typeindex> <new>       <exception>
#include <stdexcept> <scoped_allocator> <memory_resource>
#include <charconv> <concepts> <compare>   <coroutine>
#include <version>  <source_location> <expected>

  
④ 字符串与输入输出
#include <ios>     <iosfwd>  <iostream> <istream> <ostream>
#include <iomanip> <sstream> <fstream>  <streambuf> <locale>
#include <codecvt> <format>  <print>    <spanstream> <syncstream>
#include <filesystem> <system_error>

  
⑤ 并发、时间、随机
#include <atomic>  <thread>  <mutex>  <shared_mutex>
#include <condition_variable> <future>
#include <chrono>  <random>
#include <barrier> <latch>   <semaphore> <stop_token> <generator>

  
⑥ C++17/20/23 的「新库」
#include <any>    <optional> <variant>  <numbers>  <ranges>  <bit>
#include <print>  <stacktrace> <contracts> <debugging> <meta>
#include <text_encoding> <stdfloat>




  最常用的那批（速查）
用途	        头文件	                                      典型内容
排序/查找	    <algorithm>	                                sort lower_bound unique next_permutation max_element nth_element
求和/数论  	  <numeric>	                                  accumulate iota gcd lcm
动态数组	      <vector>	                                  vector
映射/集合	    <map> <set> <unordered_map> <unordered_set>	map set unordered_map
队列/栈/堆	    <queue> <stack>	                            queue priority_queue stack
字符串	        <string>	                                  string to_string stoi
输入输出	      <iostream> <sstream> <iomanip>	            cin cout stringstream setprecision
位运算/二进制	<bitset>	                                  bitset
数学	        <cmath> <complex>	                          sqrt pow fabs complex
大数/原子	    <atomic> <thread> <chrono>	                多线程、计时
随机	        <random>	                                  mt19937 uniform_int_distribution
类型工具	      <tuple> <utility> <functional>	            pair tuple function greater
