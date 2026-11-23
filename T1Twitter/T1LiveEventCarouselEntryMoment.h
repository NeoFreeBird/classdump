//
#ifndef T1LiveEventCarouselEntryMoment_h
#define T1LiveEventCarouselEntryMoment_h
@import Foundation;

#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventMoment.h"

@interface T1LiveEventCarouselEntryMoment : T1LiveEventCarouselEntry

@property (readonly, copy, nonatomic) T1LiveEventMoment *moment;

/* instance methods */
- (id)initWithEntryID:(id)id selected:(_Bool)selected moment:(id)moment;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (_Bool)isEqualToCarouselEntryMoment:(id)moment;

@end

#endif /* T1LiveEventCarouselEntryMoment_h */
