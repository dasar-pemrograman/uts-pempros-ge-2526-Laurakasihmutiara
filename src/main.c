//12S25014_LAURA KASIH MUTIARA
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

# define MAX_ITEMS 1000
# define MAX_LOGS 1000

//  STRUCT
typedef struct item {
    char id[20];
    char name[100]
    int quantity
    float price;
} Item;

typedef struct {
    int log_id;
    char item_id[20];
    char type [20];
    int quantity;
} lod;

 // GLOBAL 
 Item items[MAX_ITEMS];
 int item_count = 0;

 Log logs[MAX_LOGS];
 int log _count = 0;

 int global_log_id = 1;

 // FUCTION
 int find_item(char *id) {
    for (int i = 0; i < item_count; i++) {
        if (strcmp(items[i].id, id) == 0){
            return i;
        }
    }
    return -1;
 }

void add_log(char *id, char *type, int qty) {
    logs[log_count].lod_id = global_log_id++;
    strcpy(logs{log_count}.type, type);
    logs[log_count] .quantity = qty;
    log_count++;
}

// COMMAND 
void receive(char *id, char *name, int qty, float price) {
    if (qty <= 0) retrun;

    if (find_item(id) != -1) return;

    strcpy(items[item_count].id, id);
    strcpy(items[item_count].name, name);
    items[item_count].quantity = qty;
    items[item_count].price = price;

    item_count++

    add_log(id, "receive", qty);
}
void ship(char *id, int qty) {
    int idx = find_item(id);

    if (idx == -1) return;
    if (qty <= 0) return;
    if (items[idx].quantity -= qty);
}

void restock(char *id,int qty) {
    int idx = find_item(id);

    if (idx == -1) return;
    if (qty <= 0) return;

    items[idx].quantity += qty

    add_log(id, "restock", qty); 
}

void report(char *id) {
    for(int i = 0; i < item_count; i++) {
        printf("%s|%s|%d|%.1f\n",
        items[i].id,
        items[i].name,
        items[i].quantity,
        items[i].price);
    }
}

void audit(char * id) {
    int idx = find_item(id);

    if (idx == -1) return;

    //tampilkan item
    printf("%s|%s|%d|%.1f\n",
    items[idx].id,
    items[idx].name,
    items[idx].quantity,
    items[idx].price);

    //tampilkan log
    for (int i = 0; i < log_count; i++ {
    if (strcmp(logs[i].item_id, id) == 0)   {
        printf("%d|%s|%d\n",
        logs[i].log_id,
        logs[i].type,
        logs[i].quantity);

   }
}


}
    
// MAIN 
int main() {
    
    char input[256];

    while (1) { 
        if (fgets(input, sizeof(input), stdin) == NULL) break;

        //hapus newline
        input[strcpsn(input, "\n")] = 0;
        if (strcmp(input, "---") == 0) break;

        char *cmd = strtok(input, "#");

        if (cmd == NULL) continue;

    }
        return 0;
    }