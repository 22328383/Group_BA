#ifndef KANBAN_KANBAN_H
#define KANBAN_KANBAN_H

void DisplayMenu();

struct list {
    char *owner;
    struct list_elem *next_list;
    struct list_elem *prev_list;
};

struct item {
    char *name;
    struct list_elem *next_item;
    struct list_elem *prev_item;
};

#endif //KANBAN_KANBAN_H
