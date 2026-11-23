//
#ifndef TLabsAudioProcessorDelegate_Protocol_h
#define TLabsAudioProcessorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLabsAudioProcessorDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)tlabsAudioStream:(unsigned int)stream audioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x10; unsigned int x1; void *x2; } x[1]; } *)list asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })asbd;
- (void)tlabsAudioStreamDidReceiveAudioBufferPeak:(id)peak;

@end

#endif /* TLabsAudioProcessorDelegate_Protocol_h */
