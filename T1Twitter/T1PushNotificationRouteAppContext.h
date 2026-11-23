//
#ifndef T1PushNotificationRouteAppContext_h
#define T1PushNotificationRouteAppContext_h
@import Foundation;

@class NSObject, TFNTwitterAccount;

@interface T1PushNotificationRouteAppContext : NSObject

@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) TFNTwitterAccount *previousSessionAccount;

/* instance methods */
- (id)initWithContext:(long long)context previousSessionAccount:(id)account;

@end

#endif /* T1PushNotificationRouteAppContext_h */
