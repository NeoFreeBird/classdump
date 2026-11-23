//
#ifndef TASSpacesTrayPresenter_h
#define TASSpacesTrayPresenter_h
@import Foundation;

@class NSObject;

@interface TASSpacesTrayPresenter : NSObject // (Swift)

/* class methods */
+ (void)reloadFooterForViewController:(id)controller;
+ (void)popToRootOfTrayContainingViewController:(id)controller animated:(_Bool)animated;
+ (void)presentViewController:(id)controller fromViewController:(id)controller embedInNavigationController:(_Bool)controller expandable:(_Bool)expandable prefersFullScreen:(_Bool)screen slideoverContentExtendsBelowHandle:(_Bool)handle navigationBarHidden:(_Bool)hidden;

/* instance methods */
- (id)init;

@end

#endif /* TASSpacesTrayPresenter_h */
