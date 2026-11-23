//
#ifndef HUIRateLimitUserActionPresenter_h
#define HUIRateLimitUserActionPresenter_h
@import Foundation;

@class NSObject;

@interface HUIRateLimitUserActionPresenter : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 $__lazy_storage_$_message;
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 learnMoreLink;
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 title;
}

/* class methods */
+ (void)presentIfNeededFrom:(id)from title:(id)title error:(id)error account:(id)account completion:(id /* block */)completion;
+ (void)presentIfNeededFrom:(id)from title:(id)title account:(id)account error:(id)error delegate:(id)delegate completion:(id /* block */)completion;

/* instance methods */
- (void)displayAlertControllerFrom:(id)from delegate:(id)delegate completion:(id /* block */)completion;
- (id)init;

@end

#endif /* HUIRateLimitUserActionPresenter_h */
