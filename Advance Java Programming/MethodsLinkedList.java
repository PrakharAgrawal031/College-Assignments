import java.util.*;

public class MethodsLinkedList{
    public static void main(String args[])
    {
        LinkedList l = new LinkedList();
        l.addLast("SUP");
        l.addLast("Hello");
        System.out.println(l);
        l.add(1);
        System.out.println(l);
        l.removeLast();
        l.addFirst("World");
        System.out.println(l);
        System.out.println("Last element = " + l.getLast() + " First Element = " + l.getFirst());

    }
}
