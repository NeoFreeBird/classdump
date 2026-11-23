//
#ifndef BRZConfigurationPushAutomation_h
#define BRZConfigurationPushAutomation_h
@import Foundation;

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZConfigurationPushAutomation : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
}

@property (nonatomic) _Bool automaticSetup;
@property (nonatomic) _Bool requestAuthorizationAtLaunch;
@property (nonatomic) unsigned long long authorizationOptions;
@property (nonatomic) unsigned long long foregroundPresentationOptions;
@property (nonatomic) _Bool setNotificationCategories;
@property (nonatomic) _Bool registerDeviceToken;
@property (nonatomic) _Bool handleBackgroundNotification;
@property (nonatomic) _Bool handleNotificationResponse;
@property (nonatomic) _Bool willPresentNotification;
@property (nonatomic, readonly) _Bool automationEnabled;

/* class methods */
+ (unsigned long long)defaultForegroundPresentationOptions;

/* instance methods */
- (id)initWithAutomaticSetup:(_Bool)setup requestAuthorizationAtLaunch:(_Bool)launch authorizationOptions:(unsigned long long)options foregroundPresentationOptions:(unsigned long long)options setNotificationCategories:(_Bool)categories registerDeviceToken:(_Bool)token handleBackgroundNotification:(_Bool)notification handleNotificationResponse:(_Bool)response willPresentNotification:(_Bool)notification;
- (id)initEnablingAllAutomations:(_Bool)automations;
- (id)init;

@end

#endif /* BRZConfigurationPushAutomation_h */
