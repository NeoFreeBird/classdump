//
#ifndef TAVVideoContext_h
#define TAVVideoContext_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TAVVideoContext : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSString *videoType;
@property (readonly, nonatomic) _Bool isAd;

/* class methods */
+ (id)contextWithType:(id)type isAd:(_Bool)ad;
+ (id)defaultContext;
+ (id)defaultAdContext;

/* instance methods */
- (id)init;
- (id)initWithVideoType:(id)type isAd:(_Bool)ad;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVVideoContext_h */
