//
#ifndef TFSTwitterCompositionNudgeFeedbackPayload_h
#define TFSTwitterCompositionNudgeFeedbackPayload_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterCompositionNudgeFeedbackPayload : NSObject <NSCoding>

@property (readonly, nonatomic) NSString *linkText;
@property (readonly, nonatomic) NSString *heading;
@property (readonly, nonatomic) NSString *subheading;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *ctaOption1;
@property (readonly, nonatomic) NSString *ctaOption2;
@property (readonly, nonatomic) NSString *postFeedbackIconName;
@property (readonly, nonatomic) NSString *postFeedbackText;

/* instance methods */
- (id)initWithModelObjectDictionary:(id)dictionary;
- (id)initWithLinkText:(id)text heading:(id)heading subheading:(id)subheading text:(id)text ctaOption1:(id)option1 ctaOption2:(id)option2 postFeedbackIconName:(id)name postFeedbackText:(id)text;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterCompositionNudgeFeedbackPayload_h */
