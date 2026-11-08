map<(key)    ,(值) > (map变量名)
map<string, int> m;
m["banana"] = 3;
m["apple"] = 5;
m["cherry"] = 1;
m.insert({"date", 7});
for (auto& p : m) cout << p.first << "=" << p.second << ' ';


//结果apple=5 banana=3 cherry=1 date=7




操作	          写法	                                          复杂度
插入/赋值	      m[k] = v、m.insert({k, v})	                    O(log n)
查询并自动插入	  m[k]	                                          O(log n)
只读查询	        m.find(k)、m.count(k)、m.at(k)	                O(log n)
删除	          m.erase(k)、m.erase(it)	                        O(log n)
大小/判空	      m.size()、m.empty()、m.clear()	                —
前驱后继	        m.lower_bound(k)、m.upper_bound(k)	            O(log n)
遍历	          for (auto& p : m)，p.first 是 key，p.second 是值	O(n)
