#include <iostream>
#include <ios>
#include <vector>
#include <math.h>
#include <unordered_set>
using namespace std;


double distance(vector<double> start, vector<double> target){
    double x = pow(start[0] - target[0], 2.0);
    double y = pow(start[1] - target[1], 2.0);
    return sqrt(x + y);
}

#define infi INFINITY
  
class Node {
public:
    int vertexNumber;
 
    // Adjacency list that shows the
    // vertexNumber of child vertex
    // and the weight of the edge
    vector<pair<int, double> > children;
    Node(int vertexNumber)
    {
        this->vertexNumber = vertexNumber;
    }
 
    // Function to add the child for
    // the given node
    void add_child(int vNumber, double length)
    {
        pair<int, double> p;
        p.first = vNumber;
        p.second = length;
        children.push_back(p);
    }
};
 
// Function to find the distance of
// the node from the given source
// vertex to the destination vertex
vector<double> dijkstraDist(
    vector<Node*> g,
    int s, vector<int>& path)
{
    // Stores distance of each
    // vertex from source vertex
    vector<double> dist(g.size());
 
    // Boolean array that shows
    // whether the vertex 'i'
    // is visited or not
    bool visited[g.size()];
    for (int i = 0; i < g.size(); i++) {
        visited[i] = false;
        path[i] = -1;
        dist[i] = infi;
    }
    dist[s] = 0;
    path[s] = -1;
    int current = s;
 
    // Set of vertices that has
    // a parent (one or more)
    // marked as visited
    unordered_set<int> sett;
    while (true) {
 
        // Mark current as visited
        visited[current] = true;
        for (int i = 0;
             i < g[current]->children.size();
             i++) {
            int v = g[current]->children[i].first;
            if (visited[v])
                continue;
 
            // Inserting into the
            // visited vertex
            sett.insert(v);
            double alt
                = dist[current]
                  + g[current]->children[i].second;
 
            // Condition to check the distance
            // is correct and update it
            // if it is minimum from the previous
            // computed distance
            if (alt < dist[v]) {
                dist[v] = alt;
                path[v] = current;
            }
        }
        sett.erase(current);
        if (sett.empty())
            break;
 
        // The new current
        double minDist = infi;
        int index = 0;
 
        // Loop to update the distance
        // of the vertices of the graph
        for (double a: sett) {
            if (dist[a] < minDist) {
                minDist = dist[a];
                index = a;
            }
        }
        current = index;
    }
    return dist;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x;
    double y;

    cin >> x >> y;

    vector<double> first = {x, y};

    cin >> x >> y;

    vector<double> end = {x, y};

    int amount;
    cin >> amount;

    if (amount == 0){
        cout << distance(first, end) / 5.0;
        return 0;
    }
    vector<vector<double>> cannons;

    // Add all the coordinates of the start, cannons and end
    cannons.push_back(first);
    for (int i=0; i<amount; i++){
        cin >> x >> y;
        vector<double> temp = {x, y};
        cannons.push_back(temp);
    }
    cannons.push_back(end);

    // Setup graph
    vector<Node*> v;

    int n = amount+2, s = 0, e = amount+2;
 
    // Loop to create the nodes
    for (int i = 0; i < n; i++) {
        Node* a = new Node(i);
        v.push_back(a);
    }

    // Add all edges to the graph
    for (int j=0; j<cannons.size(); j++){
        if (j != 0){
            double dist = distance(cannons[0], cannons[j]);
            v[0] -> add_child(j, dist/5.0);
        }
    }

    for (int i=1; i<cannons.size()-1; i++){
        for (int j=0; j<cannons.size(); j++){
            if (i != j){
                double dist = distance(cannons[i], cannons[j]) - 50.0;
                if (dist < 0){
                    dist *= -1;
                }
                v[i] -> add_child(j, 2.0+(dist/5.0));
            }
        }
    }

    for (int j=0; j<cannons.size(); j++){
        if (j != cannons.size()-1){
            v[cannons.size()-1] -> add_child(j, infi);
        }
    }

    // Perform Dijkstras algorithm
    vector<int> path(v.size());
    vector<double> dist = dijkstraDist(v, s, path);
    
    
    cout.precision(5);
    cout << fixed;
    cout << dist[e-1];
}