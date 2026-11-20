//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAudioTranscriptionSegment_Protocol_h
#define PTVAudioTranscriptionSegment_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol PTVAudioTranscriptionSegment <NSObject>

@required

@property (readonly, nonatomic) NSString *substring;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double duration;

@optional

@end

#endif /* PTVAudioTranscriptionSegment_Protocol_h */
