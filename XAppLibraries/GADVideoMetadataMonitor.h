//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADVideoMetadataMonitor_h
#define GADVideoMetadataMonitor_h
@import Foundation;

#include "GADAdVideoController.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADVideoMetadataMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADAdVideoController *_videoController;
}

/* instance methods */
- (id)initWithMessageSource:(id)source adVideoController:(id)controller;
- (void)handleVideoMetadataAction:(id)action;
- (void)handleVideoCurrentTimeUpdate:(id)update;

@end

#endif /* GADVideoMetadataMonitor_h */
