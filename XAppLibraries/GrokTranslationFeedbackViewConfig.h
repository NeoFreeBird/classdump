//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokTranslationFeedbackViewConfig_h
#define GrokTranslationFeedbackViewConfig_h
@import Foundation;

@class NSObject;

@interface GrokTranslationFeedbackViewConfig : NSObject // (Swift)

@property (nonatomic, readonly) _Bool isHapticFeedbackEnabled;

/* instance methods */
- (id)initWithIsHapticFeedbackEnabled:(_Bool)enabled;
- (id)init;

@end

#endif /* GrokTranslationFeedbackViewConfig_h */
