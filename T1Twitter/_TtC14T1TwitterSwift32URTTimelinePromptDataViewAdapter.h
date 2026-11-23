//
#ifndef _TtC14T1TwitterSwift32URTTimelinePromptDataViewAdapter_h
#define _TtC14T1TwitterSwift32URTTimelinePromptDataViewAdapter_h
@import Foundation;

#include "T1URTViewControllerAwareAdapter-Protocol.h"
#include "TFNCellVisibilityBroadcasterDelegate-Protocol.h"

@class NSObject, _$s10TFSURTCore20URTTimelineSortIndexVMn _$sSgSSc, _$s10TwitterURT10URTReactorMp ?, _$sSD -> T1TwitterSwift.URTTimelinePromptDataViewAdapter.relevanceResponsePropertyKey _$s17TFSUtilitiesSwift25AsynchronouslySetPropertyCMn T1TwitterSwift.RelevancePromptOptionWithFeedback _$sSgG ->, _$sSDySS T1TwitterSwift.RelevancePromptView.ViewModel, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC;

@interface T1TwitterSwift.URTTimelinePromptDataViewAdapter : NSObject <T1URTViewControllerAwareAdapter, TFNCellVisibilityBroadcasterDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    Swift.Dictionary empty-list Swift.String T1TwitterSwift.RelevancePromptView.ViewModel relevanceViewModels;
    protocol descriptor for TwitterURT.URTReactor ? reactor;
    nominal type descriptor for TFSURTCore.URTTimelineSortIndex _$sSgSSc timelineEntrySortIndexFromEntryIDLookup;
    Swift.Dictionary -> T1TwitterSwift.URTTimelinePromptDataViewAdapter.relevanceResponsePropertyKey nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty T1TwitterSwift.RelevancePromptOptionWithFeedback _$sSgG -> relevanceResponseProperties;
}

/* instance methods */
- (void)adapterWasUsedByURTViewController:(id)controller;
- (id)broadcaster:(id)broadcaster focalViewForCell:(id)cell;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift32URTTimelinePromptDataViewAdapter_h */
