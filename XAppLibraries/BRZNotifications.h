//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZNotifications_h
#define BRZNotifications_h
@import Foundation;

@class Chat.DidEndCall, NSData, NSObject;

@interface BRZNotifications : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall __deviceToken;
    oneway _Atomic Chat.DidEndCall viewStore;
    oneway _Atomic Chat.DidEndCall date;
    oneway _Atomic Chat.DidEndCall _subscribers;
}

@property (nonatomic, readonly) NSData *deviceToken;

/* class methods */
+ (id)categories;
+ (void)setCategories:(id)categories;
+ (_Bool)isBrazeNotification:(id)notification;
+ (_Bool)isInternalNotification:(id)notification;

/* instance methods */
- (void)registerDeviceToken:(id)token;
- (id)subscribeToUpdatesWithPayloadTypes:(id)types update:(id /* block */)update;
- (id)subscribeToUpdates:(id /* block */)updates;
- (_Bool)handleBackgroundNotificationWithUserInfo:(id)info fetchCompletionHandler:(id /* block */)handler;
- (void)handleForegroundNotificationWithNotification:(id)notification;
- (_Bool)handleUserNotificationWithResponse:(id)response withCompletionHandler:(id /* block */)handler;
- (id)init;

@end

#endif /* BRZNotifications_h */
