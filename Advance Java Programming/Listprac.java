//WAP to create a list containg list of items of type string & use 
//forEach loop, iterator interface, ListIterator interface to print
//the items of list

import java.util.*;

public class Listprac
{
	public static void main(String[] args) {
		List<Integer> l = new ArrayList<Integer>();
		l.add(5);
		l.add(6);
		l.add(7);
		l.add(8);
                
                System.out.println(l);
                l.forEach((n) -> System.out.println(n) );
                
                System.out.println("Using iterator");
                Iterator i = l.iterator();
                while(i.hasNext()){
                    System.out.println(i.next());
                }
                System.out.println("Using ListIterator");
                ListIterator li = l.listIterator();
                while(li.hasNext())
                {
                    System.out.println(li.next());
                }
	}
}
