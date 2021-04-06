#include "map.h"
#include <stddef.h>
#include <stdio.h>

void map_init(struct map* m){
    for(int i=0;i<MAP_SIZE; i++){
        m->content[i] = NULL;
    }
}

key_t map_insert(struct map* m, value_t v){
    for(int i=0;i<MAP_SIZE; i++){
        if(m->content[i] == NULL){
            m->content[i] = v;
            return i;
        }
    }
    return 0;
}

value_t map_find(struct map* m, key_t k){
    if(!m->content[k]){
        return NULL;
    }
    else{
        return m->content[k];
    }
}

value_t map_remove(struct map* m, key_t k){
    if(!m->content[k]){
        return NULL;
    }
    else{
        value_t v = m->content[k];
        m->content[k] = NULL;
        return v;
    }
}

void map_for_each(struct map* m, void(*exec)(key_t k, value_t v, int aux), int aux){
    for(int i=0; i<aux; i++){
        printf("fuk");
    }
}
//void map_remove_if(struct map* m, bool(*cond)(key_t k, value_t v, int aux), int aux);