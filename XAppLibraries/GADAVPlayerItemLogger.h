//
#ifndef GADAVPlayerItemLogger_h
#define GADAVPlayerItemLogger_h
@import Foundation;

#include "GADEventContext.h"
#include "GADObserverCollection.h"

@class AVPlayerItem, NSObject;

@interface GADAVPlayerItemLogger : NSObject {
    /* instance variables */
    AVPlayerItem *_playerItem;
    GADEventContext *_context;
    GADObserverCollection *_observers;
    _Bool _enabled;
}

/* instance methods */
- (id)initWithPlayerItem:(id)item eventContext:(id)context;
- (void)dealloc;
- (void)startMonitoring;
- (void)startMonitoringOnMainThread;
- (void)stopMonitoring;

@end

#endif /* GADAVPlayerItemLogger_h */
