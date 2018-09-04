package leetCode.questions;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;

public class Q785 {

    public static void main(String args[]){
        System.out.println(isBipartite(new int[][]{
                {1,3}, {0,2}, {1,3}, {0,2}
        }));

        /*System.out.println(isBipartite(new int[][]{
                {1,2,3}, {0,2}, {0,1,3}, {0,2}
        }));*/

        /*System.out.println(isBipartite(new int[][]{
                {}
        }));*/

    }

    public static boolean isBipartite(int[][] graph) {
        int[] color = new int[graph.length];
        for (int i = 0; i < graph.length; i++)
            if (color[i] == 0) {
                Queue<Integer> q = new LinkedList<>();
                q.add(i);
                color[i] = 1;
                while (!q.isEmpty()) {
                    Integer currentNode = q.poll();
                    for (int neighbor : graph[currentNode])
                        if (color[neighbor] == color[currentNode])
                            return false;
                        else if (color[neighbor] == 0) {
                            q.add(neighbor);
                            color[neighbor] = -color[currentNode];
                        }
                }
            }
        return true;
    }

}
