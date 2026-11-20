//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIAdaptivePresentationControllerDelegate_Protocol_h
#define UIAdaptivePresentationControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol UIAdaptivePresentationControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (long long)adaptivePresentationStyleForPresentationController:(id)controller;
- (long long)adaptivePresentationStyleForPresentationController:(id)controller;
- (long long)adaptivePresentationStyleForPresentationController:(id)controller traitCollection:(id)collection;
- (long long)adaptivePresentationStyleForPresentationController:(id)controller traitCollection:(id)collection;
- (void)presentationController:(id)controller prepareAdaptivePresentationController:(id)controller;
- (void)presentationController:(id)controller prepareAdaptivePresentationController:(id)controller;
- (id)presentationController:(id)controller viewControllerForAdaptivePresentationStyle:(long long)style;
- (void)presentationController:(id)controller willPresentWithAdaptiveStyle:(long long)style transitionCoordinator:(id)coordinator;
- (_Bool)presentationControllerShouldDismiss:(id)dismiss;
- (void)presentationControllerWillDismiss:(id)dismiss;
- (void)presentationControllerDidDismiss:(id)dismiss;
- (void)presentationControllerDidAttemptToDismiss:(id)dismiss;

@end

#endif /* UIAdaptivePresentationControllerDelegate_Protocol_h */
