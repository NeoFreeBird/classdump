//
#ifndef TAVTVideoFilterTask_Protocol_h
#define TAVTVideoFilterTask_Protocol_h
@import Foundation;

@protocol TAVTVideoFilterTask

@required

@property (nonatomic, readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationTimeStamp;

/* required instance methods */
- (struct __CVBuffer *)waitUntilCompletedAndReturnError:(id *)error;

@optional

@end

#endif /* TAVTVideoFilterTask_Protocol_h */
