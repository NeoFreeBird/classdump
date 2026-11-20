//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
