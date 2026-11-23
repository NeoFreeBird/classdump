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
