#include <bits/stdc++.h>
using namespace std;

int list_size = 0;

struct Node{
        int key;
        Node *prev, *next;
};
Node *nil;

void init() {
    nil = (Node *)malloc(sizeof(Node));
    nil->next = nil;
    nil->prev = nil;
}

// 探索
Node* search(int key) {
    Node *cur = nil->next;
    while(cur != nil && cur->key < key) {
        cur = cur->next;
    }
    return cur;
}

// 挿入
void insert(int key) {
    Node *x = (Node *)malloc(sizeof(Node));
    x->key = key;
    // 追加
    Node *y = search(key);
    x->next = y;
    x->prev = y->prev;
    y->prev->next = x;
    y->prev = x;
    ++list_size;
}

void deleteNode() {
    Node *x = nil->next;
    if(x != nil) {
        nil->next = x->next;
        x->next->prev = nil;
        free(x);
        --list_size;
    }
}

int main(void) {
    // inputs
    int q;
    cin >> q;

    init(); // リストのコンストラクト
    for(int i = 0; i < q; ++i) {
        int x, height;
        cin >> x;
        cin >> height;
        if(x == 1) {
            insert(height);
        } else {
            while(nil->next->key <= height) {
                deleteNode();
            }
        }
        cout << list_size << endl;    
    }

    return 0;
}