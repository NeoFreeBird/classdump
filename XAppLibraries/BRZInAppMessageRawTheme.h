//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZInAppMessageRawTheme_h
#define BRZInAppMessageRawTheme_h
@import Foundation;

#include "BRZInAppMessageRawColor.h"

@class Chat.DidEndCall, NSArray, NSObject;

@interface BRZInAppMessageRawTheme : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall lock;
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
