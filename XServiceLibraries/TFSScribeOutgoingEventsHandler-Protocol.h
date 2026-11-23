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
