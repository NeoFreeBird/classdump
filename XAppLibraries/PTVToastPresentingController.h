//
#ifndef PTVToastPresentingController_h
#define PTVToastPresentingController_h
@import Foundation;

#include "PTVBannerPresentingController.h"

@interface PTVToastPresentingController : PTVBannerPresentingController

/* class methods */
+ (void)PresentToastMessage:(id)message;
+ (void)PresentToastMessage:(id)message BackgroundColor:(id)color;
+ (void)PresentToastMessage:(id)message BackgroundColor:(id)color ActionBlock:(id /* block */)block;
+ (void)PresentAttributedToast:(id)toast;
+ (void)PresentAttributedToast:(id)toast BackgroundColor:(id)color;
+ (void)PresentAttributedToast:(id)toast BackgroundColor:(id)color ActionBlock:(id /* block */)block;
+ (void)SetPresentingBlock:(id /* block */)block;

@end

#endif /* PTVToastPresentingController_h */
