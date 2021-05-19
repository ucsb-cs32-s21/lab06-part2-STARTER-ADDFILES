#ifndef VCOMBOC_H
#define VCOMBOC_H

#include "psData.h"
#include "psCombo.h"
#include "demogData.h"
#include "demogCombo.h"
#include "visitorCombine.h"
#include "parse.h"
#include <memory>
#include <fstream>
#include <cassert>

class visitorCombineCounty : public visitorCombine {
public:
    visitorCombineCounty() {
    }

    //store demographic data by county name
	void visit(shared_ptr<demogData> obj) {
        //fill in

    }
    
    //aggregate police shooting data by county
    void visit(shared_ptr<psData> obj) {
        //fill in
    }

    private:
        //only inherited data at this point
};

#endif
