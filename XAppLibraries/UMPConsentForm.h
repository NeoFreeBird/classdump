//
#ifndef UMPConsentForm_h
#define UMPConsentForm_h
@import Foundation;

#include "UMPView.h"

@class NSObject;

@interface UMPConsentForm : NSObject {
    /* instance variables */
    UMPView *_view;
    id /* block */ _completionHandler;
    _Bool _hasPresented;
}

/* class methods */
+ (void)loadWithCompletionHandler:(id /* block */)handler;
+ (void)loadWithOrigin:(id)origin completionHandler:(id /* block */)handler;
+ (void)loadAndPresentIfRequiredFromViewController:(id)controller completionHandler:(id /* block */)handler;
+ (void)presentPrivacyOptionsFormFromViewController:(id)controller completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithView:(id)view;
- (void)presentFromViewController:(id)controller completionHandler:(id /* block */)handler;
- (void)dismissedViewWithError:(id)error;
- (void)presentView:(id)view fromViewController:(id)controller;

@end

#endif /* UMPConsentForm_h */
