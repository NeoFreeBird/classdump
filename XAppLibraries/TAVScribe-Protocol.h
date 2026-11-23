//
#ifndef TAVScribe_Protocol_h
#define TAVScribe_Protocol_h
@import Foundation;

@protocol TAVScribe

@required

/* required instance methods */
- (void)logClientEventWithName:(id)name parameters:(id)parameters;
- (void)logPromotedEventWithName:(id)name parameters:(id)parameters;

@optional

@end

#endif /* TAVScribe_Protocol_h */
