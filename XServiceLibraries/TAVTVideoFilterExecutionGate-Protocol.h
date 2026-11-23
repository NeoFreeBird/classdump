//
#ifndef TAVTVideoFilterExecutionGate_Protocol_h
#define TAVTVideoFilterExecutionGate_Protocol_h
@import Foundation;

@protocol TAVTVideoFilterExecutionGate

@required

@property (nonatomic, readonly) _Bool videoFiltersCanRun;

/* required instance methods */
- (void)waitUntilVideoFiltersCanRun;

@optional

@end

#endif /* TAVTVideoFilterExecutionGate_Protocol_h */
