//
#ifndef T1AppSplitViewControllerDelegate_Protocol_h
#define T1AppSplitViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AppSplitViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)appSplitViewControllerDashPanelOpenPercentDidChange:(id)change;
- (void)appSplitViewController:(id)controller dashDidSettleOpen:(_Bool)open;
- (id)panelPresentingViewControllerForAppSplitViewController:(id)controller;
- (id)panelPresentingViewControllerForAppSplitViewController:(id)controller;
- (id)contentPresentingViewControllerForAppSplitViewController:(id)controller;
- (id)contentPresentingViewControllerForAppSplitViewController:(id)controller;
- (_Bool)appSplitViewController:(id)controller canPresentDashFromViewController:(id)controller;
- (_Bool)appSplitViewController:(id)controller canPresentDashFromViewController:(id)controller;
- (_Bool)appSplitViewController:(id)controller shouldReceiveTouch:(id)touch;
- (_Bool)appSplitViewController:(id)controller shouldReceiveTouch:(id)touch;
- (_Bool)appSplitViewControllerIsDashBadgeDisplayed:(id)displayed;

@end

#endif /* T1AppSplitViewControllerDelegate_Protocol_h */
