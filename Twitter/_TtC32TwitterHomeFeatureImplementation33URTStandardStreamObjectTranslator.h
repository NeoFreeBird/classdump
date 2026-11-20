//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC32TwitterHomeFeatureImplementation33URTStandardStreamObjectTranslator_h
#define _TtC32TwitterHomeFeatureImplementation33URTStandardStreamObjectTranslator_h
@import Foundation;

@class NSObject, _$s11TwitterHome0B26ViewModelImpressionMonitorMp, _$s11TwitterHome21URTBottomCursorLoaderMp, _$s11TwitterHome34URTStreamObjectTranslationRegistryCMn, _$s11TwitterHome41URTTimelineStreamObjectTranslatorDelegateMp ?, _$s13TFSObservable8ObserverCMn _$s10TwitterURT34URTTimelineHydrationObservableTypeVMn ?, _$s14T1TwitterSwift20URTTimelineHydrationCMn, _$s14TFSTwitterCore11URTTimelineCMn ?, _$sSDySS _$s10TwitterURT31TimelineItemPathAssociatedModelMp, _$sSh -> _$s10Foundation4UUIDVMn, _$sSh -> _$s14TFSTwitterCore11URTTimelineC10NavigationOMn, _$sSo17TFNTwitterAccountC;

@interface TwitterHomeFeatureImplementation.URTStandardStreamObjectTranslator : NSObject { // (Swift)
    /* instance variables */
    protocol descriptor for TwitterHome.URTTimelineStreamObjectTranslatorDelegate ? delegate;
    protocol descriptor for TwitterHome.HomeViewModelImpressionMonitor viewModelImpressionMonitor;
    nominal type descriptor for T1TwitterSwift.URTTimelineHydration urtTimelineHydration;
    nominal type descriptor for TFSObservable.Observer nominal type descriptor for TwitterURT.URTTimelineHydrationObservableType ? urtTimelineHydrationObserver;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? urtTimeline;
    protocol descriptor for TwitterHome.URTBottomCursorLoader bottomCursorLoader;
    Swift.Set -> nominal type descriptor for Foundation.UUID translatedUpdateDisplayActionUIDs;
    Swift.Set -> nominal type descriptor for TFSTwitterCore.URTTimeline.Navigation translatedNavigationInstructions;
    __C.TFNTwitterAccount account;
    Swift.Dictionary empty-list Swift.String protocol descriptor for TwitterURT.TimelineItemPathAssociatedModel previousStreamObjects;
    nominal type descriptor for TwitterHome.URTStreamObjectTranslationRegistry viewModelTranslatorRegistry;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation33URTStandardStreamObjectTranslator_h */
