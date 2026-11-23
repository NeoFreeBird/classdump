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
