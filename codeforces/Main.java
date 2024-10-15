package codeforces;

import java.sql.SQLOutput;
import java.util.*;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Main {
    public static void main(String[] args) {
        //Use ArrayList for most problems where you need dynamic arrays.
        //Use LinkedList when you frequently add or remove from the start of the list.
        listDemo();
        linkedListDemo();

        //Use HashSet for fast lookups and ensuring unique elements.
        //Use TreeSet when you need automatic sorting and retrieval of min/max values.
        setDemo();
        treeSetDemo();

        //Use HashMap when you need fast lookups and insertions.
        //Use TreeMap when you need sorted keys.
        mapDemo();
        treeMapDemo();

        //Use PriorityQueue for problems involving heaps.
        //Use Deque for sliding window problems and when you need fast access at both ends.
        queueDemo();

        //The Stack class is a last-in, first-out (LIFO)
        //structure and is often used for depth-first searches, backtracking, and parentheses matching.
        stackDemo();
    }

    static void listDemo() {
        List<Integer> list = new ArrayList<>(); //[]
        list.add(1);  // O(1) [1]
        list.add(0, 2);  // O(n) - shifting elements [2,1]
        System.out.println(list.get(1));  // O(1) [1]
        list.remove(0);  // O(n)
        System.out.println(list); //[1]
    }

    static void linkedListDemo() {
        List<Integer> linkedList = new LinkedList<>();
        linkedList.add(1); // O(1)
        linkedList.add(0, 2); // O(1) at start, O(N) elseWhere
        System.out.println(linkedList.get(1)); // O(N)
        linkedList.remove(0); // O(1)
        System.out.println(linkedList);
    }

    static void setDemo() {
        // duplicates not allowed unordered, faster lookup,insertion,deletion
        Set<Integer> set = new HashSet<>();
        set.add(1);  // O(1)
        set.add(2);  // O(1)
        System.out.println(set.contains(2));  // O(1)
        set.remove(1);  // O(1)
    }

    static void treeSetDemo() {
        //Sorted set of elements, fast searching and insertion with automatic sorting.
        var treeSet = new TreeSet<Integer>();
        treeSet.add(5);  // O(log n)
        treeSet.add(1);  // O(log n)
        System.out.println(treeSet.first());  // 1
        System.out.println(treeSet.last());  // 5
        System.out.println(treeSet.contains(1)); // O(log n)
        treeSet.remove(1); //O(log n)
    }

    static void mapDemo() {
        //The Map interface is used for key-value pairs, and it’s essential for frequency counting, lookups, etc.
        Map<String, Integer> map = new HashMap<>();
        map.put("apple", 1);  // O(1)
        map.put("banana", 2);  // O(1)
        System.out.println(map.get("apple"));  // O(1)
        System.out.println(map.containsKey("apple")); // O(1)
        map.remove("banana");  // O(1)
    }

    static void treeMapDemo() {
        var treeMap = new TreeMap<>();
        treeMap.put("apple", 1);  // O(log n)
        treeMap.put("banana", 2);  // O(log n)
        System.out.println(treeMap.firstKey());  // apple
        System.out.println(treeMap.lastKey());  // banana
        System.out.println(treeMap.containsKey("apple")); //O(log n)
        treeMap.remove("apple"); //O(log n)
    }

    static void queueDemo() {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        pq.add(10);  // O(log n)
        pq.add(20);
        pq.add(15);
        System.out.println(pq.peek());  // 10 // returns the smallest element O(1)
        System.out.println(pq.poll());  // 10 // remove and returns the smallest element O(log n)
        System.out.println(pq.isEmpty());

        Deque<Integer> deque = new ArrayDeque<>();
        deque.addFirst(1);  // O(1)
        deque.addLast(2);   // O(1)
        System.out.println(deque.removeFirst());  // 1 O(1)
        System.out.println(deque.removeLast());  // 2 O(1)
        System.out.println(deque.isEmpty());
    }

    static void stackDemo() {
        Stack<Integer> stack = new Stack<>();
        stack.push(1);  // O(1) for all operations
        stack.push(2);
        System.out.println(stack.peek());  // 2
        System.out.println(stack.pop());  // 2
    }

    static void sortingDemo() {
        List<Integer> list = new ArrayList<>(Arrays.asList(5, 2, 9, 1));
        Collections.sort(list);  // Ascending sort
        System.out.println(list);  // Output: [1, 2, 5, 9]

        List<Integer> list1 = new ArrayList<>(Arrays.asList(5, 2, 9, 1));
        Collections.sort(list1, Collections.reverseOrder());  // Descending sort
        System.out.println(list);  // Output: [9, 5, 2, 1]

    }

    static void streamDemo() {
        List<Integer> list = Arrays.asList(1,2,3,4,5);
        Stream<Integer> stream = list.stream(); // creating a stream

        // filter-> Filters elements based on a predicate (e.g., a lambda expression).
        // collect -> Collectors.toList()
        List<Integer> evenNumbers = list.stream()
                .filter(n -> n % 2 == 0)
                .collect(Collectors.toList());
        System.out.println(evenNumbers); // Output: [2, 4]

        // map-> Transforms each element in the stream.
        List<Integer> squareNumber = list.stream()
                .map(n -> n * n)
                .collect(Collectors.toList());
        System.out.println(squareNumber); // Output: [1, 4, 9, 16, 25]

        //
    }

    /*
    *
Collection	Access	Insertion	Deletion	Search
ArrayList	O(1)	O(1)	O(n)	O(n)
LinkedList	O(n)	O(1)	O(1)	O(n)
HashSet	-	O(1)	O(1)	O(1)
TreeSet	-	O(log n)	O(log n)	O(log n)
HashMap	-	O(1)	O(1)	O(1)
TreeMap	-	O(log n)	O(log n)	O(log n)
PriorityQueue	-	O(log n)	O(log n)	O(n)
Deque	O(1)	O(1)	O(1)	O(n)
    *
    *
    * */
}
