#include <iostream>
using namespace std;

struct node{
    int data;
    node* kiri;
    node* kanan;

};

void addnode(node** akar, int value) {
    if(*akar == null) {
        node* baru = new node;
        baru -> kiri = null;
        baru -> kanan = null ;
        *akar = baru;
    }
}
void inOrder(node* akar){
    if akar( !-NULL) {
        inOrder (akar -> kanan);
    }

} 

void preeOrder(node* akar) {
    if akar( !-NULL) {
        cout << akar -> data << " ";
        preOrder (akar -> kiri);
        preOrder (akar -> kanan);
    }
}

void postOrder(node* akar) {
    if akar ( ! -NULL){
    postOrder (akar -> kiri);
    postOrde (akar -> kanan);
    cout << akar -> data << " ";
    }
}

int main(){
    system("cls");
}
// Membentuk sebuah tree
addNode(&akar, 15);
addNode(&akar, -> kiri, 27);
addNode(&akar, -> kanan,30);
addNode(&akar, -> kiri -> kiri, 25);
addNode(&akar, -> kanan -> kanan, 29);

//  traversal tree
// 1. In order
cout << "Tampilan InOrder : ";
inOrder(akar);

// 2. In order
cout << "Tampilan InOrder : ";
inOrder(akar);