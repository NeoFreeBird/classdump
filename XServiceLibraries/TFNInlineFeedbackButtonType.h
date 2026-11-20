//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNInlineFeedbackButtonType_h
#define TFNInlineFeedbackButtonType_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNInlineFeedbackButtonType : NSObject <NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 formatType;
    B24@0:8@"NSString"16 affirmationText;
    B24@0:8@"NSString"16 negationText;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)checkmark;
+ (id)thumbs;
+ (id)textWithAffirmation:(id)affirmation negation:(id)negation;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineFeedbackButtonType_h */
