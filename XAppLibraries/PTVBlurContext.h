//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBlurContext_h
#define PTVBlurContext_h
@import Foundation;

#include "MTLDevice-Protocol.h"

@class CIContext, NSObject;

@interface PTVBlurContext : NSObject

@property (readonly, nonatomic) CIContext *coreImageContext;
@property (readonly, nonatomic) id <MTLDevice> metalDevice;

/* class methods */
+ (void)didBecomeActive;
+ (void)willResignActive;
+ (void)didEnterBackground;
+ (void)willEnterForeground;
+ (_Bool)isAppActiveInTheForeground;

/* instance methods */
- (id)init;

@end

#endif /* PTVBlurContext_h */
