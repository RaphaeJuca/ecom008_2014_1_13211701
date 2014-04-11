#ifndef Link_H
#define Link_H


template <typename E> class Link {
public:
    E element;
    Link *next;

    Link(const E& elemval, Link* nextval = 0)
    {
        element = elemval;
        next = nextval;
    }
    Link(Link* nextval = 0)
    {
        next = nextval;
    }

};

#endif // Link_H
