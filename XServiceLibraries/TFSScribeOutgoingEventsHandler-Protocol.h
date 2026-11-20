//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeOutgoingEventsHandler_Protocol_h
#define TFSScribeOutgoingEventsHandler_Protocol_h
@import Foundation;

@protocol TFSScribeOutgoingEventsHandler

@required

/* required instance methods */
- (void)handleScribeOutgoingEvents:(id)events retryDistribution:(id)distribution completionHandler:(id /* block */)handler;

@optional

@end

#endif /* TFSScribeOutgoingEventsHandler_Protocol_h */
