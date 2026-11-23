//
#ifndef T1LiveEventMoment_h
#define T1LiveEventMoment_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface T1LiveEventMoment : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *momentID;

/* instance methods */
- (id)initWithMomentID:(id)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (_Bool)isEqualToMoment:(id)moment;

@end

#endif /* T1LiveEventMoment_h */
