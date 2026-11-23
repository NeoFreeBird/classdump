//
#ifndef TFSTwitterLiveEvent_Cards_h
#define TFSTwitterLiveEvent_Cards_h
@import Foundation;

@interface TFSTwitterLiveEvent (Cards)

/* class methods */
+ (id)scribeEventDetailsWithEventID:(id)id remindMeSubscription:(id)subscription;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (id)initWithCardData:(id)data;
- (id)_tfn_remindMeSubscriptionWithNotificationID:(id)id enabled:(id)enabled subscribed:(id)subscribed;
- (id)_tfn_sponsershipDetailsWithSponsorName:(id)name;
- (void)storeInCardsCacheWithCardContext:(id)context;

@end

#endif /* TFSTwitterLiveEvent_Cards_h */
