cout<<a[i]<<"\n"[i==n];
表示输出数组a的第i个元素，并在输出完最后一个元素后换行。

string 可以使用std::sort(str.begin(), str.end());
对字符串进行排序

string，vector 可以先排列再使用
next_permutation(str.begin(), str.end());
生成下一个排列

__builtin_clz(unsigned x)
检测二进制先导0个数

__builtin_popcount(unsigned x)
返回 x 的二进制表示中 1 的个数