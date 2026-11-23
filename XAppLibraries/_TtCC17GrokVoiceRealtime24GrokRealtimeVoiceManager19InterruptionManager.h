//
#ifndef _TtCC17GrokVoiceRealtime24GrokRealtimeVoiceManager19InterruptionManager_h
#define _TtCC17GrokVoiceRealtime24GrokRealtimeVoiceManager19InterruptionManager_h
@import Foundation;

@class GrokVoiceRealtime.InterruptionManagerDelegate ?, _$s7Combine19CurrentValueSubjectCMn _$sSaySS _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySb _$ss5NeverOMn, _$sSD -> _$s10Foundation4UUIDVMn GrokVoiceRealtime.GrokRealtimeVoiceManager.InterruptionToken, _TtCs12_SwiftObject;

@interface GrokVoiceRealtime.GrokRealtimeVoiceManager.InterruptionManager : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isMicrophoneMuted;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Bool nominal type descriptor for Swift.Never isSpeakerMuted;
    GrokVoiceRealtime.InterruptionManagerDelegate ? delegate;
    Swift.Dictionary -> nominal type descriptor for Foundation.UUID GrokVoiceRealtime.GrokRealtimeVoiceManager.InterruptionToken tokens;
    nominal type descriptor for Combine.CurrentValueSubject Swift.Array empty-list Swift.String nominal type descriptor for Swift.Never activeTokenLabelsChanged;
}

@end

#endif /* _TtCC17GrokVoiceRealtime24GrokRealtimeVoiceManager19InterruptionManager_h */
