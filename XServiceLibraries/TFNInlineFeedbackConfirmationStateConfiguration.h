//
#ifndef TFNInlineFeedbackConfirmationStateConfiguration_h
#define TFNInlineFeedbackConfirmationStateConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject;

@interface TFNInlineFeedbackConfirmationStateConfiguration : NSObject <NSCopying> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 affirmationTitle;
    B24@0:8@"NSString"16 negationTitle;
    B24@0:8@"NSString"16 confirmationUpdateCompletionHandler;
}

@property (nonatomic, readonly) long long hash;

/* class methods */
+ (id)defaultMessageWithTitle:(id)title confirmationUpdateCompletionHandler:(id /* block */)handler;
+ (id)customizedMessageWithAffirmationTitle:(id)title negationTitle:(id)title confirmationUpdateCompletionHandler:(id /* block */)handler;

/* instance methods */
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineFeedbackConfirmationStateConfiguration_h */
