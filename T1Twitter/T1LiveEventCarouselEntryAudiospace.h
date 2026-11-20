//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveEventCarouselEntryAudiospace_h
#define T1LiveEventCarouselEntryAudiospace_h
@import Foundation;

#include "T1LiveEventCarouselEntry.h"
#include "T1LiveEventSlate.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class TFSTwitterAudiospace, TFSTwitterLiveEventCarouselEntrySocialProof;

@interface T1LiveEventCarouselEntryAudiospace : T1LiveEventCarouselEntry

@property (readonly, nonatomic) TFSTwitterAudiospace *audiospace;
@property (readonly, nonatomic) T1LiveEventSlate *fallbackSlate;
@property (readonly, nonatomic) TFSTwitterLiveEventCarouselEntrySocialProof *socialProof;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> creatorTwitterUser;

/* instance methods */
- (id)initWithEntryID:(id)id selected:(_Bool)selected audiospace:(id)audiospace fallbackSlate:(id)slate socialProof:(id)proof creatorTwitterUser:(id)user;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)_t1_isEqualToCarouselEntryAudiospace:(id)audiospace;

@end

#endif /* T1LiveEventCarouselEntryAudiospace_h */
