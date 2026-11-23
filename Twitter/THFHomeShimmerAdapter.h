//
#ifndef THFHomeShimmerAdapter_h
#define THFHomeShimmerAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface THFHomeShimmerAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 featureSwitches;
}

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* THFHomeShimmerAdapter_h */
