//
#ifndef TAVAnalyticsEventSink_Protocol_h
#define TAVAnalyticsEventSink_Protocol_h
@import Foundation;

@protocol TAVAnalyticsEventSink

@required

/* required instance methods */
- (void)handleEvent:(id)event;
- (void)handleRawEventWithPlaylistItemKey:(id)key handler:(id /* block */)handler;

@optional

@end

#endif /* TAVAnalyticsEventSink_Protocol_h */
