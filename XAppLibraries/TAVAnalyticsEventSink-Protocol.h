//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
