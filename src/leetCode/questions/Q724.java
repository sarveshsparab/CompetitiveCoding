package leetCode.questions;

public class Q724 {

    public static void main(String args[]){
        System.out.println(pivotIndex(new int[]{-1,-1,1,1,0,0}));
    }

    public static int pivotIndex(int[] nums) {
        int i = 0;
        int n = nums.length;
        int[] leftSumArr = new int[n];
        int[] rightSumArr = new int[n];

        if(nums.length==0 || nums==null)
            return -1;

        leftSumArr[0] = nums[0];
        rightSumArr[n-1] = nums[n-1];

        for(i=1;i<n;i++){
            leftSumArr[i] = leftSumArr[i-1]+nums[i];
            rightSumArr[n-1-i] = rightSumArr[n-i] + nums[n-i-1];
        }

        for(i=0;i<n;i++){
            if(leftSumArr[i]==rightSumArr[i]) {
                if((i==1 && rightSumArr[1]==0) || (i==n-2 && leftSumArr[n-2]==0)){
                    return i;
                }
            }
        }
        return -1;
    }
}
