//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1StatusBodyTextAskGrokEventHandler_h
#define T1StatusBodyTextAskGrokEventHandler_h
@import Foundation;

@class NSObject;

@interface T1StatusBodyTextAskGrokEventHandler : NSObject

/* instance methods */
- (void)handleStatusViewEvent:(id)event controller:(id)controller;

@end

#endif /* T1StatusBodyTextAskGrokEventHandler_h */
