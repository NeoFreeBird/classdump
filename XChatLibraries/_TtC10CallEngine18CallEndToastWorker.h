//
#ifndef _TtC10CallEngine18CallEndToastWorker_h
#define _TtC10CallEngine18CallEndToastWorker_h
@import Foundation;

@class CallModels.CallConfiguration, CallModels.CallConnectionStateStream, CallModels.CallToastPresenting, _$s11XFoundation13CombineWorkerCN;

@interface CallEngine.CallEndToastWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    CallModels.CallConfiguration configuration;
    CallModels.CallConnectionStateStream callConnectionStateStream;
    CallModels.CallToastPresenting callToastPresenter;
}

@end

#endif /* _TtC10CallEngine18CallEndToastWorker_h */
