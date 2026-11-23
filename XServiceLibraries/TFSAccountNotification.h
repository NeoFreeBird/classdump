//
#ifndef TFSAccountNotification_h
#define TFSAccountNotification_h
@import Foundation;

@class NSObject;

@interface TFSAccountNotification : NSObject // (Swift)

/* class methods */
+ (id)TFSAccountsSharedTwitterEstablished;
+ (id)TFSAccountsDidChange;
+ (id)TFSAccountDidBecomeActive;
+ (id)TFSAccountDidBecomeInactive;
+ (id)TFSAccountWasRemoved;
+ (id)TFSRecentAccountDidRegister;
+ (id)accountIDKey;
+ (id)accountIDsToUserIDsMappingKey;
+ (id)accountUserIDsKey;

/* instance methods */
- (id)init;

@end

#endif /* TFSAccountNotification_h */
