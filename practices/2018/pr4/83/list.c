#include <stdbool.h>

#include "list.h"

List * List_alloc()
{
    List * self = malloc(sizeof(List));
    List_init(self);
    return self;
}
void List_free(List *self)
{
    List_deinit(self);
    free(self);
}

void List_init(List *self)
{
    self->capacity = 16;
    self->size = 0;
    self->items = malloc(sizeof(void *) * self->capacity);
    if (self->items == NULL)
    {
        // @todo
    }
}
void List_deinit(List *self)
{
    free(self->items);
}

void *List_get(List *self, int index)
{
    return self->items[index]; 
}
void List_set(List *self, int index, void *value)
{

}
size_t List_size(List *self)
{
    return self->size;
}
void List_insert(List *self, int index, void *value)
{

}
void List_removeAt(List *self, int index)
{

}

void List_add(List *self, void *value)
{
    self->items[self->size] = value;
    self->size += 1;
    // @todo realloc
}
void List_remove(List *self, void *value)
{

}
int List_indexOf(List *self, void *value)
{
    return -1;
}
bool List_contains(List *self, void *value)
{
    return false;
}
bool List_isEmpty(List *self)
{
    return true;
}
void List_clear(List *self)
{

}
