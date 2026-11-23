//
#ifndef _TtC7CallP2P27IncomingCallRingStateWorker_h
#define _TtC7CallP2P27IncomingCallRingStateWorker_h
@import Foundation;

@class CallFeatureSwitches.CallFeatures _$sSSc, CallModels.CallKitIntegration, CallModels.CallRelayPolicy _$sSSc, CallP2P.P2PCallApiProviding, CallP2P.P2PPreparedAnswerBuilder, CallP2P.P2PPreparedAnswerStore, _$s11XFoundation11AsyncWorkerCN, _$sySS_yyYaYbctc;

@interface CallP2P.IncomingCallRingStateWorker : type metadata for XFoundation.AsyncWorker { // (Swift)
    /* instance variables */
    CallModels.CallKitIntegration callKitIntegration;
    CallP2P.P2PCallApiProviding callApiProvider;
    CallP2P.P2PPreparedAnswerStore preparedAnswers;
    CallP2P.P2PPreparedAnswerBuilder preparedAnswerBuilder;
    CallFeatureSwitches.CallFeatures _$sSSc callFeaturesProvider;
    CallModels.CallRelayPolicy _$sSSc relayPolicyProvider;
    (Swift.String, @Sendable () async -> ()) -> () runInBackground;
}

@end

#endif /* _TtC7CallP2P27IncomingCallRingStateWorker_h */
