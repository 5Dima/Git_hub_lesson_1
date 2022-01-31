#include<iostream> 
#include<string> 
#include<vector> 


using namespace std;
class point {
    int x, y;
public:
    point(int x, int y) { this->x = x; this->y = y; }
    void print() {
        cout << "X: " << x << "| Y: " << y << "\n";
    }
};

class mnogo_kut {
    vector<point> v;
public:
    figure() {
    }
    figure(vector<point> v) {
        this->v = v;
    }
    virtual void set_figure(point p) = 0;
    virtual void print_figure() = 0;

};


class kvadrat :public figure {
    vector<point> v;
public:
    kvadrat() {};
    void set_figure(point p) override {
        v.push_back(p);
    }
    void print_figure() override {
        cout << string(30, '=') << "\n";
        for (auto it : v)it.print();
        cout << string(30, '=') << "\n";
    }

};


class prymokutnuk :public figure {
    vector<point> v;
public:
    prymokutnuk() {};
    void set_figure(point p) override {
        v.push_back(p);
    }
    void print_figure() override {
        cout << string(30, '=') << "\n";
        for (auto it : v)it.print();
        cout << string(30, '=') << "\n";
    }

};

class romb :public figure {
    vector<point> v;
public:
    romb() {};
    void set_figure(point p) override {
        v.push_back(p);
    }
    void print_figure() override {
        cout << string(30, '=') << "\n";
        for (auto it : v)it.print();
        cout << string(30, '=') << "\n";
    }

};

class mnogo_kut :public figure {
    vector<point> v;
public:
    mnogo_kut() {};
    void set_figure(point p) override {
        v.push_back(p);
    }
    void print_figure() override {
        cout << string(30, '=') << "\n";
        for (auto it : v)it.print();
        cout << string(30, '=') << "\n";
    }

};


class work_figure {

public:

    void print() {

    }


};


int main() {







    return 0;
}