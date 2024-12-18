#include "GildedRose.h"
#include <vector>
#include "UpdateStrategy.h"
#include "StrategyFactory.h"

GildedRose::GildedRose(vector<Item> & items) : items(items)
{}

void GildedRose::updateQuality()
{
    for (auto &item : items)
    {
        std::unique_ptr<UpdateStrategy> strategy = StrategyFactory::createStrategy(item.name);
        if (strategy)
        {
            strategy->updateQuality(item);
        }
    }
}