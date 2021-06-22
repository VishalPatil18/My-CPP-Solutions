void removeFromFront(forward_list<int> &list)
{
    list.pop_front();
}

void removeAfter(forward_list<int> &list, int X)
{
    auto it = list.before_begin();
    advance(it, X);
    list.erase_after(it);
}

void removeFromInRange(forward_list<int> &list, int start, int end)
{
    int diff = abs(start - end);
    auto startIt = list.before_begin();
    advance(startIt, start);
    
    auto endIt = list.before_begin();
    advance(endIt, end);
    
    list.erase_after(startIt, endIt);
}

void removeAll(forward_list<int> &list)
{
    auto it = list.before_begin();
    list.erase_after(it, list.end());
}