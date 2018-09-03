package leetCode.questions;

public class Q807 {

    public static void main(String args[]){
        maxIncreaseKeepingSkyline(new int[][]{
                {3,0,8,4},
                {2,4,5,7},
                {9,2,6,3},
                {0,3,1,0}
        });
    }

    public static int maxIncreaseKeepingSkyline(int[][] grid) {
        int length = grid[0].length;
        int breadth = grid.length;

        int[] maxTop = new int[length];
        int[] maxLeft = new int[breadth];

        for(int i=0;i<breadth;i++){
            int max = grid[i][0];
            for(int j=0;j<length;j++){
                if(max<grid[i][j])
                    max=grid[i][j];
            }
            maxTop[i] = max;
        }

        for(int j=0;j<length;j++){
            int max = grid[0][j];
            for(int i=0;i<length;i++){
                if(max<grid[i][j])
                    max=grid[i][j];
            }
            maxLeft[j] = max;
        }

        int answer = 0;
        for(int i=0;i<breadth;i++)
            for(int j=0;j<length;j++)
                answer+=Math.min(maxTop[j],maxLeft[i])-grid[i][j];
        return answer;
    }

}
