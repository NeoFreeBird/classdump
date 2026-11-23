//
#ifndef ONBPresenterDelegate_Protocol_h
#define ONBPresenterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBPresenterDelegate <NSObject>

@required

/* required instance methods */
- (void)cancelFlowAndDismissWithPresenter:(id)presenter;

@optional

/* optional instance methods */
- (void)presenter:(id)presenter willPushViewController:(id)controller withPresentationType:(long long)type dismissable:(_Bool)dismissable;

@end

#endif /* ONBPresenterDelegate_Protocol_h */
