#include <stdio.h>

char binaryTree[27];

void creatBinaryTree(){
  binaryTree[0] = 'x'
  binaryTree[1] = '-';
  binaryTree[2] = '/';
  binaryTree[3] = '+';
  binaryTree[4] = '*';
  binaryTree[5] = '+';
  binaryTree[6] = '*';
  binaryTree[7] = 6;
  binaryTree[8] = '+';
  binaryTree[9] =3;
  binaryTree[10] = '-';
  binaryTree[11] =2;
  binaryTree[12] =3;
  binaryTree[13] = '-';
  binaryTree[14] = 'x';
  binaryTree[15] = 'x';
  binaryTree[16] = 3;
  binaryTree[17] = 1;
  binaryTree[18] = 'x';
  binaryTree[19] = 'x';
  binaryTree[20] = 9;
  binaryTree[21] = 5;
  binaryTree[22] = 'x';
  binaryTree[23] = 'x';
  binaryTree[24] = 'x';
  binaryTree[25] = 'x';
  binaryTree[26] = 7;
  binaryTree[27] = 4;
}

int postToOrder(Node root) {
        if(root.getLeftChild() != null) {
            postToOrder(root.getLeftChild());
        }
        if(root.getRightChild() != null) {
            postToOrder(root.getRightChild());
        }
        switch (root.getValue()) {
            case '+':
                root.setValue(root.getLeftChild().getValue() + root.getRightChild().getValue());
                break;
            case '-':
                root.setValue(root.getLeftChild().getValue() - root.getRightChild().getValue());
                break;
            case '*':
                root.setValue(root.getLeftChild().getValue() * root.getRightChild().getValue());
                break;
            case '/':
                root.setValue(root.getLeftChild().getValue() / root.getRightChild().getValue());
                break;
        }
        return root.getValue();
    }

int main(){
  creatBinaryTree();

}
