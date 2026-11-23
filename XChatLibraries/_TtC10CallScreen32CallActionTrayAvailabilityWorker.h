//
#ifndef _TtC10CallScreen32CallActionTrayAvailabilityWorker_h
#define _TtC10CallScreen32CallActionTrayAvailabilityWorker_h
@import Foundation;

@class CallEngine.CallStream, CallScreen.CallActionTrayAvailabilityStream, CallScreen.CallDebugVisibilityStream, CallScreen.CallParticipantNavigation, _$s11XFoundation13CombineWorkerCN;

@interface CallScreen.CallActionTrayAvailabilityWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallScreen.CallActionTrayAvailabilityStream callActionTrayAvailabilityStream;
    CallScreen.CallDebugVisibilityStream callDebugVisibilityStream;
    CallEngine.CallStream callStream;
    CallScreen.CallParticipantNavigation callParticipantNavigation;
}

@end

#endif /* _TtC10CallScreen32CallActionTrayAvailabilityWorker_h */
