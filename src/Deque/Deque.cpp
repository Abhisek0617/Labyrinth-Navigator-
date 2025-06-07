#include "Deque.h"
#include <Arduino.h>

// Constructor
Deque::Deque() {
  front = -1;
  rear = 0;
  size = 0;
}

// Check if deque is full
bool Deque::isFull() {
  return size == MAX_SIZE;
}

// Check if deque is empty
bool Deque::isEmpty() {
  return size == 0;
}

int Deque::getSize() {
  return size;
}




// Insert element at the front
void Deque::insertFront(int value) {
  if (isFull()) {
    Serial.println("Deque Overflow");
    return;
  }
  if (front == -1) { // First element
    front = 0;
    rear = 0;
  } else if (front == 0) {
    front = MAX_SIZE - 1;
  } else {
    front--;
  }
  arr[front] = value;
  size++;
}

// Insert element at the rear
void Deque::insertRear(int value) {
  if (isFull()) {
    Serial.println("Deque Overflow");
    return;
  }
  if (front == -1) { // First element
    front = 0;
    rear = 0;
  } else if (rear == MAX_SIZE - 1) {
    rear = 0;
  } else {
    rear++;
  }
  arr[rear] = value;
  size++;
}

// Delete element from the front
void Deque::deleteFront() {
  if (isEmpty()) {
    Serial.println("Deque Underflow");
    return;
  }
  if (front == rear) { // Single element
    front = -1;
    rear = -1;
  } else if (front == MAX_SIZE - 1) {
    front = 0;
  } else {
    front++;
  }
  size--;
}

// Delete element from the rear
void Deque::deleteRear() {
  if (isEmpty()) {
    Serial.println("Deque Underflow");
    return;
  }
  if (front == rear) { // Single element
    front = -1;
    rear = -1;
  } else if (rear == 0) {
    rear = MAX_SIZE - 1;
  } else {
    rear--;
  }
  size--;
}

// Get front element
int Deque::getFront() {
  if (isEmpty()) {
    Serial.println("Deque is Empty");
    return -1;
  }
  return arr[front];
}

// Get rear element
int Deque::getRear() {
  if (isEmpty()) {
    Serial.println("Deque is Empty");
    return -1;
  }
  return arr[rear];
}
