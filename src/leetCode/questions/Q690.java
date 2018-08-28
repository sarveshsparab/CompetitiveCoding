package leetCode.questions;

import java.util.*;

class Employee {
    public int id;
    public int importance;
    public List<Integer> subordinates;

    public Employee(int id, int importance, List<Integer> subordinates){
        this.id=id;
        this.importance=importance;
        this.subordinates = subordinates;
    }
}

public class Q690 {

    public static Map<Integer, Employee> employeeMap = new HashMap<>();

    public static void main(String args[]){

        Employee e1 = new Employee(1,5, new LinkedList<>(Arrays.asList(2,3)));
        Employee e2 = new Employee(2,3, new LinkedList<>());
        Employee e3 = new Employee(3,3, new LinkedList<>());

        System.out.println(getImportance(new LinkedList<Employee>(Arrays.asList(e1,e2,e3)), 1));

    }

    public static int getImportance(LinkedList<Employee> employees, int id) {
        for (Employee e : employees)
            employeeMap.put(e.id, e);
        return solveByDFS(id);
    }

    private static int solveByDFS(int id){
        Employee e = employeeMap.get(id);
        int answer = e.importance;
        for(int sid : e.subordinates){
            answer += solveByDFS(sid);
        }
        return answer;
    }
}

