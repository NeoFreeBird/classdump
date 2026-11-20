//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASClipPlayerDelegate_Protocol_h
#define TASClipPlayerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASClipPlayerDelegate <NSObject>

@required

@property (nonatomic, readonly) long long clipPlayerTranscriptMaxCharCount;

/* required instance methods */
- (void)clipPlayerControllerDidUpdateState:(id)state;
- (void)clipPlayerController:(id)controller didUpdateCaption:(id)caption;
- (void)clipPlayerController:(id)controller didUpdateSpeaker:(id)speaker;
- (void)clipPlayerController:(id)controller didUpdateTimeRemaining:(double)remaining;
- (void)clipPlayerController:(id)controller didUpdateAudioLevel:(id)level;

@optional

@end

#endif /* TASClipPlayerDelegate_Protocol_h */
