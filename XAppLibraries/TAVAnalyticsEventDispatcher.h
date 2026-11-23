//
#ifndef TAVAnalyticsEventDispatcher_h
#define TAVAnalyticsEventDispatcher_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"

@class NSArray, NSObject;

@interface TAVAnalyticsEventDispatcher : NSObject <TAVAnalyticsEventSink>

@property (readonly, copy, nonatomic) NSArray *sinks;

/* instance methods */
- (id)initWithSinks:(id)sinks;
- (void)handleEvent:(id)event;
- (void)handleRawEventWithPlaylistItemKey:(id)key handler:(id /* block */)handler;

@end

#endif /* TAVAnalyticsEventDispatcher_h */
