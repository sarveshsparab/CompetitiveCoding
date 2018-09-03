package leetCode.questions;

import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class Q841 {

    private static boolean[] visitedRooms = new boolean[1001];
    private static Queue<Integer> q = new LinkedList<>();


    public static void main(String args[]){

    }

    public boolean canVisitAllRoomsByBFS(List<List<Integer>> rooms) {
        visitedRooms[0] = true;
        q.add(0);

        while(!q.isEmpty()){
            int currentRoom = q.poll();

            List<Integer> currentRoomsHasKeys = rooms.get(currentRoom);
            for(int newKey : currentRoomsHasKeys){
                if(!visitedRooms[newKey]){
                    visitedRooms[newKey]=true;
                    q.add(newKey);
                }
            }

        }

        for(int i=0;i<rooms.size();i++){
            if(!visitedRooms[i])
                return false;
        }

        return true;
    }

    public boolean canVisitAllRoomsByDFS(List<List<Integer>> rooms) {

        runDFS(rooms, 0);

        for(int i=0;i<rooms.size();i++)
            if(!visitedRooms[i])
                return false;

        return true;
    }

    private void runDFS(List<List<Integer>> rooms, int currentRoom){
        visitedRooms[currentRoom]=true;
        List<Integer> currentRoomsHasKeys = rooms.get(currentRoom);
        for(int newKey : currentRoomsHasKeys)
            if(!visitedRooms[newKey])
                runDFS(rooms, newKey);
    }

}
