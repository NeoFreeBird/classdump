//
#ifndef _TtCC32TwitterHomeFeatureImplementation21URTHomeTimelineStream17CursorPrefetching_h
#define _TtCC32TwitterHomeFeatureImplementation21URTHomeTimelineStream17CursorPrefetching_h
@import Foundation;

@class Swift.Bool, TwitterHomeFeatureImplementation.URTHomeTimelineStream.CursorPrefetching.CachedCursorState, _$s10TwitterURT25URTTimelineUpdatePipelineMp, _$s10XUtilities11UnfairQueueCMn, _$s11TwitterHome11CursorCacheCMn ?, _$s17TFSUtilitiesSwift14AtomicPropertyCMn TwitterHomeFeatureImplementation.URTHomeTimelineStream.CursorPrefetching.State, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.URTHomeTimelineStream.CursorPrefetching : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterHome.CursorCache ? cursorCache;
    nominal type descriptor for XUtilities.UnfairQueue cachedCursorLock;
    TwitterHomeFeatureImplementation.URTHomeTimelineStream.CursorPrefetching.CachedCursorState cachedCursorState;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? timelineObservation;
    Swift.String urtTimelineUID;
    protocol descriptor for TwitterURT.URTTimelineUpdatePipeline urtTimelineUpdatePipeline;
    Swift.Bool bottomCursorEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AtomicProperty TwitterHomeFeatureImplementation.URTHomeTimelineStream.CursorPrefetching.State fetchingState;
}

@end

#endif /* _TtCC32TwitterHomeFeatureImplementation21URTHomeTimelineStream17CursorPrefetching_h */
