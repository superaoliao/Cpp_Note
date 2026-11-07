#include<iomanip>
double x = 3.1415926;
cout<<fixed<<setprecision(2)<<x;
//fixed为set前置，并且fixed属于iostream头文件
//setprecision(保留的小数位数)
//其他还有
setw(n)	        //设置下一次输出的最小宽度	    cout << setw(6) << 42; ->    42                      //只有输入的下一个有效
setfill(c)	    //设置填充字符	                cout << setfill('0') << setw(3) << 7; → 007          //有制表的效果
setprecision(n)	//小数/有效数字位数	          cout << fixed << setprecision(2) << 3.14159; ->3.14
setbase(b)	    //整数按 b 进制输出（8/10/16）	cout << setbase(16) << 255; → ff

