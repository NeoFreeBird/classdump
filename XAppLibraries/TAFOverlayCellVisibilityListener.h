//
#ifndef TAFOverlayCellVisibilityListener_h
#define TAFOverlayCellVisibilityListener_h
@import Foundation;

#include "TFNCellVisibilityListener-Protocol.h"

@class NSObject;

@interface TAFOverlayCellVisibilityListener : NSObject <TFNCellVisibilityListener> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 maxCellVisibleAreaPercentage;
    @40@0:8:16@24@32 presentOverlayBlock;
    @40@0:8:16@24@32 dismissOverlayBlock;
    @40@0:8:16@24@32 lastVisibilityState;
    @40@0:8:16@24@32 lastCellEndDisplayingReason;
    @40@0:8:16@24@32 didTriggerPresentOverlayBlock;
    @40@0:8:16@24@32 didTriggerDismissOverlayBlock;
}

/* instance methods */
- (id)initWithPresentOverlayBlock:(id /* block */)block dismissOverlayBlock:(id /* block */)block;
- (void)cellDidEndDisplaying:(id)displaying inDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)cellDidDisplay:(id)display inDataViewController:(id)controller withVisibilityPercentage:(double)percentage visibilityState:(unsigned long long)state;
- (void)cellDidEndDisplayingFromViewport:(id)viewport inDataViewController:(id)controller;
- (id)init;

@end

#endif /* TAFOverlayCellVisibilityListener_h */
