# Z���α任

## ��Ŀ����

��һ�������ַ������ݸ������������Դ������¡������ҽ��� Z �������С�

���������ַ���Ϊ "LEETCODEISHIRING" ����Ϊ 3 ʱ���������£�

>L  C   I   R
E T O E S I I G
E   D   H   N

֮����������Ҫ�����������ж�ȡ��������һ���µ��ַ��������磺
>"LCIRETOESIIGEDHN"��

����ʵ��������ַ�������ָ�������任�ĺ�����

>string convert(string s, int numRows);

ʾ�� 1:

>����: s = "LEETCODEISHIRING", numRows = 3
���: "LCIRETOESIIGEDHN"

ʾ�� 2:

>����: s = "LEETCODEISHIRING", numRows = 4
���: "LDREOEIIECIHNTSG"
����:
L     D     R
E   O E   I I
E C   I H   N
T     S     G

## �ʼ�

�о������Ŀ˼·���ѣ�����ͨ�����Է����������ַ������ٶȲ�ܶ�

* `vector<vector<char>> tmp(numRows, vector<char>(0));`
���±�ķ�ʽ����tmp��s����`tmp[i].push_back(s[x]);`����ַ����ٶ�88 ms �ڴ�16.3 MB
* `vector<string> tmp(min(numRows, int(s.size())));`�����±귽ʽ����tmp��s���ٶ�40 ms �ڴ�12.7 MB
* `vector<string> tmp(min(numRows, int(s.size())));`����`char x : s`��`string i : tmp`�ķ�ʽ�������ٶ�28 ms �ڴ�12.5 MB
