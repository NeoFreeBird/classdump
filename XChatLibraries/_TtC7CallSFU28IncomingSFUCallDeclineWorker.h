//
#ifndef _TtC7CallSFU28IncomingSFUCallDeclineWorker_h
#define _TtC7CallSFU28IncomingSFUCallDeclineWorker_h
@import Foundation;

@class CallMedia.CallApi _$sSSc, CallModels.CallKitIntegration, _$s11XFoundation13CombineWorkerCN, _$sySS_yyYaYbctc;

@interface CallSFU.IncomingSFUCallDeclineWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallKitIntegration callKitIntegration;
    CallMedia.CallApi _$sSSc callApiProvider;
    (Swift.String, @Sendable () async -> ()) -> () runInBackground;
}

@end

#endif /* _TtC7CallSFU28IncomingSFUCallDeclineWorker_h */
