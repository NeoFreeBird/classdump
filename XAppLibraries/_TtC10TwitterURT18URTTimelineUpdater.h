//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT18URTTimelineUpdater_h
#define _TtC10TwitterURT18URTTimelineUpdater_h
@import Foundation;

@class TwitterURT.URTTimelineUpdaterLoadingDelegate ?, TwitterURT.URTTimelineUpdaterRequestActionScriber, TwitterURT.URTUpdateContextLifecycleManager, TwitterURT.URTUpdatePipelineActionFactory, _$s8TFSModel12ModelContextCMn, _$s8TFSModel22AssimilationIdentifierVMn TwitterURT.URTTimelineUpdateContext.Identity, _$syyyyccc, _TtCs12_SwiftObject;

@interface TwitterURT.URTTimelineUpdater : Swift._SwiftObject { // (Swift)
    /* instance variables */
    TwitterURT.URTUpdateContextLifecycleManager contextLifecycleManager;
    TwitterURT.URTUpdatePipelineActionFactory actionFactory;
    nominal type descriptor for TFSModel.ModelContext modelContext;
    nominal type descriptor for TFSModel.AssimilationIdentifier TwitterURT.URTTimelineUpdateContext.Identity assimilationIdentifier;
    TwitterURT.URTTimelineUpdaterRequestActionScriber actionScriber;
    ((() -> ()) -> ()) -> () actionExecutor;
    TwitterURT.URTTimelineUpdaterLoadingDelegate ? loadingDelegate;
}

@end

#endif /* _TtC10TwitterURT18URTTimelineUpdater_h */
