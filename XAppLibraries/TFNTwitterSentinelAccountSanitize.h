//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterSentinelAccountSanitize_h
#define TFNTwitterSentinelAccountSanitize_h
@import Foundation;

@class NSObject;

@interface TFNTwitterSentinelAccountSanitize : NSObject

@property (readonly, nonatomic) long long sentinelType;
@property (readonly, copy, nonatomic) id /* block */ sanitizeBlock;

/* instance methods */
- (id)initWithSentinelType:(long long)type sanitizeBlock:(id /* block */)block;

@end

#endif /* TFNTwitterSentinelAccountSanitize_h */
