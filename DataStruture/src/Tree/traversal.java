
package Tree;

class Node{
    int valu;
    Node left;
    Node right;
    
    Node(int valu){
        this.valu = valu;
        left = null;
        right = null;
    }
}

class Tree{
    Node root;
    
    Tree(){
        root = null;
    }

    void preorder(Node node){
        if(node == null)
        {
            return;
        }
        System.out.print(node.valu + " ");
        preorder(node.left);
        preorder(node.right);
    }
    
    void postorder(Node node){
        if(node == null)
        {
            return;
        }
        postorder(node.left);
        postorder(node.right);
        System.out.print(node.valu + " ");

    }
    
    void inorder(Node node){
        if(node == null)
        {
            return;
        }
        inorder(node.left);
        System.out.print(node.valu + " ");
        inorder(node.right);

    }
    
    
}


public class traversal {
    
    public static void main(String[] args) {
        Tree tree = new Tree();
        
        Node node1 = new Node(1);
        Node node2 = new Node(2);
        Node node3 = new Node(3);
        Node node4 = new Node(4);
        Node node5 = new Node(5);
        
        tree.root = node1;
        node1.left = node2;
        node1.right = node3;
        node2.left = node4;
        node2.right = node5;
        
        tree.inorder(tree.root);
        
        
    }
    
}
