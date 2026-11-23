//
#ifndef TFNAudiowaveViewModel_Protocol_h
#define TFNAudiowaveViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNAudiowaveViewModel <NSObject>

@required

/* required instance methods */
- (double)duration;
- (void)calculateValues:(out float *)values forNumberOfBars:(unsigned long long)bars;

@optional

@end

#endif /* TFNAudiowaveViewModel_Protocol_h */
