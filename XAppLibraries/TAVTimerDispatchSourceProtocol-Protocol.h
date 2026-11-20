//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVTimerDispatchSourceProtocol_Protocol_h
#define TAVTimerDispatchSourceProtocol_Protocol_h
@import Foundation;

@protocol TAVTimerDispatchSourceProtocol

@required

/* required instance methods */
- (void)cancel;

@optional

@end

#endif /* TAVTimerDispatchSourceProtocol_Protocol_h */
