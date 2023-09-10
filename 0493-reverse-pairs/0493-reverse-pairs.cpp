class Solution {
public:

    void merge(vector<int> &a, int lb, int mid, int ub)
    {
        int i = lb;
        int j = mid + 1;
        vector<int> b;
        while(i <= mid && j <= ub)
        {
            if(a[i] <= a[j])
            {
                b.push_back(a[i]);
                i++;
            }
            else
            {
                b.push_back(a[j]);
                j++;
            }
        }
        while(i <= mid)
        {
            b.push_back(a[i]);
            i++;
        }
        while(j <= ub)
        {
            b.push_back(a[j]);
            j++;
        }
        for(i = lb; i <= ub; i++)
        {
            a[i] = b[i - lb];
        }
    }

    int cntPairs(vector<int> &a, int lb, int mid, int ub)
    {
        int j = mid + 1;
        int cnt = 0;
        for(int i = lb; i <= mid; i++)
        {
            // long long val1 = a[i];
            // long long val2 = 2 * a[j];
            while(j <= ub && (long long)a[i] > 2 * (long long)a[j])   j++;
            cnt += j - (mid + 1);
        }
        return cnt;
    }

    int mergeSort(vector<int> &a, int lb, int ub)
    {
        int cnt = 0;
        if(lb >= ub)    return cnt;
        int mid = (lb + ub) / 2;
        cnt += mergeSort(a, lb, mid);
        cnt += mergeSort(a, mid + 1, ub);
        cnt += cntPairs(a, lb, mid, ub);
        merge(a, lb, mid, ub);
        return cnt;
    }

    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};