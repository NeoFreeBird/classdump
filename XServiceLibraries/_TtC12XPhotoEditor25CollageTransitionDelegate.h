//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor25CollageTransitionDelegate_h
#define _TtC12XPhotoEditor25CollageTransitionDelegate_h
@import Foundation;

#include "UINavigationControllerDelegate-Protocol.h"

@class NSObject;

@interface XPhotoEditor.CollageTransitionDelegate : NSObject <UINavigationControllerDelegate> // (Swift)

/* instance methods */
- (id)navigationController:(id)controller animationControllerForOperation:(long long)operation fromViewController:(id)controller toViewController:(id)controller;
- (id)init;

@end

#endif /* _TtC12XPhotoEditor25CollageTransitionDelegate_h */
