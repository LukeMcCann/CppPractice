#ifndef CAT_H_
#define CAT_H_

class Cat {
    private:
        bool happy;
        string name;
    public:
        void speak();
        bool isHappy();
        void setMood(bool mood);
};

#endif /* CAT_H_ */