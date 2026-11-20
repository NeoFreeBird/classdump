//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift27StandardURTFeedbackExecutor_h
#define _TtC14T1TwitterSwift27StandardURTFeedbackExecutor_h
@import Foundation;

@class TwitterLists.ListMutationsManager, _$s10TFSTracing26EventDrivenTraceRepositoryCMn, _$s10TwitterURT18URTFeedbackScriberMp, _$s10TwitterURT18URTTimelineUpdaterCMn, _$s10TwitterURT24URTFeedbackSenderGraphQLCMn, _$s13TFSObservable8ObserverCMn _$s14TFSTwitterCore11TwitterListVMn ?, _$s8TFSModel12ModelContextCMn, _$sSS, _$sSo16T1AccountActions_pSg, _$sSo23ListCopyStringsProvider_p, _$sSo23TFSTwitterScribeContextC, _$sSo32TFSTwitterLegacyScribeLogMethods_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.StandardURTFeedbackExecutor : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    nominal type descriptor for TFSModel.ModelContext modelContext;
    nominal type descriptor for TwitterURT.URTTimelineUpdater timelineUpdater;
    protocol descriptor for TwitterURT.URTFeedbackScriber feedbackScriber;
    nominal type descriptor for TwitterURT.URTFeedbackSenderGraphQL feedbackSender;
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    __C.TFSTwitterScribeContext scribeContext;
    TwitterLists.ListMutationsManager listMutationsManager;
    __C.ListCopyStringsProvider stringsProvider;
    __C.T1AccountActions? accountActions;
    nominal type descriptor for TFSObservable.Observer nominal type descriptor for TFSTwitterCore.TwitterList ? persistentListObserver;
    nominal type descriptor for TFSTracing.EventDrivenTraceRepository traceRepository;
}

@end

#endif /* _TtC14T1TwitterSwift27StandardURTFeedbackExecutor_h */
