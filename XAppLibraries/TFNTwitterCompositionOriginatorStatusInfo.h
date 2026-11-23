//
#ifndef TFNTwitterCompositionOriginatorStatusInfo_h
#define TFNTwitterCompositionOriginatorStatusInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterCompositionOriginatorStatusInfo : NSObject <NSCoding>

@property (readonly, nonatomic) _Bool earned;
@property (readonly, copy, nonatomic) NSString *promotedContentImpressionID;

/* class methods */
+ (id)originatorStatusInfoWithStatus:(id)status;

/* instance methods */
- (id)init;
- (id)initWithEarned:(_Bool)earned promotedContentImpressionID:(id)id;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)isEqual:(id)equal;
- (id)description;

@end

#endif /* TFNTwitterCompositionOriginatorStatusInfo_h */
