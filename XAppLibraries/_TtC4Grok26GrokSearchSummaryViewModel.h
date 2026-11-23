//
#ifndef _TtC4Grok26GrokSearchSummaryViewModel_h
#define _TtC4Grok26GrokSearchSummaryViewModel_h
@import Foundation;

@class Grok.GrokGatewayConnectionPrewarmer, Grok.GrokSearchItem ?, Grok.GrokSearchOverviewConversationStore, Grok.GrokSearchSummaryController, Grok.GrokSearchSummaryQueryEligibilityConfiguration, Grok.GrokSearchSummaryViewModelDelegate ?, Grok.GrokSearchSummaryVisibilityTracker, Swift.Bool, _$s10Foundation4DateVMn ?, _$s12CoreGraphics7CGFloatVMn, _$s7Combine9PublishedVMn Grok.GrokSearchItem ?, _$s7Combine9PublishedVMn Grok.GrokSearchSummaryViewModel.FeedbackVoteState, _$s7Combine9PublishedVMn Grok.GrokSearchSummaryViewModel.SummaryState, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sSS, _$s7Combine9PublishedVMn _$syScTyyt _$ss5NeverOMn ?, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _$sSd, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo25UIImpactFeedbackGeneratorC, _$ss5Int64VMn ?, _TtCs12_SwiftObject;

@interface Grok.GrokSearchSummaryViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String query;
    Swift.Bool isSearchSummaryFeedbackEnabled;
    Swift.Bool isHashtagQueryEnabled;
    Swift.Bool isCollapseOnScrollEnabled;
    Swift.Bool isContinueConversationEnabled;
    Swift.Bool isInlineFollowUpEnabled;
    Swift.Bool isEarlySeeMoreEnabled;
    Swift.String learnMoreButtonTitle;
    Swift.String followUpPlaceholder;
    nominal type descriptor for Combine.Published Grok.GrokSearchItem ? _searchItem;
    nominal type descriptor for Combine.Published Swift.String _feedbackText;
    nominal type descriptor for Combine.Published Swift.Bool _feedbackSubmitted;
    nominal type descriptor for Combine.Published Grok.GrokSearchSummaryViewModel.FeedbackVoteState _feedbackVoteState;
    nominal type descriptor for Combine.Published Swift.String _followUpDraft;
    nominal type descriptor for Combine.Published  empty-list Swift.Task empty-list () nominal type descriptor for Swift.Never ? _openConversationDebounceTask;
    nominal type descriptor for Swift.Int64 ? gatewayUserID;
    Grok.GrokGatewayConnectionPrewarmer gatewayPrewarmer;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? feedbackVoteProgressTask;
    Swift.Double feedbackVoteProgressSeconds;
    __C.UIImpactFeedbackGenerator feedbackVoteHaptic;
    Grok.GrokSearchItem ? latestSearchItem;
    Swift.Bool didStartLoading;
    nominal type descriptor for Foundation.Date ? requestStartDate;
    Grok.GrokSearchSummaryVisibilityTracker visibilityTracker;
    Swift.Bool isCellVisible;
    nominal type descriptor for Combine.Published Grok.GrokSearchSummaryViewModel.SummaryState _state;
    Swift.Bool pendingScrollToTop;
    nominal type descriptor for Combine.Published Swift.Bool _isExpanded;
    nominal type descriptor for Combine.Published Swift.Bool _isStreamingTextOverflowing;
    nominal type descriptor for CoreGraphics.CGFloat contentHeight;
    nominal type descriptor for CoreGraphics.CGFloat buttonHeight;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Grok.GrokSearchSummaryViewModelDelegate ? delegate;
    Grok.GrokSearchSummaryController searchSummaryController;
    Grok.GrokSearchSummaryQueryEligibilityConfiguration queryEligibilityConfiguration;
    Grok.GrokSearchOverviewConversationStore overviewStore;
}

@end

#endif /* _TtC4Grok26GrokSearchSummaryViewModel_h */
