import java.util.*;
public class Listiteratorprac {
    public static void main(String[] args){
    List<String> v = new LinkedList<>();
    
    v.add("Heyy");
    v.add("World");
    
    ListIterator<String> en = v.listIterator(); 
     System.out.println("sadfgkh");
    while(en.hasPrevious())
    {
        System.out.println(en.previous());
    }
    }
}
