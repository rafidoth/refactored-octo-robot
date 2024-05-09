public class Sumofksmallestnodes {
    static  int count = 0;
    static int sum = 0;
    static class Node{
        int data;
        Node left;
        Node right;

        public Node(int val){
            this.data = val;
            this.left = null;
            this.right = null;
        }
    }

    public static Node insertNode(Node root, int value){
        if(root == null){
            root = new Node(value);
            return root;
        }

        if(value > root.data){
            root.right = insertNode(root.right, value);
        }

        if(value<root.data){
            root.left = insertNode(root.left,value);
        }

        return root;
    }

    public static boolean search(Node root, int key){
        if(root==null){
            return false;
        }
        if(key == root.data){
            return true;
        }
        boolean right = false,left = false;
        if(key > root.data){
            right = search(root.right,key);
        }
        if(key < root.data){
            left =  search(root.left,key);
        }


        return left || right;
    }

    public static void inorder(Node root){
        if(root!=null){
            inorder(root.left);
            System.out.print(root.data+" ");
            inorder(root.right);
        }
    }

    public static void sumofksmallestnodes(Node root, int k){
        if(root!=null && count<=k){
            sumofksmallestnodes(root.left,k);
            if(count >=k){
                return;
            }
            count++;
            sum+= root.data;
            sumofksmallestnodes(root.right,k);
        }
    }
    public static void main(String[] args) {
        Node root = null;
        int arr[] = {50,30,70,20,40,60,80};
        for(int x : arr){
            root = insertNode(root, x);
        }
        inorder(root);
        System.out.println();
        sumofksmallestnodes(root,3);
        System.out.println(sum);//90

    }


}