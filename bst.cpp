#include <iostream>

#define nullptr NULL

using namespace std;

struct Node
{
    Node(int v) : val(v), left(nullptr), right(nullptr){}
    int val;
    Node* left;
    Node* right;
};

bool Find(int x, Node*& root)
{
    if(root == nullptr)
    {
        return false;
    }
    else
    {
        if(root->val == x)
        {
            return true;
        }
        else
        {
            if(root->val > x)
            {
                cout << "L";
                return Find(x, root->left);
            }

            else
            {
                cout << "P";
                return Find(x, root->right);
            }
        }
    }

}

void Insert(int x, Node*& root)
{
    if(root == nullptr)
    {
        root = new Node(x);
    }
    else
    {
        if(root->val < x)
        {
            if(root->right == nullptr)
            {
                root->right = new Node(x);
            }
            else
            {
                Insert(x, root->right);
            }
        }
        else
        {
            if(root->left == nullptr)
            {
                root->left = new Node(x);
            }
            else
            {
                Insert(x, root->left);
            }
        }
    }
}

int main(int argc, char* args[])
{
    Node* root = nullptr;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        Insert(x, root);
    }
    cin >> n;
    cout << Find(n, root);
    return 0;
}
