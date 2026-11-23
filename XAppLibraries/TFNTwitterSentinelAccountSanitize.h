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
