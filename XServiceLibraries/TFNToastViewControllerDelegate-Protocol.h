//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNToastViewControllerDelegate_Protocol_h
#define TFNToastViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNToastViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)toastViewController:(id)controller didInvokeToastAction:(id)action forToast:(id)toast actionView:(id)view;
- (void)toastViewController:(id)controller willPresentToast:(id)toast;
- (void)toastViewController:(id)controller didPresentToast:(id)toast;
- (void)toastViewController:(id)controller willDismissToast:(id)toast;
- (void)toastViewController:(id)controller didDismissToast:(id)toast withStyle:(unsigned long long)style byGesture:(_Bool)gesture;
- (void)toastViewController:(id)controller isInteractingWithToast:(id)toast;
- (void)toastViewController:(id)controller didEndInteractingWithToast:(id)toast;

@end

#endif /* TFNToastViewControllerDelegate_Protocol_h */
