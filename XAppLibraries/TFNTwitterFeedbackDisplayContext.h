//
#ifndef TFNTwitterFeedbackDisplayContext_h
#define TFNTwitterFeedbackDisplayContext_h
@import Foundation;

@class NSObject, NSString;

@interface TFNTwitterFeedbackDisplayContext : NSObject

@property (readonly, nonatomic) NSString *reason;

/* instance methods */
- (id)initWithReason:(id)reason;

@end

#endif /* TFNTwitterFeedbackDisplayContext_h */
