
package Tree;

class treeNode{
    int data;
    treeNode left;
    treeNode right;
    
    treeNode(int data)
    {
        this.data = data;
        left = right = null;
    }
}

class bsTree{
    treeNode root;
    bsTree(){
        root = null;
    }
    
    void add(int val){
        treeNode New = new treeNode(val);
        treeNode parent = new treeNode(1);
        treeNode ptr = root;
        
        if(root == null)
        {
            root = New;
        }
       
        else{
            while(ptr != null)
            {
                if(val < ptr.data ){
                    parent = ptr;
                    ptr = ptr.left;
                }
                else if(val>ptr.data){
                    parent = ptr;
                    ptr = ptr.right;
                }
            }
            if(val > parent.data){
                parent.right = New;
            }
            else
            {
                parent.left = New;
            }
        }
        
    }
    
    void preorder(treeNode node){
        if(node == null)
            return;
        System.out.print(node.data + " ");
        preorder(node.left);
        preorder(node.right);
    }
}

public class binarySearchTree {
    public static void main(String[] args) {
        

        
        bsTree tree = new bsTree();
        
        tree.add(100);
        tree.add(10);
        tree.add(500);
        tree.add(50);

        tree.preorder(tree.root);
                
    }
}
