import java.util.*;
public class Enumerationprac {
    public static void main(String[] args){
    Vector<String> v = new Vector<String>();
    
    v.add("Heyy");
    v.add("World");
    
    Enumeration en  = v.elements();
     System.out.println("sadfgkh");
    while(en.hasMoreElements())
    {
        System.out.println(en.nextElement());
    }
    }
}
