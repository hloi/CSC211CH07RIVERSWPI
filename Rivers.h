//
// Created by hloi on 11/5/2021.
//

#ifndef CSC211CH07RIVERSWPI_RIVERS_H
#define CSC211CH07RIVERSWPI_RIVERS_H

#include <list>
#include <string>

using std::string;
using std::list;

class Rivers {

public:

    Rivers(string name, double ph, double DO, list<Rivers*> rivers);

    const string &getRiverName() const;

    void setRiverName(const string &riverName);

    double getPh() const;

    void setPh(double pH);

    double getDo() const;

    void setDo(double DO);

    const list<Rivers*> &getRivers() const;

    void setRivers(const list<Rivers*> &rivers);

    void make_river(Rivers* river);

    string list_acidic_rivers();

private:
    string river_name;
    double pH;
    double DO;
    list<Rivers*> rivers;
    string list_acidic_tributaries(list<Rivers*>::const_iterator begin,
                                   list<Rivers*>::const_iterator end);
    string list_acidic_rivers(Rivers* rivers);
};


#endif //CSC211CH07RIVERSWPI_RIVERS_H
