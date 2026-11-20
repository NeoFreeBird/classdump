//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModalContainerViewControllerDelegate_Protocol_h
#define TFNModalContainerViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNModalContainerViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)gestureDidDismissModalContainerViewController:(id)controller;

@end

#endif /* TFNModalContainerViewControllerDelegate_Protocol_h */
