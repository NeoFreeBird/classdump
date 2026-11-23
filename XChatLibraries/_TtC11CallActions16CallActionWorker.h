//
#ifndef _TtC11CallActions16CallActionWorker_h
#define _TtC11CallActions16CallActionWorker_h
@import Foundation;

@class CallEngine.CallActionTriggerStream, CallEngine.CallStarter, CallEngine.CallStream, CallScreen.CallScreenPresentationRequestStream, _$s11XFoundation13CombineWorkerCN, _$sSo16UIViewControllerCSgyc;

@interface CallActions.CallActionWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallEngine.CallActionTriggerStream callActionTriggerStream;
    CallScreen.CallScreenPresentationRequestStream callScreenPresentationRequestStream;
    CallEngine.CallStarter callStarter;
    CallEngine.CallStream callStream;
    () -> __C.UIViewController? presenterProvider;
}

@end

#endif /* _TtC11CallActions16CallActionWorker_h */
