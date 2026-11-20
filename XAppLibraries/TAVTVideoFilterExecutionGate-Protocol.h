//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
