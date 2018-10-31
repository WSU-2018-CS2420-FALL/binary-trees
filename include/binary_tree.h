#ifndef _BINARY_TREE_
#define _BINARY_TREE_

template <typename T>
struct Node
{
  T info;
  Node *llink;
  Node *rlink;
  Node(T info) : info(info), llink(nullptr), rlink(nullptr) {}
};

// Functions
template <typename T>
void copy(Node<T> *&destRoot, const Node<T> *srcRoot);

// Classes
template <typename T>
class BinaryTree
{
public:
  BinaryTree();

  BinaryTree(const BinaryTree<T> &bt);
  const BinaryTree<T> &operator=(BinaryTree<T> &bt);
  void setRoot(Node<T> *node);

  bool empty() const;
  int height() const;
  int size() const;
  int leavesCount() const;
  void inorderTraversal() const;
  void preorderTraversal() const;
  void postorderTraversal() const;

  ~BinaryTree();

private:
  Node<T> *root;
  int height(const Node<T> *node) const;
  int size(const Node<T> *node) const;
  int leavesCount(const Node<T> *node) const;
  void inorderTraversal(const Node<T> *node) const;
  void preorderTraversal(const Node<T> *node) const;
  void postorderTraversal(const Node<T> *node) const;
  void destroy(Node<T> *node);
};

// Implemenation
template <typename T>
void copy(Node<T> *&destRoot, const Node<T> *srcRoot) {
  //TODO
}

template <typename T>
BinaryTree<T>::BinaryTree() : root(nullptr) {}

template <typename T>
BinaryTree<T>::BinaryTree(const BinaryTree<T> &bt){
  copy(root, bt.root);
}

template <typename T>
const BinaryTree<T> &BinaryTree<T>::operator=(BinaryTree<T> &bt){
  //TODO

  return *this;
}

template <typename T>
void BinaryTree<T>::setRoot(Node<T>* node){
  root = node;
}

template <typename T>
bool BinaryTree<T>::empty() const { 
  //TODO
 }

template <typename T>
int BinaryTree<T>::height() const
{
  return height(root);
}

template <typename T>
int BinaryTree<T>::height(const Node<T> *node) const {
  //TODO
}

template <typename T>
int BinaryTree<T>::size() const {
  return size(root);
}

template <typename T>
int BinaryTree<T>::size(const Node<T>* node) const {
  //TODO
}

template <typename T>
int BinaryTree<T>::leavesCount() const{
  return leavesCount(root);
}

template <typename T>
int BinaryTree<T>::leavesCount(const Node<T>* node) const{
  //TODO
}

template <typename T>
void BinaryTree<T>::inorderTraversal() const {
  inorderTraversal(root);
}

template <typename T>
void BinaryTree<T>::inorderTraversal(const Node<T> *node) const{
  //TODO
}

template <typename T>
void BinaryTree<T>::preorderTraversal() const {
  preorderTraversal(root);
}

template <typename T>
void BinaryTree<T>::preorderTraversal(const Node<T> *node) const
{
  //TODO
}

template <typename T>
void BinaryTree<T>::postorderTraversal() const {
  postorderTraversal(root);
}

template <typename T>
void BinaryTree<T>::postorderTraversal(const Node<T> *node) const
{
  //TODO
}

template <typename T>
BinaryTree<T>::~BinaryTree()
{
  destroy(root);
}

template <typename T>
void BinaryTree<T>::destroy(Node<T> *node)
{
  //TODO
}
#endif