//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsAmplifyCardIdentifier_h
#define TAVAnalyticsAmplifyCardIdentifier_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TAVAnalyticsAmplifyCardIdentifier : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *contentId;
@property (readonly, copy, nonatomic) NSString *vmapUrl;

/* instance methods */
- (id)initWithContentId:(id)id vmapUrl:(id)url;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsAmplifyCardIdentifier_h */
