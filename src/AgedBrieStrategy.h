//
// Created by Nouran on 12/18/2024.
//

#ifndef AGEDBRIESTRATEGY_H
#define AGEDBRIESTRATEGY_H
#include "UpdateStrategy.h"

class AgedBrieStrategy : public UpdateStrategy
{
    public:
    void updateQuality(Item &item) override
    {
        if (item.quality < 50)
        {
            item.quality = item.quality + 1;
        }
        item.sellIn = item.sellIn - 1;
        if (item.sellIn < 0 && item.quality < 50)
        {
            item.quality = item.quality + 1;
        }
    }
};

#endif //AGEDBRIESTRATEGY_H
