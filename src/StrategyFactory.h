//
// Created by Nouran on 12/18/2024.
//

#ifndef STRATEGYFACTORY_H
#define STRATEGYFACTORY_H
#include "UpdateStrategy.h"
#include "BackstageStrategy.h"
#include "ConjuredStrategy.h"
#include "SulfurasStrategy.h"
#include "AgedBrieStrategy.h"
#include "DefaultItemStrategy.h"


class StrategyFactory
{
    public:
    static UpdateStrategy* createStrategy(const std::string& strategyType)
    {
        if (strategyType == "Aged Brie")
        {
            return new AgedBrieStrategy();
        }
        else if (strategyType == "Backstage passes to a TAFKAL80ETC concert")
        {
            return new BackstageStrategy();
        }
        else if (strategyType == "Sulfuras, Hand of Ragnaros")
        {
            return new SulfurasStrategy();
        }
        else if (strategyType == "Conjured")
        {
            return new ConjuredStrategy();
        }
        else
        {
            return new DefaultItemStrategy();
        }
    }
};

#endif //STRATEGYFACTORY_H

