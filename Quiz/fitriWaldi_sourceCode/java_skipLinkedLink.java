import java.util.Random;

public class SkipList {
    private static final int MAX_LEVEL = 5; 
    private Node head;
    private int size;
    private Random random;

    private class Node {
        private int data;
        private Node[] next; 

        public Node(int data, int level) {
            this.data = data;
            this.next = new Node[level];
        }
    }

    public SkipList() {
        head = new Node(-1, MAX_LEVEL);
        size = 0;
        random = new Random();
    }

    public boolean isEmpty() {
        return size == 0;
    }

    public int size() {
        return size;
    }

    public void add(int data) {
        int level = randomLevel();
        Node newNode = new Node(data, level);
        Node current = head;

        // cari tempat untuk menyisipkan node baru
        for (int i = MAX_LEVEL - 1; i >= 0; i--) {
            while (current.next[i] != null && current.next[i].data < data) {
                current = current.next[i];
            }
            if (i < level) {
                newNode.next[i] = current.next[i];
                current.next[i] = newNode;
            }
        }

        size++;
    }

    public boolean contains(int data) {
        Node current = head;

        for (int i = MAX_LEVEL - 1; i >= 0; i--) {
            while (current.next[i] != null && current.next[i].data < data) {
                current = current.next[i];
            }
        }

        if (current.next[0] != null && current.next[0].data == data) {
            return true;
        } else {
            return false;
        }
    }

    private int randomLevel() {
        int level = 1;
        while (random.nextDouble() < 0.5 && level < MAX_LEVEL) {
            level++;
        }
        return level;
    }

    public void display() {
        Node current = head.next[0];
        System.out.print("Skip List: ");
        while (current != null) {
            System.out.print(current.data + " ");
            current = current.next[0];
        }
        System.out.println();
    }

    public static void main(String[] args) {
        SkipList skipList = new SkipList();
        skipList.add(1);
        skipList.add(3);
        skipList.add(5);
        skipList.add(2);
        skipList.add(4);
        skipList.display();

        System.out.println("Contains 3: " + skipList.contains(3));
        System.out.println("Contains 6: " + skipList.contains(6));
    }
}
