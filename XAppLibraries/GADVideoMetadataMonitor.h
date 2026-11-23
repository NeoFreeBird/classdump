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
