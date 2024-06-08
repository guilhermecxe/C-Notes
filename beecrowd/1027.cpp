#include <iostream>
#include <vector>

using namespace std;

class Wave{
    public:
        vector<pair<int, int>> points;

        void add_point(int x, int y){
            pair<int, int> point;
            point.first = x;
            point.second = y;
            points.push_back(point);
        }

        void print_points(){
            vector<pair<int, int>>::iterator iter;

            for(iter=points.begin(); iter!=points.end(); iter++)
                cout << (*iter).first << ", " << (*iter).second << endl;
        }
};

int next_n_points(Wave wave, pair<int, int> point){
    vector<pair<int, int>>::iterator iter;
    int counter_up = 0;
    int counter_down = 0;

    for(iter=wave.points.begin(); iter!=wave.points.end(); iter++)
        if((*iter).first > point.first){
            if((*iter).second == (point.second)){
                counter_up++;
                counter_down++;
            } else if((*iter).second == (point.second + 2))
                counter_up++;
            else if ((*iter).second == (point.second - 2))
                counter_down++;
        }
    return (counter_up > counter_down) ? counter_up : counter_down;
}

int main(){
    int n, x, y;
    Wave wave;

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        wave.add_point(x, y);
    }

    // wave.print_points();
    pair<int, int> point(0, 1);
    cout << next_n_points(wave, point) << endl;

    return 0;
}