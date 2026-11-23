//
#ifndef AVAudioPlayerDelegate_Protocol_h
#define AVAudioPlayerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol AVAudioPlayerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)audioPlayerDidFinishPlaying:(id)playing successfully:(_Bool)successfully;
- (void)audioPlayerDecodeErrorDidOccur:(id)occur error:(id)error;
- (void)audioPlayerBeginInterruption:(id)interruption;
- (void)audioPlayerEndInterruption:(id)interruption withOptions:(unsigned long long)options;
- (void)audioPlayerEndInterruption:(id)interruption withFlags:(unsigned long long)flags;
- (void)audioPlayerEndInterruption:(id)interruption;

@end

#endif /* AVAudioPlayerDelegate_Protocol_h */
