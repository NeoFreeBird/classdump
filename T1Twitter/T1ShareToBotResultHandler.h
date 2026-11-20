//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ShareToBotResultHandler_h
#define T1ShareToBotResultHandler_h
@import Foundation;

@class NSObject;

@interface T1ShareToBotResultHandler : NSObject // (Swift)

/* class methods */
+ (void)sendPostWithStatusID:(id)id account:(id)account sourceViewController:(id)controller;

/* instance methods */
- (id)init;

@end

#endif /* T1ShareToBotResultHandler_h */
