//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADViewControllerPresenter_h
#define GADViewControllerPresenter_h
@import Foundation;

#include "GADEventContext.h"
#include "GADPresenting-Protocol.h"

@class NSObject, NSString, UIViewController, UIWindowScene;

@interface GADViewControllerPresenter : NSObject <GADPresenting> {
    /* instance variables */
    UIViewController *_viewController;
}

@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithViewController:(id)controller context:(id)context;
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)presentFromViewController:(id)controller completion:(id /* block */)completion;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)relinquishScreenWithCompletion:(id /* block */)completion;

@end

#endif /* GADViewControllerPresenter_h */
