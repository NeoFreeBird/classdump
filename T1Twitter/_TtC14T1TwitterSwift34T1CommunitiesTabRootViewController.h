//
#ifndef _TtC14T1TwitterSwift34T1CommunitiesTabRootViewController_h
#define _TtC14T1TwitterSwift34T1CommunitiesTabRootViewController_h
@import Foundation;

@class _$s14GraphQLScalars23TimelineViewFilterInputOMn ?, _$s14GraphQLScalars24TimelineRankingModeInputOMn, _$s20TwitterCommunitiesUI0B18RootViewControllerCN, _$s20TwitterCommunitiesUI33CommunityWelcomePromptInteractionCMn ?, _$sSo17TFNTwitterAccountC, _$sSo9TFNButtonCSg;

@interface T1TwitterSwift.T1CommunitiesTabRootViewController : type metadata for TwitterCommunitiesUI.CommunitiesRootViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    nominal type descriptor for GraphQLScalars.TimelineRankingModeInput timelineRanking;
    nominal type descriptor for GraphQLScalars.TimelineViewFilterInput ? timelineViewFilter;
    nominal type descriptor for TwitterCommunitiesUI.CommunityWelcomePromptInteraction ? $__lazy_storage_$_welcomePromptInteraction;
    __C.TFNButton? $__lazy_storage_$_timelineSortButton;
}

/* instance methods */
- (void)presentComposer;
- (void)presentGIFSearchComposer;
- (id)initWithAccount:(id)account navigation:(id)navigation;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)didTapTimelineSortButton;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)applicationWillEnterForegroundFromBackground:(id)background;
- (long long)dashContentItemType;
- (void)didRemoveMemberFromCommunity:(id)community;

@end

#endif /* _TtC14T1TwitterSwift34T1CommunitiesTabRootViewController_h */
