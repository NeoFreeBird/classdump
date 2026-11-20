//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAudioTranscription_Protocol_h
#define PTVAudioTranscription_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol PTVAudioTranscription <NSObject>

@required

@property (readonly, nonatomic) NSArray *segments;

@optional

@end

#endif /* PTVAudioTranscription_Protocol_h */
