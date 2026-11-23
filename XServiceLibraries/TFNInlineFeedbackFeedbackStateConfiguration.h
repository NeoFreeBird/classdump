//
#ifndef TFNInlineFeedbackFeedbackStateConfiguration_h
#define TFNInlineFeedbackFeedbackStateConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNInlineFeedbackButtonType.h"

@class NSObject, NSString;

@interface TFNInlineFeedbackFeedbackStateConfiguration : NSObject <NSCopying> // (Swift)

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) TFNInlineFeedbackButtonType *buttonType;
@property (nonatomic, copy) id /* block */ feedbackUpdateHandler;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)initWithTitle:(id)title subtitle:(id)subtitle buttonType:(id)type feedbackUpdateHandler:(id /* block */)handler;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFNInlineFeedbackFeedbackStateConfiguration_h */
