//
#ifndef _TtP8TFSModel20ModelContextScribing__Protocol_h
#define _TtP8TFSModel20ModelContextScribing__Protocol_h
@import Foundation;

#include "_TtP8TFSModel23DependencyGraphScribing_-Protocol.h"

@protocol _TtP8TFSModel39ModelContextDiagnosticMetadataProviding_;

@protocol TFSModel.ModelContextScribing <TFSModel.DependencyGraphScribing>

@required

@property (weak, nonatomic) id <TFSModel.ModelContextDiagnosticMetadataProviding> diagnosticsProvider;

/* required instance methods */
- (void)scribeSlowAssimilationWithDurationMs:(long long)ms success:(_Bool)success assimilableDescription:(id)description;
- (void)scribeSlowAssimilationActionWithDurationMs:(long long)ms assimilableDescription:(id)description;
- (void)scribeSlowPureModelLookupWithDurationMs:(long long)ms modelDescription:(id)description;
- (void)scribeSlowPendingStateLookupWithDurationMs:(long long)ms pendingStateDescription:(id)description;
- (void)scribeSlowModelLookupWithDurationMs:(long long)ms modelDescription:(id)description;
- (void)scribeSlowAssimilationQueueDispatchWithDurationMs:(long long)ms;
- (void)scribeModelContextErrorWithDescription:(id)description;
- (void)scribeSlowInitWithDurationMs:(long long)ms;

@optional

@end

#endif /* _TtP8TFSModel20ModelContextScribing__Protocol_h */
