//
#ifndef BRZInAppMessageRaw_h
#define BRZInAppMessageRaw_h
@import Foundation;

#include "BRZInAppMessageContext.h"
#include "BRZInAppMessageRawColor.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSArray, NSDictionary, NSObject, NSString, NSURL;

@interface BRZInAppMessageRaw : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _id;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _codableExtras;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _codableMessageFields;
}

@property (nonatomic) _Bool _compat_hideChevron;
@property (nonatomic) long long _compat_overrideUserInterfaceStyle;
@property (nonatomic) long long type;
@property (nonatomic) long long clickAction;
@property (nonatomic) long long messageClose;
@property (nonatomic) long long orientation;
@property (nonatomic) long long messageTextAlignment;
@property (nonatomic) long long headerTextAlignment;
@property (nonatomic) double duration;
@property (nonatomic) long long imageStyle;
@property (nonatomic) long long slideFrom;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) _Bool useWebView;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSString *header;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *imageAltText;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSDictionary *themes;
@property (nonatomic, retain) BRZInAppMessageRawColor *textColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *headerTextColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *iconColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *iconBackgroundColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *backgroundColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *frameColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *closeButtonColor;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic) _Bool animateIn;
@property (nonatomic) _Bool animateOut;
@property (nonatomic, copy) NSDictionary *extras;
@property (nonatomic, copy) NSString *messageExtras;
@property (nonatomic, copy) NSURL *baseURL;
@property (nonatomic, copy) NSArray *assetURLs;
@property (nonatomic) _Bool isControl;
@property (nonatomic, readonly) _Bool isTestSend;
@property (nonatomic, copy) NSDictionary *messageFields;
@property (nonatomic, retain) BRZInAppMessageContext *context;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)decodingWithJson:(id)json;

/* instance methods */
- (void)logImpressionUsing:(id)_using;
- (void)logClickWithButtonId:(id)id using:(id)_using;
- (id)json;
- (id)init;
- (_Bool)isEqual:(id)equal;

@end

#endif /* BRZInAppMessageRaw_h */
