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

class figure {
    vector<point> v;
public:
    figure() { }
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
    void print(figure * f) {
        f->print_figure();
    }
};


int main() {
    romb *r=new romb;
    kvadrat *k=new kvadrat;
    mnogo_kut *mk=new mnogo_kut;
    prymokutnuk *p=new prymokutnuk;
    work_figure w;
    r->set_figure(point(12, -4));
    r->set_figure(point(7, 2));
    r->set_figure(point(2, 5));
    cout << "\tROMB\n";
    w.print(r);
    
    cout << "\tKVADRAT\n";
    k->set_figure(point(3, 7));
    k->set_figure(point(9, 0));
    k->set_figure(point(-6, -1));
    k->set_figure(point(8, 4));
    w.print(k);
    
    cout << "\MNOGO KUT\n";
    mk->set_figure(point(13, 27));
    mk->set_figure(point(11, 0));
    mk->set_figure(point(-3, 6));
    mk->set_figure(point(84, 34));
    w.print(mk);
    
    cout << "\tPRYMOKUTNUK\n";
    p->set_figure(point(513, 427));
   p->set_figure(point(151, 0));
    p->set_figure(point(-73, 46));
   p->set_figure(point(854, 324));
    w.print(p);




    return 0;
}