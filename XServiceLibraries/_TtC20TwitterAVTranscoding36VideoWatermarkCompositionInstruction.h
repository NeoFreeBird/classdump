//
#ifndef _TtC20TwitterAVTranscoding36VideoWatermarkCompositionInstruction_h
#define _TtC20TwitterAVTranscoding36VideoWatermarkCompositionInstruction_h
@import Foundation;

#include "AVVideoCompositionInstruction-Protocol.h"

@class NSArray, NSObject, Swift.Bool, TwitterAVTranscoding.VideoWatermarkLayout, _$sSaySo7NSValueCGSg, _$ss5Int32VMn, __C.CMTimeRange;

@interface TwitterAVTranscoding.VideoWatermarkCompositionInstruction : NSObject <AVVideoCompositionInstruction> { // (Swift)
    /* instance variables */
    nominal type descriptor for Swift.Int32 sourceTrackID;
    TwitterAVTranscoding.VideoWatermarkLayout layout;
}

@property (nonatomic, readonly) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (nonatomic, readonly) _Bool enablePostProcessing;
@property (nonatomic, readonly) _Bool containsTweening;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) int passthroughTrackID;

/* instance methods */
- (id)init;

@end

#endif /* _TtC20TwitterAVTranscoding36VideoWatermarkCompositionInstruction_h */
