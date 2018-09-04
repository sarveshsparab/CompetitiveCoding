package leetCode.questions;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;

public class Q785 {

    private static int[] nodeLevel = new int[101];
    private static boolean[] visitedNodes = new boolean[101];
    private static Queue<Integer> q = new LinkedList<>();
    private static Map<Integer,Integer> unvisitedEdges = new HashMap<>();

    public static void main(String args[]){
        /*System.out.println(isBipartite(new int[][]{
                {1,3}, {0,2}, {1,3}, {0,2}
        }));*/

        /*System.out.println(isBipartite(new int[][]{
                {1,2,3}, {0,2}, {0,1,3}, {0,2}
        }));*/

        System.out.println(checkBipartite(new int[][]{
                {}
        }));

    }

    public static boolean isBipartite(int[][] graph) {
        for(int i=0;i<visitedNodes.length;i++)
            if(!visitedNodes[i])
                if(!checkBipartite(graph))
                    return false;

        return true;
    }

    public static boolean checkBipartite(int[][] graph) {

        visitedNodes[0] = true;
        q.add(0);
        nodeLevel[0] = 1;

        while(!q.isEmpty()) {
            int currentNode = q.poll();
            int[] currentNodeNeighbors = graph[currentNode];

            for(int child : currentNodeNeighbors)
                nodeLevel[child]=nodeLevel[child]==0?nodeLevel[currentNode]+1:nodeLevel[child];

            for(int newNode : currentNodeNeighbors){
                if(!visitedNodes[newNode]){
                    visitedNodes[newNode]=true;
                    q.add(newNode);
                }else
                    unvisitedEdges.put(currentNode,newNode);
            }
        }

        for(Map.Entry<Integer, Integer> entry : unvisitedEdges.entrySet())
            if(Math.abs(nodeLevel[entry.getKey()]-nodeLevel[entry.getValue()])==0)
                return false;

        return true;
    }

}
