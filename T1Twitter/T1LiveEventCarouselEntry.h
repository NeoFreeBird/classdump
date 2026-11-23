//
#ifndef T1LiveEventCarouselEntry_h
#define T1LiveEventCarouselEntry_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface T1LiveEventCarouselEntry : NSObject <NSCopying>

@property (readonly, nonatomic) _Bool eligibleForDocking;
@property (readonly, copy, nonatomic) NSString *entryID;
@property (readonly, nonatomic) _Bool selected;
@property (readonly, nonatomic) long long type;

/* class methods */
+ (id)nextPlayableCarouselEntryAfterIndex:(unsigned long long)index inCarouselEntries:(id)entries;

/* instance methods */
- (_Bool)isEligibleForDocking;
- (id)initWithEntryType:(long long)type entryID:(id)id selected:(_Bool)selected;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (_Bool)isEqualToCarouselEntry:(id)entry;
- (_Bool)isSelected;

@end

#endif /* T1LiveEventCarouselEntry_h */
