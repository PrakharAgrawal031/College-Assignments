/* WAP using set(I) containing list of items and perform following functions
   1. add items in list
   2. insert items from one list to another
   3. delete items from a list
   4.search the specific items in the list*/

import java.util.*;

public class Set_interface
{
	public static void main(String[] args) {
		Set<String> s = new HashSet<String>();
		s.add("5");
		s.add("6");
		s.add("7");
		s.add("8");
		Set<String> s2 = new HashSet<String>();
		s2.add("9");
		s2.add("10");
		s2.add("11");
		s2.add("12");
		System.out.println(s);
		System.out.println(s2);
		System.out.println("Size of s2 = " + s2.size());
		s2.addAll(s);
		System.out.println(s2);
		System.out.println("Size of s2 = " + s2.size());
		System.out.println(s2.remove(6));
		System.out.println(s2.remove("6"));
		System.out.println(s2);
	}
}
