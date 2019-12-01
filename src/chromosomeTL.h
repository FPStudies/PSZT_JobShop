#ifndef CHROMOSOMETL_H
#define CHROMOSOMETL_H

#include <utility>
#include <vector>
#include "chromosome.h"
#include "task.h"

namespace task_scheduling{

    class ChromosomeTL: public Chromosome<Task>{

    public:
        ChromosomeTL(const unsigned int &size);
        ~ChromosomeTL();
        ChromosomeTL(const ChromosomeTL* chrom);

        std::pair<ChromosomeTL*, ChromosomeTL*> crossover(const ChromosomeTL *chromosome) const;

        //void set(const std::vector<Task*> &taskVector, bool mix = false);
    };
};



#endif //CHROMOSOMETL_H
