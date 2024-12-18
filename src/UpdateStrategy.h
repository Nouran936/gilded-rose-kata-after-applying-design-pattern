//
// Created by Nouran on 12/18/2024.
//

#ifndef UPDATESTRATEGY_H
#define UPDATESTRATEGY_H

#include "GildedRose.h"

//implementing strategy design pattern by defining a base class UpdateStrategy
class UpdateStrategy
{
    public:
    virtual ~UpdateStrategy() = default;
    virtual void updateQuality(Item &item) = 0;
};

#endif //UPDATESTRATEGY_H


