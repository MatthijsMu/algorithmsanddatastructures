
template<typename K, typename T>
class Doubly_linked_list {

private:
  struct Element {
    K key;
    T sattelite_data;
    Element* prev;
    Element* next;
  };

  Element* front;
  Element* back;

  size_t sz;

  Element& traverse_forward(Element& e, size_t steps) {
    for(size_t i = 0; i < steps && (&e != back->prev); i++)
      e = e.next;
    return *e;
  }

  Element& traverse_backward(Element* e, size_t steps) {
    for(size_t i = 0; i < steps && (e != front->next); i++)
      e = e.next;
      return *e;
  }

public:
  Doubly_linked_list () : head{new Element{0,0}}, tail{new Element{0,0}}, sz{0} {
    head->next = tail;
    tail->prev = head;
  }

  void push_front(K key, T data) {
    
  }

  void push_back(K key, T data) {

  }

  void front() {

  }

  void back() {

  }

  void pop_front()
  
  void pop_back

  void concat_front

  void concat_back

  void reverse

  Element& operator[](size_t get_index) {

  }

  void insert(Element*, size_t insert_index)

~Doubly_linked_list () {
  

  
}


    
