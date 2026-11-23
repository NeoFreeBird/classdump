//
#ifndef T1LiveEventRemindMeViewModel_h
#define T1LiveEventRemindMeViewModel_h
@import Foundation;

#include "T1LiveEventRemindMeViewModelDelegate-Protocol.h"
#include "TFSTwitterAPICommandCancellable-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFSTwitterAPICommand, TFSTwitterLiveEventRemindMeSubscription;

@interface T1LiveEventRemindMeViewModel : NSObject

@property (readonly, nonatomic) NSString *eventID;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFSTwitterAPICommand *subscribeCommand;
@property (retain, nonatomic) id <TFSTwitterAPICommandCancellable> subscribeCancellableCommand;
@property (readonly, nonatomic) TFSTwitterLiveEventRemindMeSubscription *remindMeSubscription;
@property (readonly, copy, nonatomic) NSString *remindMeButtonText;
@property (readonly, nonatomic) _Bool remindMeButtonVisible;
@property (nonatomic) _Bool userSubscribedForRemindMeNotification;
@property (weak, nonatomic) id <T1LiveEventRemindMeViewModelDelegate> delegate;

/* instance methods */
- (id)init;
- (id)initWithLiveEventRemindMeSubscription:(id)subscription eventID:(id)id account:(id)account;
- (void)dealloc;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToLiveEventReminderViewModel:(id)model;
- (_Bool)isRemindMeButtonVisible;
- (_Bool)isUserSubscribedForRemindMeNotification;
- (void)_t1_updateSubscription:(_Bool)subscription;
- (void)_t1_requestNotificationAuthorizationWithCompletionHandler:(id /* block */)handler;
- (void)_t1_callSubscriptionEndpointWithSubscribedForRemindMeNotification:(_Bool)notification commandCompletionBlock:(id /* block */)block;
- (void)_t1_remindMeSubscriptionDidUpdate:(id)update;

@end

#endif /* T1LiveEventRemindMeViewModel_h */
