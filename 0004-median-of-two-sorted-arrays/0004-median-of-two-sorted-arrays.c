double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size) {
    int n = nums1Size + nums2Size;
    int nums[n];
    int j = 0, k = 0;
    int i = 0;
    while (j < nums1Size && k < nums2Size) {

        if (j[nums1] < k[nums2]) {
            i[nums] = j[nums1];
            //printf("n1: %d:%d < n2: %d:%d\n", j, j[nums1], k, k[nums2]);
            j++;

        } else {
            i[nums] = k[nums2];
            //printf("n1: %d:%d > n2: %d:%d\n", j, j[nums1], k, k[nums2]);
            k++;
        }
        i++;
    }

    while (j < nums1Size) {
        i[nums] = j[nums1];
        i++;
        j++;
    }
    while (k < nums2Size) {
        i[nums] = k[nums2];
        i++;
        k++;
    }

    //for (int i = 0; i < n; i++)
        //printf("\n%d: %d", i, i[nums]);

    //printf("\n%d, %d, %d", n / 2 - 1, n / 2, n);
    if (n % 2 == 0) 
        return ((double)((n / 2 - 1)[nums]+(n / 2)[nums])/2);

    //printf("\ndipari");
    //printf("\n%d: %d", n / 2 - 1, (n / 2 - 1)[nums]);
    //printf("\n%d: %d", n / 2, (n / 2)[nums]);
    return nums[n / 2];
}