//
#ifndef _TtC10TwitterURT38URTTimelineUpdateEndpointRequestAction_h
#define _TtC10TwitterURT38URTTimelineUpdateEndpointRequestAction_h
@import Foundation;

@class Swift.Bool, TwitterURT.URTGeneratedGraphQLTimeline, TwitterURT.URTTimelineUpdateContext, URTModels.URTTimelineResponseAssimilationFactory, _$s10TFSURTCore17URTTimelineCursorVMn ?, _$s10TFSURTCore21URTTimelineIdentifierOMn, _$s10XUtilities11UnfairQueueCMn, _$sSS, _$sySb_SbtcSg, _TtCs12_SwiftObject;

@interface TwitterURT.URTTimelineUpdateEndpointRequestAction : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for XUtilities.UnfairQueue startLock;
    Swift.Bool hasStarted;
    TwitterURT.URTTimelineUpdateContext context;
    nominal type descriptor for TFSURTCore.URTTimelineCursor ? requestCursor;
    Swift.String accountID;
    nominal type descriptor for TFSURTCore.URTTimelineIdentifier urtTimelineIdentifier;
    URTModels.URTTimelineResponseAssimilationFactory responseAssimilationFactory;
    TwitterURT.URTGeneratedGraphQLTimeline generatedTimeline;
    ((Swift.Bool, Swift.Bool) -> ())? contextCompletion;
}

@end

#endif /* _TtC10TwitterURT38URTTimelineUpdateEndpointRequestAction_h */
