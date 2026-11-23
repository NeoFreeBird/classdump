//
#ifndef T1DashContentPresenter_h
#define T1DashContentPresenter_h
@import Foundation;

#include "T1DashContentPresenterDelegate-Protocol.h"

@class NSObject, UIViewController;

@interface T1DashContentPresenter : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
}

@property (nonatomic, weak) id <T1DashContentPresenterDelegate> delegate;
@property (nonatomic, retain) UIViewController *preparedProfileViewController;

/* instance methods */
- (void)showSettings;
- (void)showAccountSwitcher;
- (void)presentAccountSwitcher;
- (void)presentAccountsViewControllerInTray:(id)tray fallbackHost:(id)host;
- (void)switchAccountTo:(id)to;
- (void)dashDidSettleOpen:(_Bool)open;
- (id)init;

@end

#endif /* T1DashContentPresenter_h */
