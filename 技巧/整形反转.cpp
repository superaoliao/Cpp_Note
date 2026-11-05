//整形反转后判断是否相同函数
bool hw(int x)
{
    if (x < 0) return false;
    int yuan = x, s = 0;
    while (x > 0)
    {
        s = s * 10 + x % 10;
        x /= 10;
    }
    return s == yuan;
}
