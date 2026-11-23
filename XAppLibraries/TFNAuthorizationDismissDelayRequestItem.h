//
#ifndef TFNAuthorizationDismissDelayRequestItem_h
#define TFNAuthorizationDismissDelayRequestItem_h
@import Foundation;

#include "TSARequestItem-Protocol.h"
#include "TSAUsageDescription.h"

@class NSObject, NSString;

@interface TFNAuthorizationDismissDelayRequestItem : NSObject <TSARequestItem> {
    /* instance variables */
    id <TSARequestItem> _item;
}

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) long long serviceType;
@property (readonly, nonatomic) TSAUsageDescription *usageDescription;
@property (readonly, nonatomic) long long requestCount;
@property (readonly, nonatomic) long long requestSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequestItem:(id)item;
- (void)notNow:(id)now;
- (void)never:(id)never;
- (void)accept:(id)accept;
- (void)acceptWithoutPresentation:(id)presentation;
- (void)private_performAfterDismissDelay:(id /* block */)delay;

@end

#endif /* TFNAuthorizationDismissDelayRequestItem_h */
