// Node class

// class Node {
//   constructor(data) {
//     this.data = data;
//     this.next = null;
//   }
// }

// Linked list class

// class LinkedList {
//   constructor() {
//     this.head = null;
//     this.size = 0;
//   }
// }

// Add data

// add(data){
//     const newNode = new Node(data);
//     if(this.head === null){
//         this.head = newNode;
//     }
//     else{
//         let current = this.head;
//         while(current.next !== null){
//             current = current.next;
//         }
//         current.next = newNode;
//     }
//     this.size++;
// }

// Create linked list

class LinkedList {
  constructor(head = null) {
    this.head = head;
  }
}

// Create node

class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

let node1 = new Node(2);
let node2 = new Node(5);


node1.next = node2;

// Create a linked list

let list = new LinkedList(node1);

console.log(list.head.data);


