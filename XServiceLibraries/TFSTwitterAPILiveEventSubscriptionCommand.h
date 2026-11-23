//
#ifndef TFSTwitterAPILiveEventSubscriptionCommand_h
#define TFSTwitterAPILiveEventSubscriptionCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@class NSString;

@interface TFSTwitterAPILiveEventSubscriptionCommand : TFSTwitterAPICommandWithResponseModelBuilder

@property (copy, nonatomic) NSString *eventID;
@property (nonatomic) _Bool remindMe;
@property (copy, nonatomic) NSString *notificationID;

/* instance methods */
- (id)initWithAccountID:(id)id eventID:(id)id remindMe:(_Bool)me notificationID:(id)id context:(id)context source:(unsigned long long)source responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPILiveEventSubscriptionCommand_h */
