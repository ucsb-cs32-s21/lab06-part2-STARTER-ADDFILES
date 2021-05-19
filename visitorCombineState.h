#ifndef VCOMBOS_H
#define VCOMBOS_H


#include "visitorCombine.h"
#include <memory>

class visitorCombineState : public visitorCombine {
public:
    visitorCombineState() {}

	void visit(shared_ptr<demogData> obj) {
        //fill in
    }
    
    void visit(shared_ptr<psData> obj) {
        //fill in
    }

    private:
       //inherited
};

#endif
