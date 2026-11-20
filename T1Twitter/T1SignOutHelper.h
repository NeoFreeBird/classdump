//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SignOutHelper_h
#define T1SignOutHelper_h
@import Foundation;

@class NSObject;

@interface T1SignOutHelper : NSObject

/* class methods */
+ (void)signOut:(id)out withConfirmationType:(unsigned long long)type source:(long long)source;
+ (void)removePushTokenFromAccount:(id)account completion:(id /* block */)completion;
+ (_Bool)_t1_shouldConfirmLogoutOfAccount:(id)account confirmationType:(unsigned long long)type;
+ (_Bool)_t1_accountHasPendingUndoableCompositions:(id)compositions;
+ (void)confirmLogoutOfAccount:(id)account confirmationType:(unsigned long long)type source:(long long)source didConfirm:(id /* block */)confirm;
+ (void)confirmAndRemove2FAFromAccount:(id)account source:(long long)source completion:(id /* block */)completion;
+ (void)_removeAccount:(id)account source:(long long)source;
+ (void)_presentCannotUnenrollAccount:(id)account source:(long long)source completion:(id /* block */)completion;

@end

#endif /* T1SignOutHelper_h */
