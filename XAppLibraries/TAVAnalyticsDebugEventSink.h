//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
