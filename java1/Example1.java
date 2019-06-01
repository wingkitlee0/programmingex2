class Node {
    /** This is a node class for Linked List. */
    int val = 0;
    Node next = null;
    Node() {val = 0;}
    Node(int x) {val = x;}

    void printAllNodes() {
        Node next = this;
        while (next != null) {
            System.out.println(next.val);
            next = next.next;
        }
    }
}

public class Example1 {
    public static void main(String[] args) {

        Node mynode = new Node();
        Node curr = mynode;

        for (int i=0; i<args.length; i++) {
            if (i==0) {
                curr.val = 0;
            }
            else {
                curr.next = new Node(i);
                curr = curr.next;
            }


            System.out.println(args[i]);

        }

        System.out.println("---");
        mynode.printAllNodes();
        

    }
}