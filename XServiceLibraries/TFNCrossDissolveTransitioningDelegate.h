//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNCrossDissolveTransitioningDelegate_h
#define TFNCrossDissolveTransitioningDelegate_h
@import Foundation;

#include "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSObject, NSString;

@interface TFNCrossDissolveTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)animationControllerForPresentedController:(id)controller presentingController:(id)controller sourceController:(id)controller;
- (id)animationControllerForDismissedController:(id)controller;

@end

#endif /* TFNCrossDissolveTransitioningDelegate_h */
