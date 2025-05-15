bool isPalindrome(int x) {
    if (x < 0)
        return false;
    if (x == 0)
        return true;
    int y = x;
    int count = 0;
    while (y)
    {
        count++;
        y /= 10;
    }
    if (count == 1)
    {
        return true;
    }
    int ret = 0;

    while (x > ret)
    {
        ret = ret * 10 + x % 10;
        x /= 10;
    }
    if (count % 2 == 0)
    {
        if (x == ret)
        {
            return true;
        }
        else
            return false;
    }
    else
    {
        if (x == (ret / 10) && x != 0)
            return true;
        else
            return false;
    }
}