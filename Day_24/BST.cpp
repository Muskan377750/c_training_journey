#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

// Node Class
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // Constructor
    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// BST Class
class BST
{
private:

    Node *root;

    // ==========================
    // Recursive Insert Function
    // ==========================

    Node* insert(Node *root, int key)
    {
        // Base Case
        if (root == nullptr)
        {
            Node *temp = new Node(key);
            return temp;
        }

        // Insert in Left Subtree
        if (key < root->data)
        {
            root->left = insert(root->left, key);
        }

        // Insert in Right Subtree
        else if (key > root->data)
        {
            root->right = insert(root->right, key);
        }

        // Return the Root
        return root;
    }

    // ==========================
    // Recursive Search Function
    // ==========================

    bool search(Node *root, int key)
    {
        // Base Case
        if (root == nullptr)
        {
            return false;
        }

        // Value Found
        if (root->data == key)
        {
            return true;
        }

        // Search in Left Subtree
        if (key < root->data)
        {
            return search(root->left, key);
        }

        // Search in Right Subtree
        return search(root->right, key);
    }

        // ==========================
    // Recursive Find Minimum
    // ==========================

    Node *findMin(Node *root)
    {
        // Base Case
        if (root == nullptr)
        {
            return nullptr;
        }

        // Leftmost node is the minimum
        if (root->left == nullptr)
        {
            return root;
        }

        return findMin(root->left);
    }

    // ==========================
    // Recursive Find Maximum
    // ==========================

    Node *findMax(Node *root)
    {
        // Base Case
        if (root == nullptr)
        {
            return nullptr;
        }

        // Rightmost node is the maximum
        if (root->right == nullptr)
        {
            return root;
        }

        return findMax(root->right);
    }

    // ==========================
    // Recursive Delete Function
    // ==========================

    Node *deleteNode(Node *root, int key)
    {
        // Tree is empty
        if (root == nullptr)
        {
            return nullptr;
        }

        // Search in Left Subtree
        if (key < root->data)
        {
            root->left = deleteNode(root->left, key);
        }

        // Search in Right Subtree
        else if (key > root->data)
        {
            root->right = deleteNode(root->right, key);
        }

        // Node Found
        else
        {
            // Case 1 : No Child
            if (root->left == nullptr && root->right == nullptr)
            {
                delete root;
                return nullptr;
            }

            // Case 2 : Only Right Child
            if (root->left == nullptr)
            {
                Node *temp = root->right;
                delete root;
                return temp;
            }

            // Case 3 : Only Left Child
            if (root->right == nullptr)
            {
                Node *temp = root->left;
                delete root;
                return temp;
            }

            // Case 4 : Two Children
            Node *temp = findMin(root->right);

            root->data = temp->data;

            root->right = deleteNode(root->right, temp->data);
        }

        return root;
    }
        // ==========================
    // Recursive Inorder Traversal
    // ==========================

    void inorder(Node *root)
    {
        // Base Case
        if (root == nullptr)
        {
            return;
        }

        // Visit Left Subtree
        inorder(root->left);

        // Visit Root
        cout << root->data << " ";

        // Visit Right Subtree
        inorder(root->right);
    }

    // ==========================
    // Recursive Preorder Traversal
    // ==========================

    void preorder(Node *root)
    {
        // Base Case
        if (root == nullptr)
        {
            return;
        }

        // Visit Root
        cout << root->data << " ";

        // Visit Left Subtree
        preorder(root->left);

        // Visit Right Subtree
        preorder(root->right);
    }

    // ==========================
    // Recursive Postorder Traversal
    // ==========================

    void postorder(Node *root)
    {
        // Base Case
        if (root == nullptr)
        {
            return;
        }

        // Visit Left Subtree
        postorder(root->left);

        // Visit Right Subtree
        postorder(root->right);

        // Visit Root
        cout << root->data << " ";
    }

    // ==========================
    // Recursive Height
    // ==========================

