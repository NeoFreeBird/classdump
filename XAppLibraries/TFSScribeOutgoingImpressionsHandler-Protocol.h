//
#ifndef TFSScribeOutgoingImpressionsHandler_Protocol_h
#define TFSScribeOutgoingImpressionsHandler_Protocol_h
@import Foundation;

@protocol TFSScribeOutgoingImpressionsHandler

@required

/* required instance methods */
- (id)eventsForImpressionsBatch:(id)batch;

@optional

@end

#endif /* TFSScribeOutgoingImpressionsHandler_Protocol_h */
