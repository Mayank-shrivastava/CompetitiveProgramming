package codeforces;
import java.util.*;

public class ComparatorExample {
    public static void main(String[] args) {
        List<Person> people = new ArrayList<>();
        people.add(new Person("John", 30, 50000));
        people.add(new Person("Alice", 30, 60000));
        people.add(new Person("Bob", 25, 55000));

        // Sort by age, then by salary (descending)
        people.sort(Comparator.comparingInt((Person p) -> p.age)
                .thenComparing((Person p) -> p.salary, Comparator.reverseOrder()));

        for (Person person : people) {
            System.out.println(person);
        }
        // Output:
        // Bob (Age: 25, Salary: 55000.0)
        // Alice (Age: 30, Salary: 60000.0)
        // John (Age: 30, Salary: 50000.0)

        List<String> fruits = new ArrayList<>();
        fruits.add("banana");
        fruits.add("apple");
        fruits.add("orange");
        fruits.add("grape");

        // Sort the list of strings by length
        fruits.sort(Comparator.comparingInt(String::length));

        System.out.println("Sorted by length: " + fruits);  // Output: [apple, grape, banana, orange]
    }
}


class Person {
    String name;
    int age;
    double salary;

    Person(String name, int age, double salary) {
        this.name = name;
        this.age = age;
        this.salary = salary;
    }

    @Override
    public String toString() {
        return name + " (Age: " + age + ", Salary: " + salary + ")";
    }
}
