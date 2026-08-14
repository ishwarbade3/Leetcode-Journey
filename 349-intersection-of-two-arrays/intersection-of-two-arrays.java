class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        Set<Integer> arr1 = new HashSet<Integer>();
        Set<Integer> arr2 = new HashSet<Integer>();
       

        for (int i = 0; i < nums1.length; i++) {
            arr1.add(nums1[i]);
        }
        for (int i = 0; i < nums2.length; i++) {
            if (arr1.contains(nums2[i])) {
                arr2.add(nums2[i]);
            }
        }
        int[] ans = new int[arr2.size()];
        int i=0;
        for(int num : arr2){
            ans[i]=num;
            i++;
        }
        return ans;
    }
}