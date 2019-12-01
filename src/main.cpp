#include <iostream>

using namespace std;
#include <fstream>

#include "dataContainer.h"
#include "population.h"
#include "rand.h"

void setPopulation(Population &population){
    population.populationSize = 1000;
    population.maxNumberOfGeneration = 20000;
    population.crossoverProb = 550;
    population.mutationProb = 500;
    population.numberOfGenerWithoutImprov = 1000;
    population.PCl1 = 350;
    population.PCg1 = 550;
    population.PCl2 = 550;
    population.PCg2 = 750;
    population.PCl12 = 750;
    population.PCg12 = 950;
    population.PMl1 = 150;
    population.PMg1 = 250;
    population.PMl2 = 250;
    population.PMg2 = 400;
    population.PMl12 = 400;
    population.PMg12 = 500;
}

using namespace task_scheduling;

int main(int argc, char** argv)
{

    #ifdef DEBUG
    cout << "Debug version" << endl;
    #endif

    Rand::newSeed();

    task_scheduling::DataContainer container;
    if(container.prepareData(argc, argv)) cout << "Something bad happened" << endl;

    container.printTasks();


    Population population;

    population.dataContainer = &container;
    setPopulation(population);

    population.run(1);

    cout << "Task chedule: " << endl;

    for (unsigned int i = 0; i < container.taskSchedule.size(); ++i){
        cout << "\t Processor[" << i << "] " << endl;
        for(unsigned int j = 0; j < container.taskSchedule[i].size(); ++j){
            cout << *container.taskSchedule[i][j] << endl;
        }
    }

    cout << "Delay sum: " << container.delaySum() << endl;
    
    /*try{

    }
    catch(runtime_error &e){
         cout << e.what() << endl;
    }
    catch (const char *&e){
        cout << e << endl;
    }*/

    /*task_scheduling::ChromosomeTL tmp(4);
    tmp.set(container, true);
    cout << tmp <<endl;

    tmp.mutation();
    cout << "Mutation" << endl;*/

    //ChromosomeTL *addr = &tmp;
    //(addr->genes)[0] = (addr->genes)[1];

    //cout << tmp <<endl;

    return 0;
}
