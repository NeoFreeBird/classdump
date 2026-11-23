//
#ifndef THFHomeShimmerCrossfade_h
#define THFHomeShimmerCrossfade_h
@import Foundation;

@class NSObject, v24@?0@"TTMAssetRenderingResult"8@"NSError"16;

@interface THFHomeShimmerCrossfade : NSObject { // (Swift)
    /* instance variables */
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 featureSwitches;
    v24@?0@"TTMAssetRenderingResult"8@"NSError"16 $__lazy_storage_$_duration;
}

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (void)crossfadeFromShimmerInTableView:(id)view;
- (id)init;

@end

#endif /* THFHomeShimmerCrossfade_h */
