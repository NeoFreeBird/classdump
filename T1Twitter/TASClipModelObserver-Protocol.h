//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASClipModelObserver_Protocol_h
#define TASClipModelObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TASClipModelObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)clipModelDidUpdateState:(id)state from:(long long)from;
- (void)clipModel:(id)model didReceiveClosedCaptionText:(id)text isTranscriptionFinal:(_Bool)final language:(id)language deliveryDate:(id)date fromUser:(id)user;
- (void)clipModel:(id)model didUpdateTranscription:(id)transcription;
- (void)clipModel:(id)model didUpdatePlayback:(id)playback;
- (void)clipModelDidUpdateAudioLevels:(id)levels;

@end

#endif /* TASClipModelObserver_Protocol_h */
