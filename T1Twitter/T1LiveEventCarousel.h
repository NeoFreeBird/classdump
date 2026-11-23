//
#ifndef T1LiveEventCarousel_h
#define T1LiveEventCarousel_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "T1LiveEventCarouselEntry.h"

@class NSArray, NSObject;

@interface T1LiveEventCarousel : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *entries;
@property (readonly, copy, nonatomic) T1LiveEventCarouselEntry *selectedEntry;
@property (readonly, copy, nonatomic) T1LiveEventCarouselEntry *selectedOrFirstEntry;

/* instance methods */
- (id)init;
- (id)initWithEntries:(id)entries;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToCarousel:(id)carousel;

@end

#endif /* T1LiveEventCarousel_h */
