//
#ifndef _TtC8XAppCall25CallKitVideoRequestWorker_h
#define _TtC8XAppCall25CallKitVideoRequestWorker_h
@import Foundation;

@class XAppCall.CallKitVideoRequestStream, _$s10CallEngine0A6StreamCMn, _$s10CallModels0A23AudioSessionStateStreamCMn, _$s10CallScreen0aB25PresentationRequestStreamCMn, _$s11XFoundation13CombineWorkerCN;

@interface XAppCall.CallKitVideoRequestWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    nominal type descriptor for CallModels.CallAudioSessionStateStream callAudioSessionStateStream;
    XAppCall.CallKitVideoRequestStream callKitVideoRequestStream;
    nominal type descriptor for CallScreen.CallScreenPresentationRequestStream callScreenPresentationRequestStream;
    nominal type descriptor for CallEngine.CallStream callStream;
}

@end

#endif /* _TtC8XAppCall25CallKitVideoRequestWorker_h */
