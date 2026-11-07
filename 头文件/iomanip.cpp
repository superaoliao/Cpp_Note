#include<iomanip>
double x = 3.1415926;
cout<<fixed<<setprecision(2)<<x;
//fixed为set前置，并且fixed属于iostream中的ios头文件
//setprecision(保留的小数位数)
//其他常用还有
setw(n)	        //设置下一次输出的最小宽度	    cout << setw(6) << 42; ->    42                      
//只有输入的下一个有效
//n = 0时即不设置宽度 
//超长不截断，宽度只是下限
setfill(c)	    //设置填充字符	                cout << setfill('0') << setw(3) << 7; → 007          //有制表的效果
setprecision(n)	//小数/有效数字位数	          cout << fixed << setprecision(2) << 3.14159; ->3.14
setbase(b)	    //整数按 b 进制输出（8/10/16）	cout << setbase(16) << 255; → ff




//与left/right/internal（属于iostream中的ios）结合
cout << right << setfill('.') << setw(8) << 42	    |......42|	//默认，补在左边
cout << left << setfill('*') << setw(6) << 42	      |42****|	  //补在右边
cout << internal << setfill('*') << setw(6) << -42	|-***42|	  //补在符号后面
cout << internal << setfill('0') << setw(8) << -42	|-0000042|	//财会式补零
cout << left << setw(8) << "ab"                    	|ab |	      //字符串左对齐


设置:	                                                                                                   作用范围:
setw(n)	                                                                                                 只影响下一个格式化输出，用完立即归零
setfill setprecision setbase	                                                                           一直生效，直到重新设置
left/right/internal fixed/scientific hex/oct/dec showbase showpoint showpos boolalpha uppercase	         一直生效，跟流绑定
”一直生效“意味着会污染后面的输出。实测：
cout << oct << 42;      // 52
cout << 42;             // 52   ← 还是八进制
cout << dec << 42;      // 42

//所以正确习惯是：
cout << hex << showbase << x << dec << noshowbase;   // 用完立刻改回
cout << setfill('.') << setw(10) << x << setfill(' '); // 填充也要改回

