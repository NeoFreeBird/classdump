//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift39URTTimelineListViewModelTableRowAdapter_h
#define _TtC14T1TwitterSwift39URTTimelineListViewModelTableRowAdapter_h
@import Foundation;

#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"

@class NSObject, T1TwitterSwift.HomeTimelineVariantCoordinator, T1TwitterSwift.URTTimelineListViewModelTableRowAdapter.Style, T1TwitterSwift47URTTimelineListViewModelTableRowAdapterDelegate_pSgXw, TwitterLists.ListDetailsTableViewCell.Style ?, TwitterLists.ListFeatures, TwitterLists.ListMutationsManager, _$s10TwitterURT20URTFeedbackPresenterMp ?, _$s13TFSObservable16ObservableEntityCMn _$s19GraphQLCachedModels15PinnedTimelinesVMn, _$s14TwitterUISwift10UserBadgerVMn ?, _$sSS, _$sSo16TIPImagePipelineC, _$sSo23ListCopyStringsProvider_pSg, _$sSo32TFNTwitterScribeImpressionLoggerC, _$sSo32TFSTwitterLegacyScribeLogMethods_p;

@interface T1TwitterSwift.URTTimelineListViewModelTableRowAdapter : NSObject <TFNCellVisibilityBroadcasterDelegate> { // (Swift)
    /* instance variables */
    Swift.String accountID;
    __C.TFNTwitterScribeImpressionLogger impressionLogger;
    __C.TFSTwitterLegacyScribeLogMethods scribe;
    T1TwitterSwift.HomeTimelineVariantCoordinator homeVariantCoordinator;
    T1TwitterSwift.URTTimelineListViewModelTableRowAdapter.Style style;
    protocol descriptor for TwitterURT.URTFeedbackPresenter ? feedbackPresenter;
    (__C.TFNViewController & TwitterLists.ListDetailsViewControllerProtocol)? nominal type descriptor for Swift.Int64 function type (escaping) listDetailsViewControllerFactory;
    __C.TIPImagePipeline imagePipeline;
    TwitterLists.ListFeatures listFeatures;
    TwitterLists.ListMutationsManager listMutationsManager;
    nominal type descriptor for TFSObservable.ObservableEntity nominal type descriptor for GraphQLCachedModels.PinnedTimelines persistentModelObservable;
    T1TwitterSwift47URTTimelineListViewModelTableRowAdapterDelegate_pSgXw delegate;
    TwitterLists.ListDetailsTableViewCell.Style ? $__lazy_storage_$_cellStyle;
    __C.ListCopyStringsProvider? $__lazy_storage_$_stringsProvider;
    nominal type descriptor for TwitterUISwift.UserBadger ? $__lazy_storage_$_userBadger;
}

/* instance methods */
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift39URTTimelineListViewModelTableRowAdapter_h */
