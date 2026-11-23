//
#ifndef TAVAnalyticsPromotedMetadata_h
#define TAVAnalyticsPromotedMetadata_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TAVAnalyticsPromotedMetadata : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSString *impressionID;
@property (readonly, nonatomic) _Bool isEarned;

/* instance methods */
- (id)init;
- (id)initWithImpressionID:(id)id isEarned:(_Bool)earned;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsPromotedMetadata_h */
