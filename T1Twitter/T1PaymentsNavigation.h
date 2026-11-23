//
#ifndef T1PaymentsNavigation_h
#define T1PaymentsNavigation_h
@import Foundation;

@class NSObject;

@interface T1PaymentsNavigation : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *$__lazy_storage_$_userBadger;
}

@property (nonatomic, readonly) _Bool canSeeXPayments;

/* class methods */
+ (id)navigationForAccount:(id)account;

/* instance methods */
- (void)refreshFromPush;
- (id)onScreenPaymentsHomeViewController;
- (id)homeViewControllerWithSource:(id)source urlParams:(id)params;
- (_Bool)shouldAlwaysPushHomeViewControllerWithSource:(id)source;
- (void)handleURL:(id)url universalLinkURL:(id)url viewController:(id)controller completion:(id /* block */)completion;
- (void)handleChallenge:(id)challenge viewController:(id)controller completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1PaymentsNavigation_h */
