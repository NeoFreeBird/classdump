//
#ifndef T1LiveEventCarouselEntrySlate_h
#define T1LiveEventCarouselEntrySlate_h
@import Foundation;

#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventSlate.h"

@interface T1LiveEventCarouselEntrySlate : T1LiveEventCarouselEntry

@property (readonly, copy, nonatomic) T1LiveEventSlate *slate;

/* instance methods */
- (id)initWithEntryID:(id)id selected:(_Bool)selected slate:(id)slate;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToCarouselEntrySlate:(id)slate;

@end

#endif /* T1LiveEventCarouselEntrySlate_h */
