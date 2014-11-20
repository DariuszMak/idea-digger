#include <iostream>

using namespace std;

//Uwaga! W tym kodzie używam referencji(których jeszcze nie było), oraz konstruktora(którego też nie było). Jeśli ktoś chce to zrozumieć, zanim
//będzie tłumaczone na wykładzie, to proszę pisać do mnie.

struct Node
{
    Node(int v) : val(v), left(NULL), right(NULL){}
    int val;
    Node* left;
    Node* right;
};
//Funkcja znajdująca x. Zwraca true, jeśli znajdzie x, false w odwrotnym przypadku.
bool Find(int x, Node*& root)
{
    //Jeśli doszliśmy do jakiegoś punktu, i jest on pusty
    if(root == NULL)
    {
        //To znaczy, że nie znaleźliśmy x.
        return false;
    }
    //W innym wypadku
    else
    {
        //Sprawdzamy, czy jesteśmy właśnie w odpowiednim węźle.
        if(root->val == x)
        {
            //Jeśli tak, zwracamy true.
            return true;
        }
        //W innym wypadku musimy sprawdzić w którą stronę iść.
        else
        {
            //Porównujemy wartość obecnego węzła z x'em.
            if(root->val > x)
            {
                //Warunek stwierdził, że musimy iść w lewo, więc piszemy L
                cout << "L";
                //I szukamy rekurencyjnie w węźle po lewo.
                return Find(x, root->left);
            }
            //Analogicznie dla prawej.
            else
            {
                cout << "P";
                return Find(x, root->right);
            }
        }
    }

}

//Funkcja wprowadza do drzewa daną wartość w odpowiednie miejsce.
void Insert(int x, Node*& root)
{
    //Jeśli wyjściowy węzeł jest pusty
    if(root == nullptr)
    {
        //To initializujemy węzeł
        root = new Node(x);
    }
    else
    {
        //W innym wypadku sprawdzamy, w którą stronę iść.
        if(root->val < x)
        {
            //Warunek mówi: idź w prawo. Więc sprawdzamy, czy możemy iść w prawo.
            if(root->right == nullptr)
            {
                //Nie możemy - to znaczy, że tam trzeba wrzucić nową wartość
                root->right = new Node(x);
            }
            else
            {
                //Możemy - to tam idziemy.
                Insert(x, root->right);
            }
        }
        //Analogicznie dla lewej strony.
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
