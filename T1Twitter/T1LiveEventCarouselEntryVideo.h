//
#ifndef T1LiveEventCarouselEntryVideo_h
#define T1LiveEventCarouselEntryVideo_h
@import Foundation;

#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventSlate.h"

@class TFNTwitterStatus, TFSTwitterLiveEventCarouselEntrySocialProof;

@interface T1LiveEventCarouselEntryVideo : T1LiveEventCarouselEntry

@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (readonly, copy, nonatomic) T1LiveEventSlate *fallbackSlate;
@property (readonly, copy, nonatomic) TFSTwitterLiveEventCarouselEntrySocialProof *socialProof;

/* instance methods */
- (_Bool)isEligibleForDocking;
- (id)initWithEntryID:(id)id selected:(_Bool)selected status:(id)status fallbackSlate:(id)slate socialProof:(id)proof;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToCarouselEntryVideo:(id)video;

@end

#endif /* T1LiveEventCarouselEntryVideo_h */
