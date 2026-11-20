//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
