//
#ifndef _TtC14T1TwitterSwift24ConversationThreadLoader_h
#define _TtC14T1TwitterSwift24ConversationThreadLoader_h
@import Foundation;

@class NSObject, T1TwitterSwift.URTTimelineHydration, _$s10TwitterURT18URTTimelineUpdaterCMn, _$s13TFSObservable8ObserverCMn _$s10TwitterURT34URTTimelineHydrationObservableTypeVMn ?, _$s14TFSTwitterCore11URTTimelineCMn ?, _$sSaySo16TFNTwitterStatusCG, _$sSh -> _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV15ClientEventInfoC7DetailsC012ConversationI0C0J7SectionOMn, _$syycSg;

@interface T1TwitterSwift.ConversationThreadLoader : NSObject { // (Swift)
    /* instance variables */
    [__C.TFNTwitterStatus] statuses;
    T1TwitterSwift.URTTimelineHydration hydration;
    nominal type descriptor for TwitterURT.URTTimelineUpdater timelineUpdater;
    nominal type descriptor for TFSObservable.Observer nominal type descriptor for TwitterURT.URTTimelineHydrationObservableType ? hydrationObserver;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? timeline;
    Swift.Set -> nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ClientEventInfo.Details.ConversationDetails.ConversationSection loadSections;
    (() -> ())? onError;
}

/* instance methods */
- (void)dealloc;
- (void)handleTimelineError:(id)error;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift24ConversationThreadLoader_h */
