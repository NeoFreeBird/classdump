//
#ifndef _TtC18TwitterAudiospacesP33_48F13B9BF2247105515D2385A52BACE726PlaybackAudiowaveViewModel_h
#define _TtC18TwitterAudiospacesP33_48F13B9BF2247105515D2385A52BACE726PlaybackAudiowaveViewModel_h
@import Foundation;

#include "TFNAudiowaveViewModel-Protocol.h"

@class NSObject;

@interface TwitterAudiospaces.(PlaybackAudiowaveViewModel in _48F13B9BF2247105515D2385A52BACE7) : NSObject <TFNAudiowaveViewModel> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 audioLevel;
    @40@0:8:16@24@32 isReduceMotionSettingEnabled;
    @40@0:8:16@24@32 tic;
}

/* instance methods */
- (double)duration;
- (void)calculateValues:(float *)values forNumberOfBars:(unsigned long long)bars;
- (id)init;

@end

#endif /* _TtC18TwitterAudiospacesP33_48F13B9BF2247105515D2385A52BACE726PlaybackAudiowaveViewModel_h */
