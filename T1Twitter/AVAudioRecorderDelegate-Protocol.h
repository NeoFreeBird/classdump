//
#ifndef AVAudioRecorderDelegate_Protocol_h
#define AVAudioRecorderDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVAudioRecorderDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)audioRecorderDidFinishRecording:(id)recording successfully:(_Bool)successfully;
- (void)audioRecorderEncodeErrorDidOccur:(id)occur error:(id)error;
- (void)audioRecorderBeginInterruption:(id)interruption;
- (void)audioRecorderEndInterruption:(id)interruption withOptions:(unsigned long long)options;
- (void)audioRecorderEndInterruption:(id)interruption withFlags:(unsigned long long)flags;
- (void)audioRecorderEndInterruption:(id)interruption;

@end

#endif /* AVAudioRecorderDelegate_Protocol_h */
