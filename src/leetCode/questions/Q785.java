package leetCode.questions;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;

public class Q785 {

    private int[] nodeLevel = new int[101];
    private boolean[] visitedNodes = new boolean[101];
    private static Queue<Integer> q = new LinkedList<>();
    private Map<Integer,Integer> unvisitedEdges = new HashMap<>();

    public boolean isBipartite(int[][] graph) {
        int currentLevel = 0 ;
        nodeLevel[0] = currentLevel;

        visitedNodes[0] = true;
        q.add(0);

        while(!q.isEmpty()) {
            int currentNode = q.poll();



        }


        return false;
    }

}
