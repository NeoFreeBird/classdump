//
#ifndef T1CardAppStoreCustomizedPresentationDelegate_Protocol_h
#define T1CardAppStoreCustomizedPresentationDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardAppStoreCustomizedPresentationDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)customizeAppStoreViewControllerPresentationIfNeeded;
- (long long)presentationStyle;
- (id)transitioningDelegate;
- (id)presentingViewController;
- (void)appStoreControllerDidDismiss;

@optional

@end

#endif /* T1CardAppStoreCustomizedPresentationDelegate_Protocol_h */
