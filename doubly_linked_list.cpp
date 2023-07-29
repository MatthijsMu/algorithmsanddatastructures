
template<typename K, typename T>
class Doubly_linked_list {

private:
  struct Element {
    K key;
    T sattelite_data;
    Element* prev;
    Element* next;
  };

  Element* head;
  Element* tail;

  size_t sz;

  Element& traverse_forward(Element& e, size_t steps) {
    for(size_t i = 0; i < steps && (&e != tail); i++)
      e = e.next;
    return *e;
  }

  Element& traverse_forward(Element* e, size_t steps) {
    for(size_t i = 0; i < steps && (e != tail); i++)
      e = e.next;
  }

public:
  Doubly_linked_list () : head{ new Element{

  void push_front(K key, T data) {
    
  }

~Doubly_linked_list () {
  

  
}

    
