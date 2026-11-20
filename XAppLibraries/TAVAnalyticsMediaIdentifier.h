//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsMediaIdentifier_h
#define TAVAnalyticsMediaIdentifier_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TAVAnalyticsAmplifyCardIdentifier.h"
#include "TAVAnalyticsMediaPlatformIdentifier.h"

@class NSObject;

@interface TAVAnalyticsMediaIdentifier : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) TAVAnalyticsMediaPlatformIdentifier *mediaPlatformIdentifier;
@property (readonly, copy, nonatomic) TAVAnalyticsAmplifyCardIdentifier *amplifyCardIdentifier;
@property (readonly, nonatomic) _Bool isScrubbed;

/* class methods */
+ (id)scrubbedMediaIdentifier;

/* instance methods */
- (id)initAsScrubbedMediaIdentifier;
- (id)initWithMediaPlatformIdentifier:(id)identifier;
- (id)initWithAmplifyCardIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsMediaIdentifier_h */
