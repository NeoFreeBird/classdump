//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17GrokVoiceRealtime25TranscriptionDeltaTracker_h
#define _TtC17GrokVoiceRealtime25TranscriptionDeltaTracker_h
@import Foundation;

@class _$sSSSg, _$sSaySSG, _$sSaySdG, _$sSd, _$sSi, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.TranscriptionDeltaTracker : Swift._SwiftObject { // (Swift)
    /* instance variables */
    [Swift.String] deltas;
    [Swift.Double] durations;
    Swift.Int transcriptionCount;
    Swift.String? currentRid;
    [Swift.String] rids;
    Swift.Double lastStartTime;
}

@end

#endif /* _TtC17GrokVoiceRealtime25TranscriptionDeltaTracker_h */
