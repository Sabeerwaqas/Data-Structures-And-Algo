// Node class

class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

// Linked list class

class LinkedList {
  constructor() {
    this.head = null;
    this.size = 0;
  }
}


// Add data

add(data){
    const newNode = new Node(data);
    if(this.head === null){
        this.head = newNode;
    }
    else{
        let current = this.head;
        while(current.next !== null){
            current = current.next;
        }
        current.next = newNode;
    }
    this.size++;
}