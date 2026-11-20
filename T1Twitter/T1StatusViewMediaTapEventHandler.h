//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusViewMediaTapEventHandler_h
#define T1StatusViewMediaTapEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusViewMediaTapEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller zoomProvider:(id)provider scribeContext:(id)context;

@end

#endif /* T1StatusViewMediaTapEventHandler_h */
