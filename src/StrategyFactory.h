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
    // static UpdateStrategy* createStrategy(const std::string &itemName)
    static std::unique_ptr<UpdateStrategy> createStrategy(const std::string& strategyType)
    {
        if (strategyType == "Aged Brie")
        {
            return std::make_unique<AgedBrieStrategy>();
        }
        else if (strategyType == "Backstage passes to a TAFKAL80ETC concert")
        {
            return std::make_unique<BackstageStrategy>();
        }
        else if (strategyType == "Sulfuras, Hand of Ragnaros")
        {
            return std::make_unique<SulfurasStrategy>();
        }
        else if (strategyType == "Conjured")
        {
            return std::make_unique<ConjuredStrategy>();
        }
        else
        {
            return std::make_unique<DefaultItemStrategy>();
        }
    }
};

#endif //STRATEGYFACTORY_H
