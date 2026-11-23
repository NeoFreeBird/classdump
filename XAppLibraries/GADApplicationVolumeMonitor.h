//
#ifndef GADApplicationVolumeMonitor_h
#define GADApplicationVolumeMonitor_h
@import Foundation;

#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSObject;

@interface GADApplicationVolumeMonitor : NSObject {
    /* instance variables */
    GADWebAdView *_webAdView;
    GADObserverCollection *_observers;
}

/* instance methods */
- (id)initWithWebAdView:(id)view;
- (void)reportCurrentAudioState;

@end

#endif /* GADApplicationVolumeMonitor_h */
