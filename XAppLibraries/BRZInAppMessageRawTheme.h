//
#ifndef BRZInAppMessageRawTheme_h
#define BRZInAppMessageRawTheme_h
@import Foundation;

#include "BRZInAppMessageRawColor.h"

@class /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift, NSArray, NSObject;

@interface BRZInAppMessageRawTheme : NSObject { // (Swift)
    /* instance variables */
    /usr/local/jenkins/workspace/twitter-ios-build/Frameworks/XAppLibraries/AVChat/Sources/AVChat/AVChatUtils.swift lock;
}

@property (nonatomic, retain) BRZInAppMessageRawColor *backgroundColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *textColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *iconColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *iconBackgroundColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *headerTextColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *closeButtonColor;
@property (nonatomic, retain) BRZInAppMessageRawColor *frameColor;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)defaultLight;
+ (id)defaultDark;

/* instance methods */
- (id)init;
- (_Bool)isEqual:(id)equal;

@end

#endif /* BRZInAppMessageRawTheme_h */
