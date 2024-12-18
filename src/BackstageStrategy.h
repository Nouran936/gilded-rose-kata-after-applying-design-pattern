//
// Created by Nouran on 12/18/2024.
//

#ifndef BACKSTAGESTRATEGY_H
#define BACKSTAGESTRATEGY_H
#include "UpdateStrategy.h"

class BackstageStrategy : public UpdateStrategy
{
    public:
    void updateQuality(Item &item) override
    {
        if (item.quality < 50)
        {
            item.quality = item.quality + 1;

            if (item.sellIn < 11 && item.quality < 50)
            {
                item.quality = item.quality + 1;
            }

            if (item.sellIn < 6 && item.quality < 50)
            {
                item.quality = item.quality + 1;

            }
        }

        item.sellIn = item.sellIn - 1;

        if (item.sellIn <= 0)
        {
            item.quality = 0;
        }
    }
};

#endif //BACKSTAGESTRATEGY_H
