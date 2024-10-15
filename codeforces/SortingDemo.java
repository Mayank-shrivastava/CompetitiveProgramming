package codeforces;

import java.util.*;

public class SortingDemo {
    public static void main(String[] args) {
        sortingWithMultipleCriteria();
        sortingInReverseOrder();

        Integer[] numbers = {5, 2, 9, 1, 7};

        // Sorting array in descending order
        Arrays.sort(numbers, Comparator.reverseOrder());

        System.out.println(Arrays.toString(numbers));  // Output: [9, 7, 5, 2, 1]


        List<Student> students = new ArrayList<>();
        students.add(new Student("Alice", 22));
        students.add(new Student("Bob", 20));
        students.add(new Student("Charlie", 21));

        // Sort by age in descending order
        students.sort(Comparator.comparingDouble((Student s) -> s.age).reversed());

        System.out.println(students);

    }

    static void sortingWithMultipleCriteria() {
        List<Student> students = new ArrayList<>();
        students.add(new Student("Alice", 22.2324f));
        students.add(new Student("Bob", 22.343f));
        students.add(new Student("Charlie", 21.3f));

        // Sort by age, and if ages are equal, sort by name
        students.sort(Comparator.comparingDouble((Student s) -> s.age).thenComparing(s -> s.name));

//        Collections.sort(students, new Comparator<Student>() {
//            @Override
//            public int compare(Student s1, Student s2) {
//                return Float.compare(s1.age, s2.age);  // Ascending order of age
//            }
//        });
        ///// Or using a lambda expression (Java 8+):
        ///// students.sort((s1, s2) -> Integer.compare(s1.age, s2.age));

        System.out.println(students);
        // Output: [Charlie (21), Alice (22), Bob (22)]
    }

    static void sortingInReverseOrder() {
        List<Integer> numbers = Arrays.asList(5, 2, 9, 1, 7);
        // Sorting in descending order using a Comparator
        Collections.sort(numbers, (a, b) -> b - a); // Lambda for reverse order
        System.out.println(numbers);  // Output: [9, 7, 5, 2, 1]
    }
}

class Student {
    String name;
    float age;

    Student(String name, float age) {
        this.name = name;
        this.age = age;
    }

    @Override
    public String toString() {
        return name + " (" + age + ")";
    }
}

/**
 * Practice Example:
 * Suppose you are given a list of Person objects with fields name, age, and salary.
 * Sort the list first by age in ascending order
 * and if two persons have the same age, sort them by salary in descending order.
 *
 * */
