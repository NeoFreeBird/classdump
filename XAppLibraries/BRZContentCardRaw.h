//
#ifndef BRZContentCardRaw_h
#define BRZContentCardRaw_h
@import Foundation;

#include "BRZContentCardContext.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSDictionary, NSObject, NSString, NSURL;

@interface BRZContentCardRaw : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _id;
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift _codableExtras;
}

@property (nonatomic) long long type;
@property (nonatomic) double imageAspectRatio;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSURL *image;
@property (nonatomic, copy) NSString *imageAltText;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *cardDescription;
@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSURL *url;
@property (nonatomic) _Bool useWebView;
@property (nonatomic, copy) NSDictionary *extras;
@property (nonatomic) _Bool viewed;
@property (nonatomic) _Bool dismissible;
@property (nonatomic) _Bool removed;
@property (nonatomic) _Bool pinned;
@property (nonatomic) _Bool clicked;
@property (nonatomic) _Bool test;
@property (nonatomic) double createdAt;
@property (nonatomic) double expiresAt;
@property (nonatomic, retain) BRZContentCardContext *context;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)fromJson:(id)json;
+ (id)decodingWithJson:(id)json;

/* instance methods */
- (void)logImpressionUsing:(id)_using;
- (void)logClickUsing:(id)_using;
- (void)logDismissedUsing:(id)_using;
- (id)json;
- (id)init;
- (_Bool)isEqual:(id)equal;

@end

#endif /* BRZContentCardRaw_h */
