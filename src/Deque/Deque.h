#ifndef DEQUE_H
#define DEQUE_H

#define MAX_SIZE 255  // Maximum size of the deque

class Deque {
private:
  int arr[MAX_SIZE];
  int front, rear, size;

public:
  // Constructor
  Deque();

    // Declaration in the public section

  int getSize();
  // Check if deque is full
  bool isFull();

  // Check if deque is empty
  bool isEmpty();

  // Insert element at the front
  void insertFront(int value);

  // Insert element at the rear
  void insertRear(int value);

  // Delete element from the front
  void deleteFront();

  // Delete element from the rear
  void deleteRear();

  // Get front element
  int getFront();

  // Get rear element
  int getRear();
};

#endif  // DEQUE_H
