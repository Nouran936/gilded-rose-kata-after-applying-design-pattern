#include <gtest/gtest.h>
#include <GildedRose.h>

// Aged Brie
TEST(GildedRoseTest, Quality_of_an_item_AgedBrie_increases) {
    vector<Item> items;
    items.push_back(Item("Aged Brie", 10, 10));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(11, app.items[0].quality);
}
// Aged Brie
TEST(GildedRoseTest, Quality_of_an_item_AgedBrie_increases_zeroSellin) {
    vector<Item> items;
    items.push_back(Item("Aged Brie", 0, 10));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(12, app.items[0].quality);
}

// Aged Brie
TEST(GildedRoseTest, Quality_of_an_item_never_exceeds_50_AgedBrie) {
    vector<Item> items;
    items.push_back(Item("Aged Brie", 5, 50));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(50, app.items[0].quality);
}

// Sulfuras
TEST(GildedRoseTest, Quality_of_an_item_never_exceeds_80_Sulfuras_quality) {
    vector<Item> items;
    items.push_back(Item("Sulfuras, Hand of Ragnaros", 0, 80));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(80, app.items[0].quality);
}


// Sulfuras
TEST(GildedRoseTest, Quality_of_an_item_never_exceeds_80_Sulfuras_quality_afterSellin) {
    vector<Item> items;
    items.push_back(Item("Sulfuras, Hand of Ragnaros", -1, 80));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(80, app.items[0].quality);
}

// Backstage
TEST(GildedRoseTest, Quality_of_an_item_never_exceeds_50_BackstagePasses) {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 5, 50));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(50, app.items[0].quality);
}

// Backstage
TEST(GildedRoseTest, Quality_of_an_item_BackstagePasses_increases_10DaysLeft) {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 10, 30));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(32, app.items[0].quality);
}

//Backstage
TEST(GildedRoseTest, Quality_of_an_item_BackstagePasses_increases_less_than_10DaysLeft) {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 5, 30));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(33, app.items[0].quality);
}

//Backstage
TEST(GildedRoseTest, Quality_drops_to_0_after_the_concert_BackstagePasses) {
    vector<Item> items;
    items.push_back(Item("Backstage passes to a TAFKAL80ETC concert", 0, 30));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(0, app.items[0].quality);
}

//Conjured
TEST(GildedRoseTest, Conjured_items_degrade_twice_as_fast_as_normal_items){
    vector<Item> items;
    items.push_back(Item("Conjured", 10, 20));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(18, app.items[0].quality);
}


//Conjured
TEST(GildedRoseTest, Conjured_items_degrade_fourTimes_as_fast_as_normal_items_after_sellIn){
    vector<Item> items;
    items.push_back(Item("Conjured", 0, 20));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(16, app.items[0].quality);
}

// TEST(GildedRoseTest, ttttttt){
//     vector<Item> items;
//     items.push_back(Item("Foo", 3, 6));
//     GildedRose app(items);
//     for (int i=0; i < 30; i++)
//     {
//         app.updateQuality();
//         cout << app.items[0].quality << endl;
//     }

//     EXPECT_EQ(0, app.items[0].quality);
// }

// Conjured
TEST(GildedRoseTest, Conjured_items_quality_never_negative){
    vector<Item> items;
    items.push_back(Item("Conjured", -1, 0));
    GildedRose app(items);
    app.updateQuality();
    app.updateQuality();
    EXPECT_EQ(0, app.items[0].quality);
}


//Default item
TEST(GildedRoseTest, DefaultItem_Degrades_Quality_By_1_Before_SellIn) {
    vector<Item> items;
    items.push_back(Item("Default", 10, 20));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(19, app.items[0].quality);
}

//Default item
TEST(GildedRoseTest, DefaultItem_Degrades_Quality_By_2_After_SellIn) {
    vector<Item> items;
    items.push_back(Item("Default", 0, 20));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(18, app.items[0].quality);
}

//Default item
TEST(GildedRoseTest, DefaultItem_Quality_Never_Negative) {
    vector<Item> items;
    items.push_back(Item("Default", 5, 0));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(0, app.items[0].quality);
}

//Default item
TEST(GildedRoseTest, DefaultItem_Never_Negative_After_sellIn) {
    vector<Item> items;
    items.push_back(Item("Default", 0, 0));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(0, app.items[0].quality);
}

//Default item
TEST(GildedRoseTest, DefaultItem_Never_Negative_After_sellIn_GT0Quality) {
    vector<Item> items;
    items.push_back(Item("Default", 0, 1));
    GildedRose app(items);
    app.updateQuality();
    EXPECT_EQ(0, app.items[0].quality);
}

// TEST(GildedRoseTest, DefaultItem_Never_Negative_After_sellIn_LT0) {
//     vector<Item> items;
//     items.push_back(Item("Default", -6, -1));
//     GildedRose app(items);
//     app.updateQuality();
//     EXPECT_EQ(0, app.items[0].quality);
// }




int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}