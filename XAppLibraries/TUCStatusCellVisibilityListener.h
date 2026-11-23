//
#ifndef TUCStatusCellVisibilityListener_h
#define TUCStatusCellVisibilityListener_h
@import Foundation;

#include "TFNCellVisibilityListener-Protocol.h"

@class NSObject;

@interface TUCStatusCellVisibilityListener : NSObject <TFNCellVisibilityListener> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 listeners;
    @40@0:8:16@24@32 unifiedCardView;
}

/* instance methods */
- (void)cellWillDisplay:(id)display inDataViewController:(id)controller;
- (void)cellDidDisplay:(id)display inDataViewController:(id)controller withVisibilityPercentage:(double)percentage visibilityState:(unsigned long long)state;
- (void)cellWillEndDisplaying:(id)displaying inDataViewController:(id)controller;
- (void)cellDidEndDisplaying:(id)displaying inDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)cellDidEndDisplayingFromViewport:(id)viewport inDataViewController:(id)controller;
- (id)initWithContext:(id)context;
- (id)init;

@end

#endif /* TUCStatusCellVisibilityListener_h */
