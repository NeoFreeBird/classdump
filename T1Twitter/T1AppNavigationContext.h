//
#ifndef T1AppNavigationContext_h
#define T1AppNavigationContext_h
@import Foundation;

@class NSObject, NSString, TFNTwitterUser, TFSTwitterScribeContext, TFSTwitterUserReference, _TtC20TwitterNotifications33TFSTwitterPushNotificationPayload;

@interface T1AppNavigationContext : NSObject

@property (readonly, nonatomic) long long navigationContextType;
@property (readonly, nonatomic) TFSTwitterUserReference *relatedUserReference;
@property (readonly, nonatomic) TFNTwitterUser *relatedUser;
@property (readonly, copy, nonatomic) NSString *relatedText;
@property (readonly, nonatomic) TwitterNotifications.TFSTwitterPushNotificationPayload *pushPayload;
@property (retain, nonatomic) TFSTwitterScribeContext *sourceScribeContext;

/* instance methods */
- (id)init;
- (id)initWithNavigationContextType:(long long)type;
- (id)initWithNavigationContextType:(long long)type pushPayload:(id)payload;
- (id)initWithNavigationContextType:(long long)type relatedUserReference:(id)reference relatedUser:(id)user pushPayload:(id)payload;
- (id)initWithNavigationContextType:(long long)type relatedStatusID:(long long)id pushPayload:(id)payload;
- (id)initWithNavigationContextType:(long long)type relatedText:(id)text pushPayload:(id)payload;
- (id)initWithNavigationContextType:(long long)type relatedUserReference:(id)reference relatedUser:(id)user relatedStatusID:(long long)id relatedText:(id)text pushPayload:(id)payload;

@end

#endif /* T1AppNavigationContext_h */
