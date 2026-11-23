//
#ifndef _TtC41TwitterNotificationsFeatureImplementation41TwitterNotificationsFeatureImplementation_h
#define _TtC41TwitterNotificationsFeatureImplementation41TwitterNotificationsFeatureImplementation_h
@import Foundation;

#include "TFSTwitterFeature-Protocol.h"

@class NSString, _$sSS, _TtCs12_SwiftObject;

@interface TwitterNotificationsFeatureImplementation.TwitterNotificationsFeatureImplementation : Swift._SwiftObject <TFSTwitterFeature> // (Swift)

@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (void)removedAccountWithAccountID:(id)id;
- (id)accountScopedFeatureWithAccountContext:(id)context;

@end

#endif /* _TtC41TwitterNotificationsFeatureImplementation41TwitterNotificationsFeatureImplementation_h */
