//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAudioTranscriptionSegmentInternal_h
#define PTVAudioTranscriptionSegmentInternal_h
@import Foundation;

#include "PTVAudioTranscriptionSegment-Protocol.h"

@class NSObject, NSString;

@interface PTVAudioTranscriptionSegmentInternal : NSObject <PTVAudioTranscriptionSegment>

@property (readonly, nonatomic) NSString *substring;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSegment:(id)segment timestampOffset:(double)offset;

@end

#endif /* PTVAudioTranscriptionSegmentInternal_h */
