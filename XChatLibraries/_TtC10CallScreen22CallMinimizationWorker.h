//
#ifndef _TtC10CallScreen22CallMinimizationWorker_h
#define _TtC10CallScreen22CallMinimizationWorker_h
@import Foundation;

@class CallEngine.Call ?, CallEngine.CallStream, CallScreen.CallMinimizationStream, CallScreen.CallScreenVisibilityStream, _$s11XFoundation13CombineWorkerCN;

@interface CallScreen.CallMinimizationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallScreen.CallMinimizationStream callMinimizationStream;
    CallScreen.CallScreenVisibilityStream callScreenVisibilityStream;
    CallEngine.CallStream callStream;
    CallEngine.Call ? callShownOnCallScreen;
}

@end

#endif /* _TtC10CallScreen22CallMinimizationWorker_h */
