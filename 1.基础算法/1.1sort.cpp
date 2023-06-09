/**
 * @file 1.1 sort.cpp
 * @author sher
 * @brief 快排模板
 * @version 0.1
 * @date 2023-06-01
 * @copyright Copyright (c) 2023
 */

void quick_sort(int q[], int l, int r)
{
    if(l>=r) return ;

    int i = l-1, j = r+1, x = q[l+r>>1];
    while(i<j)
    {
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i<j) swap(q[i], q[j]); 
    }
    quick_sort(q, l, j);
    quick_sort(q, j+1, r);
}