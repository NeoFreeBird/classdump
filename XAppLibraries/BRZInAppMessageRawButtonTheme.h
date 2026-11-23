//
#ifndef BRZInAppMessageRawButtonTheme_h
#define BRZInAppMessageRawButtonTheme_h
@import Foundation;

#include "BRZInAppMessageRawColor.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSObject;

@interface BRZInAppMessageRawButtonTheme : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
}

@property (nonatomic, retain) BRZInAppMessageRawColor *textColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *borderColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *backgroundColor;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)defaultLight;
+ (id)defaultDark;

/* instance methods */
- (id)init;
- (_Bool)isEqual:(id)equal;

@end

#endif /* BRZInAppMessageRawButtonTheme_h */
