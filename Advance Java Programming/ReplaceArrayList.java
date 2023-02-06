import java.util.*;

public class ReplaceArrayList{
    public static void main(String args[]){
        ArrayList a = new ArrayList();
        a.add(1);
        a.add(2);
        a.add("Hello World");
        System.out.println(a);
        System.out.println("Element at index 2 of ArrayList is " + a.get(2));
        a.set(2 , "Heyy");
        System.out.println("New element at index 2 of ArrayList is " + a.get(2));
        
    }
}
