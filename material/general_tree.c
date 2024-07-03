#include <stdio.h>

typedef struct Node{    
	int id;    
	struct Node* leftMostChild; // pointer to the left-most child  
	struct Node* rightSibling; // pointer to the right sibling   
	struct Node* parent;
}Node;

Node* makeNode(int u){
    Node* p = (Node*)malloc(sizeof(Node));
    p->id = u;
    p->leftMostChild = NULL;
    p->rightSibling = NULL;
    p->parent = NULL;
    return p;
}
Node* find(Node* r, int u){
    if r is NULL then
        return NULL
    if r.id is equal to u then
        return r
    p = r.leftMostChild
    while p is not NULL do
        q = find(p, u)
        if q is not NULL then
            return q
        end if
        p = p.rightSibling
    end while
    return NULL
}

void insert(Node* r, int u, int v){
    p = find(r, v)
    if p is NULL then return
    q = makeNode(u)
    if p.leftMostChild is NULL then
        p.leftMostChild = q
        q.parent = p
        return
    h = p.leftMostChild
    while h.rightSibling is not NULL
        h = h.rightSibling
    h.rightSibling = q
    q.parent = p
}
int depth(Node* r){
    p = r
    d = 0
    
    while p is not NULL do
        d = d + 1
        p = p.parent
    end while
    
    return d
}

int height(Node* r){
    maxH = 0
    if r is NULL then
        return 0
    end if
    
    for each p in r.leftMostChild to NULL do
        h = height(p)
        if h > maxH then
            maxH = h
        end if
    end for
    return maxH + 1
}

void freeTree(Node* r){
    if(r == NULL) return;
    Node* p = r->leftMostChild;
    while(p != NULL){
        Node* np = p->rightSibling;
        free(p);
        p = np;
    }
    free(r);
}

void solve(){
    Node* root = NULL; char cmd[50];
    while(1){
	scanf("%s",cmd);
	if(strcmp(cmd,"*") == 0) break;
         else if(strcmp(cmd,"MakeRoot") == 0){
            int id;
            scanf("%d",&id);
            root = makeNode(id);
        }
       else if(strcmp(cmd,"Insert") == 0){
            int u,v; scanf("%d%d",&u,&v);
            insert(root,u,v);
        }
        else if(strcmp(cmd,"Height") == 0){
            int id; scanf("%d",&id);
            Node* p = find(root,id);
	   printf("%d\n", height(p));
        }
        else if(strcmp(cmd,"Depth") == 0){
            int id; scanf("%d",&id);
            Node* p = find(root,id);
            int ans = depth(p);
            printf("%d\n",ans);
        }
    }
    freeTree(root);
}

int main(){
    solve();
}
