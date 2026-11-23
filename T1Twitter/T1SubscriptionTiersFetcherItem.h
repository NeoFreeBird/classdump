//
#ifndef T1SubscriptionTiersFetcherItem_h
#define T1SubscriptionTiersFetcherItem_h
@import Foundation;

@class NSObject;

@interface T1SubscriptionTiersFetcherItem : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *subscriptionStateManager;
    NSNumber"16@0:8 *completions;
    NSNumber"16@0:8 *subscription;
    NSNumber"16@0:8 *allSubscriptions;
    NSNumber"16@0:8 *error;
    NSNumber"16@0:8 *isLoading;
}

/* instance methods */
- (id)initWithSubscriptionStateManager:(id)manager;
- (void)isStripeSubscriptionFromiOSWithCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1SubscriptionTiersFetcherItem_h */
