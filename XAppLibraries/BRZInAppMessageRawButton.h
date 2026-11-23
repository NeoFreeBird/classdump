//
#ifndef BRZInAppMessageRawButton_h
#define BRZInAppMessageRawButton_h
@import Foundation;

#include "BRZInAppMessageRawColor.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject, NSString, NSURL;

@interface BRZInAppMessageRawButton : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _id;
}

@property (nonatomic) long long clickAction;
@property (nonatomic) long long identifier;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) _Bool useWebView;
@property (nonatomic, retain) BRZInAppMessageRawColor *textColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *backgroundColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *borderColor;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithId:(long long)id text:(id)text clickAction:(long long)action url:(id)url useWebView:(_Bool)view;
- (id)initWithId:(long long)id text:(id)text clickAction:(long long)action url:(id)url useWebView:(_Bool)view textColor:(id)color backgroundColor:(id)color borderColor:(id)color;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* BRZInAppMessageRawButton_h */
