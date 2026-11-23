//
#ifndef BRZNotifications_h
#define BRZNotifications_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSData, NSObject;

@interface BRZNotifications : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift __deviceToken;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift viewStore;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift date;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _subscribers;
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
