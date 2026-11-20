//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GrokTranslationError_h
#define GrokTranslationError_h
@import Foundation;

@class NSObject, NSString;

@interface GrokTranslationError : NSObject // (Swift)

@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSString *message;

/* class methods */
+ (id)emptyTranslationError;
+ (id)translationErrorKey;

/* instance methods */
- (id)initWithCode:(long long)code message:(id)message;
- (id)init;

@end

#endif /* GrokTranslationError_h */
