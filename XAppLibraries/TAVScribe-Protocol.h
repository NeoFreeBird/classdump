//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
