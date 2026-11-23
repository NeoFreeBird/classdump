//
#ifndef TAVAnalyticsDebugEventSink_h
#define TAVAnalyticsDebugEventSink_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"

@class NSObject;

@interface TAVAnalyticsDebugEventSink : NSObject <TAVAnalyticsEventSink>

/* instance methods */
- (void)handleEvent:(id)event;
- (void)handleRawEventWithPlaylistItemKey:(id)key handler:(id /* block */)handler;

@end

#endif /* TAVAnalyticsDebugEventSink_h */
