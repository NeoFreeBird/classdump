//
#ifndef T1DashContentPresenterDelegate_Protocol_h
#define T1DashContentPresenterDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1DashContentPresenterDelegate <NSObject>

@required

/* required instance methods */
- (void)dashContentPresenterPresentContentViewController:(id)controller dismissDashBlock:(id /* block */)block;
- (void)dashContentPresenterPresentModalViewController:(id)controller dismissDashBlock:(id /* block */)block;
- (void)dashContentPresenterSwitchAccountWithBlock:(id /* block */)block dismissDashBlock:(id /* block */)block;
- (void)dashContentPresenterDismissDashAnimated:(_Bool)animated completion:(id /* block */)completion;
- (void)dashContentPresenterDismissViewControllerAnimated:(_Bool)animated;
- (void)dashContentPresenterPrepareForModalPresentation:(id /* block */)presentation;

@optional

@end

#endif /* T1DashContentPresenterDelegate_Protocol_h */
