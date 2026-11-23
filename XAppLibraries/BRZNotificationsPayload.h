//
#ifndef BRZNotificationsPayload_h
#define BRZNotificationsPayload_h
@import Foundation;

#include "BRZURLContext.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSDate, NSDictionary, NSNumber, NSObject, NSString, UIScene;

@interface BRZNotificationsPayload : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift payload;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSNumber *badge;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) BRZURLContext *urlContext;
@property (nonatomic, readonly) NSString *actionIdentifier;
@property (nonatomic, readonly) _Bool isSilent;
@property (nonatomic, readonly) _Bool isInternal;
@property (nonatomic, readonly) UIScene *targetScene;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithUserInfo:(id)info type:(long long)type silent:(_Bool)silent;
- (id)json;
- (id)userInfoJSON;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* BRZNotificationsPayload_h */
