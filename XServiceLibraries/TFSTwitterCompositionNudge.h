//
#ifndef TFSTwitterCompositionNudge_h
#define TFSTwitterCompositionNudge_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TFSTwitterCompositionNudgeFeedbackPayload.h"

@class NSObject, NSString;

@interface TFSTwitterCompositionNudge : NSObject <NSCoding>

@property (readonly, nonatomic) NSString *heading;
@property (readonly, nonatomic) NSString *subheading;
@property (readonly, nonatomic) NSString *iconName;
@property (readonly, nonatomic) TFSTwitterCompositionNudgeFeedbackPayload *feedbackPayload;

/* instance methods */
- (id)initWithModelObjectDictionary:(id)dictionary;
- (id)initWithHeading:(id)heading subheading:(id)subheading iconName:(id)name feedbackPayload:(id)payload;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;

@end

#endif /* TFSTwitterCompositionNudge_h */
