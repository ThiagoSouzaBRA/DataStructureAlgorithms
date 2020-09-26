struct node{
  int value;
  node *next;
  node(int value){
    this->value = value;
    next = NULL;
  }
};