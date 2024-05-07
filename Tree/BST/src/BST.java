public class BST {


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


    public static Node insertNode(Node root,int value){
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

    public static void inorder(Node root){
            if(root!=null){
                inorder(root.left);
                System.out.print(root.data+" ");
                inorder(root.right);
            }
    }

    public static void reverseInorder(Node root){
        if(root!=null){
            reverseInorder(root.right);
            System.out.print(root.data+" ");
            reverseInorder(root.left);
        }
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

    public static int findMin(Node root){
        if(root==null){
            return -1;
        }

        if(root.left == null){
            return root.data;
        }else{
            return findMin(root.left);
        }

    }
    public static Node deleteNode(Node root, int key){
        if(root == null){
            return root;
        }

        if(key > root.data){
            root.right = deleteNode(root.right,key);
        }

        if (key < root.data){
            root.left = deleteNode(root.left,key);
        }

        if(key== root.data){
            if(root.left == null && root.right == null){
                root = null;
            }else if(root.left == null){
                root = root.right;
            }else if(root.right== null){
                root = root.left;
            }else{
                root.data = findMin(root.right);
                root.right = deleteNode(root.right, root.data);
            }
        }

        return root;
    }

    public static void main(String[] args) {
        Node root = null;
        int arr[] = {10,5,15,18,13,3,2,7,8,17,19,20};
        for(int x : arr){
            root = insertNode(root, x);
        }
        reverseInorder(root);
        System.out.println();
        inorder(root);
        System.out.println("\n"+ search(root, 5));

//        deleteNode(root,3);
//        inorder(root);
//        System.out.println();
//        deleteNode(root,8);
//        inorder(root);
//        System.out.println("\n"+

//        deleteNode(root, 18);
//        inorder(root);


    }
}
