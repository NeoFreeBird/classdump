//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
