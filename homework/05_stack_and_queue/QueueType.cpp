/*************************************************************************
 *
 * Assignment: QueueType implementation file
 *
 * File Name: QueueType.cpp
 * Course:    CPTR 242
 * Date:        ?
 */

#include "QueueType.h"
#include "ItemType.h"

// Default class constructor
// Post: Top have been initialized.
QueueType::QueueType() {
  // TODO
  top = 1;
}

// Post: Top and QueueStack have been reset to the empty state.
void QueueType::MakeEmpty() {
  // TODO
  while (!queueStack.IsEmpty()) {
    queueStack.Pop();
  }
}

// Returns true if the queue is empty; false otherwise.
bool QueueType::IsEmpty() const {
  // TODO
  if (top == queueStack.IsEmpty()) {
    return true;
  } else {
    return false;
  }
}

// Returns true if the queue is full; false otherwise.
bool QueueType::IsFull() const {
  // TODO
  if (top == queueStack.IsFull()) {
    return true;
  } else {
    return false;
  }
}

// Post: If (queue is not full) newItem is at the rear of the queue;
//       otherwise a FullQueue exception is thrown.
void QueueType::Enqueue(ItemType newItem) {

  if (queueStack.IsFull()) {
    throw FullQueue();
  } else {
    // TODO
    while (!queueStack.IsEmpty()) {
      tmpStack.Push(queueStack.Top());
      queueStack.Pop();
    }
    queueStack.Push(newItem);
    while (!tmpStack.IsEmpty()) {
      queueStack.Push(tmpStack.Top());
      tmpStack.Pop();
    }
  }
}

// Post: If (queue is not empty) the front of the queue has been
//       removed and a copy returned in item;
//       otherwise a EmptyQueue exception has been thrown.
void QueueType::Dequeue(ItemType &item) {
  if (queueStack.IsEmpty()) {
    throw EmptyQueue();
  } else {
    // TODO
    item = queueStack.Top();
    queueStack.Pop();
  }
}
// Post: If (queue is empty) do nothing else search for oldItem in QueueStack,
// replace oldItem in newItem without breaking the order of Items
void QueueType::ReplaceItem(ItemType oldItem, ItemType newItem) {

  // TODO
  if (queueStack.IsEmpty()) {
    return;
  } else {
    while (!queueStack.IsEmpty()) {
      tmpStack.Push(queueStack.Top());
      queueStack.Pop();
    }

    while (!tmpStack.IsEmpty()) {
      ItemType tmpItem = tmpStack.Top();
      if (tmpItem == oldItem) {
        queueStack.Push(newItem);

      } else {
        queueStack.Push(tmpItem);
      }
      tmpStack.Pop();
    }
  }
}
