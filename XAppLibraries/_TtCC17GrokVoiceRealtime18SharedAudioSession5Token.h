//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtCC17GrokVoiceRealtime18SharedAudioSession5Token_h
#define _TtCC17GrokVoiceRealtime18SharedAudioSession5Token_h
@import Foundation;

@class GrokVoiceRealtime.SharedAudioSession ?, GrokVoiceRealtime.SharedAudioSession.Category, NSObject, Swift.Bool, _$sSS, _$sSbSg, _$sSo6NSLockC;

@interface GrokVoiceRealtime.SharedAudioSession.Token : NSObject { // (Swift)
    /* instance variables */
    GrokVoiceRealtime.SharedAudioSession.Category category;
    Swift.Bool? mixWithOthers;
    Swift.Bool wantsActive;
    Swift.String label;
    Swift.Bool isInvalidated;
    __C.NSLock invalidationLock;
    GrokVoiceRealtime.SharedAudioSession ? owner;
}

/* instance methods */
- (void)dealloc;
- (id)init;

@end

#endif /* _TtCC17GrokVoiceRealtime18SharedAudioSession5Token_h */
