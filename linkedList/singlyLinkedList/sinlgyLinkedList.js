class LinkedList {
  constructor(head = null) {
    this.head = head;
  }

  appendNode(newNode) {
    let node = this.head;
    if (node == null) {
      this.head = newNode;
      return;
    }
    while (node.next) {
      node = node.next;
    }
    node.next = newNode;
  }

  insertAt(index, newNode) {
    let node = this.head;
    if (index == 0) {
      newNode.next = node;
      this.head = newNode;
      return;
    }
    while (--index) {
      if (node.next !== null) node = node.next;
      else throw Error("Index Out of Bound");
    }
    let tempVal = node.next;
    node.next = newNode;
    newNode.next = tempVal;
  }

  removeFrom(index) {
    let node = this.head;
    if (index === 0) {
      if (node !== null) {
        node = node.next;
        this.head = node;
      } else throw Error("Index Out of Bound");

      return;
    }
    while (--index) {
      if (node.next !== null) node = node.next;
      else throw Error("Index Out of Bound");
    }
    node.next = node.next.next;
  }

  printList() {
    let node = this.head;
    while (node) {
      console.log(node.data);
      node = node.next;
    }
  }
}

class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

let myList = new LinkedList();
let initialNode = new Node(5);

myList.appendNode(initialNode);
myList.appendNode(new Node(6));
myList.appendNode(new Node(11));
myList.appendNode(new Node(7));

// Insert a node at index 2 (between 6 and 11)
myList.insertAt(2, new Node(9));
myList.removeFrom(4);

myList.printList();
