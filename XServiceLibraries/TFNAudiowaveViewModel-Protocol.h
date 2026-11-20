//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
