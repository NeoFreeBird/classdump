//
#ifndef TVDIAnalyticsOwnerIdentifier_h
#define TVDIAnalyticsOwnerIdentifier_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSNumber, NSObject, NSString;

@interface TVDIAnalyticsOwnerIdentifier : NSObject <NSCopying, NSCoding>

@property (readonly, copy, nonatomic) NSNumber *identifier;
@property (readonly, copy, nonatomic) NSString *periscopeIdentifier;
@property (readonly, nonatomic) _Bool isScrubbed;
@property (readonly, nonatomic) _Bool isUnknown;

/* class methods */
+ (id)scrubbedIdentifier;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (id)initWithPeriscopeIdentifier:(id)identifier;
- (id)initWithIdentifier:(id)identifier periscopeIdentifier:(id)identifier;
- (id)initAsScrubbedIdentifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TVDIAnalyticsOwnerIdentifier_h */
