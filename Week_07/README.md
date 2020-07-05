学习笔记

BFS 模版：
````
void bfs () {
    queue<string> q;
    while (!q.empty()) {
        int tmpSize = q.size();
        for (int i=0;i<tmpSize;i++) {
         //  如果找到答案，返回结果 if () return  
         //  没有找到，继续遍历下个节点  q.push() 
        }
    }

}
````