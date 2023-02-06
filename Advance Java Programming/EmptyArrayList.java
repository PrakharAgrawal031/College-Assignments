import java.util.*;

public class EmptyArrayList{
    public static void main(String args[]){
        ArrayList a = new ArrayList();
        a.add(1);
        a.add(2);
        a.add(3);
        System.out.println(a);
        if(a.size() == 0)
        {System.out.println("ArrayList is empty");}
        else{System.out.println("ArrayList is not empty");}
        a.clear();
        if(a.size() == 0)
        {System.out.println("ArrayList is empty");}
        else{System.out.println("ArrayList is not empty");}
    }
}
