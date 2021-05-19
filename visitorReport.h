#ifndef VISITREP_H
#define VISITREP_H

#include "psData.h"
#include "demogData.h"
#include "visitor.h"

class visitorReport : public Visitor {
public:
    visitorReport() : numVisited(0) {}

	void visit(demogData *e) {
        //fill in
    }
    
    void visit(psData *e) {
        //fill in
    }

    private:
    	int numVisited;
};

#endif