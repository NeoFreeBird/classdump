//
#ifndef _TtC14T1TwitterSwift53URTConversationTimelineIdentityStreamObjectTranslator_h
#define _TtC14T1TwitterSwift53URTConversationTimelineIdentityStreamObjectTranslator_h
@import Foundation;

@class NSObject, T1TwitterSwift.URTTimelineHydration, TwitterHome.URTTimelineStreamObjectTranslatorDelegate ?, _$s13TFSObservable8ObserverCMn _$s10TwitterURT34URTTimelineHydrationObservableTypeVMn ?, _$s14TFSTwitterCore11URTTimelineCMn ?, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.URTConversationTimelineIdentityStreamObjectTranslator : NSObject { // (Swift)
    /* instance variables */
    TwitterHome.URTTimelineStreamObjectTranslatorDelegate ? delegate;
    T1TwitterSwift.URTTimelineHydration urtTimelineHydration;
    nominal type descriptor for TFSObservable.Observer nominal type descriptor for TwitterURT.URTTimelineHydrationObservableType ? urtTimelineHydrationObserver;
    nominal type descriptor for TFSTwitterCore.URTTimeline ? urtTimeline;
    __C.TFNTwitterAccount account;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift53URTConversationTimelineIdentityStreamObjectTranslator_h */
