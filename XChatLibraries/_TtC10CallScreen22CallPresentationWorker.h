//
#ifndef _TtC10CallScreen22CallPresentationWorker_h
#define _TtC10CallScreen22CallPresentationWorker_h
@import Foundation;

@class CallEngine.CallStream, CallScreen.CallScreenBuilder, CallScreen.CallScreenPresentationRequestStream, _$s10Foundation4UUIDVMn ?, _$s11XFoundation13CombineWorkerCN, _$sSo16UIViewControllerCSgXw, _$sSo16UIViewControllerCSgyc;

@interface CallScreen.CallPresentationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallScreen.CallScreenBuilder callScreenBuilder;
    CallScreen.CallScreenPresentationRequestStream callScreenPresentationRequestStream;
    CallEngine.CallStream callStream;
    () -> __C.UIViewController? presenterProvider;
    weak __C.UIViewController? callScreen;
    nominal type descriptor for Foundation.UUID ? presentedCallID;
}

@end

#endif /* _TtC10CallScreen22CallPresentationWorker_h */