    int height(Node *root)
    {
        // Base Case
        if (root == nullptr)
        {
            return -1;
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return max(leftHeight, rightHeight) + 1;
    }

    // ==========================
    // Count Total Nodes
    // ==========================

    int countNodes(Node *root)
    {
        // Base Case
        if (root == nullptr)
        {
            return 0;
        }

        return 1 +
               countNodes(root->left) +
               countNodes(root->right);
    }

    // ==========================
    // Count Leaf Nodes
    // ==========================

    int countLeafNodes(Node *root)
    {
        if(root==nullptr){
            return 0;
        }

        if(root->left==nullptr&&root->right==nullptr){
            return 1;
        }

        return countLeafNodes(root->left)+
               countLeafNodes(root->right);
    }

    // ==========================
    // Count Internal Nodes
    // ==========================

    int countInternalNodes(Node *root)
    {
        if(root==nullptr){
            return 0;
        }
        if(root->left==nullptr&&root->right==nullptr){
            return 0;
        }

        return 1+
        countInternalNodes(root->left)+countInternalNodes(root->right);
    }
    public:

    // Constructor
    BST()
    {
        root = nullptr;
    }

    // ==========================
    // Public Insert
    // ==========================

    void insert(int key)
    {
        root = insert(root, key);
    }

    // ==========================
    // Public Search
    // ==========================

    void search(int key)
    {
        if (search(root, key))
        {
            cout << "Value Found." << endl;
        }
        else
        {
            cout << "Value Not Found." << endl;
        }
    }

    // ==========================
    // Public Delete
    // ==========================

    void deleteValue(int key)
    {
        root = deleteNode(root, key);
    }

    // ==========================
    // Public Inorder
    // ==========================

    void inorder()
    {
        inorder(root);
        cout << endl;
    }

    // ==========================
    // Public Preorder
    // ==========================

    void preorder()
    {
        preorder(root);
        cout << endl;
    }

    // ==========================
    // Public Postorder
    // ==========================

    void postorder()
    {
        postorder(root);
        cout << endl;
    }

    // ==========================
    // Level Order Traversal
    // ==========================

    void levelOrder()
    {
        if (root == nullptr)
        {
            cout << "Tree is Empty." << endl;
            return;
        }

        queue<Node *> q;
        q.push(root);

        while (!q.empty())
        {
            Node *current = q.front();
            q.pop();

            cout << current->data << " ";

            if (current->left != nullptr)
            {
                q.push(current->left);
            }

            if (current->right != nullptr)
            {
                q.push(current->right);
            }
        }

        cout << endl;
    }

    // ==========================
    // Minimum Value
    // ==========================

    void minimum()
    {
        if (root == nullptr)
        {
            cout << "Tree is Empty." << endl;
            return;
        }

        cout << "Minimum Value = "
             << findMin(root)->data << endl;
    }

    // ==========================
    // Maximum Value
    // ==========================

    void maximum()
    {
        if (root == nullptr)
        {
            cout << "Tree is Empty." << endl;
            return;
        }

        cout << "Maximum Value = "
             << findMax(root)->data << endl;
    }

    // ==========================
    // Height
    // ==========================

    void height()
    {
        cout << "Height = "
             << height(root) << endl;
    }

    // ==========================
    // Count Nodes
    // ==========================

    void countNodes()
    {
        cout << "Total Nodes = "
             << countNodes(root) << endl;
    }

    // ==========================
    // Count Leaf Nodes
    // ==========================

    void leafNodes()
    {
        cout << "Leaf Nodes = "
             << countLeafNodes(root) << endl;
    }

    // ==========================
    // Count Internal Nodes
    // ==========================

    void internalNodes()
    {
        cout << "Internal Nodes = "
             << countInternalNodes(root) << endl;
    }
};
int main()
{
    BST tree;

    int choice, value;

    do
    {
        cout << "\n========== BINARY SEARCH TREE ==========\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Inorder Traversal\n";
        cout << "5. Preorder Traversal\n";
        cout << "6. Postorder Traversal\n";
        cout << "7. Level Order Traversal\n";
        cout << "8. Minimum Value\n";
        cout << "9. Maximum Value\n";
        cout << "10. Height\n";
        cout << "11. Count Total Nodes\n";
        cout << "12. Count Leaf Nodes\n";
        cout << "13. Count Internal Nodes\n";
        cout << "14. Exit\n";

        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Value : ";
            cin >> value;
            tree.insert(value);
            break;

        case 2:
            cout << "Enter Value : ";
            cin >> value;
            tree.search(value);
            break;

        case 3:
            cout << "Enter Value : ";
            cin >> value;
            tree.deleteValue(value);
            break;

        case 4:
            cout << "Inorder : ";
            tree.inorder();
            break;

        case 5:
            cout << "Preorder : ";
            tree.preorder();
            break;

        case 6:
            cout << "Postorder : ";
            tree.postorder();
            break;

        case 7:
            cout << "Level Order : ";
            tree.levelOrder();
            break;

        case 8:
            tree.minimum();
            break;

        case 9:
            tree.maximum();
            break;

        case 10:
            tree.height();
            break;

        case 11:
            tree.countNodes();
            break;

        case 12:
            tree.leafNodes();
            break;

        case 13:
            tree.internalNodes();
            break;

        case 14:
            cout << "\nThank You!\n";
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 14);

    return 0;
}