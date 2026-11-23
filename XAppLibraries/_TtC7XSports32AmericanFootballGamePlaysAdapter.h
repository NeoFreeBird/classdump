//
#ifndef _TtC7XSports32AmericanFootballGamePlaysAdapter_h
#define _TtC7XSports32AmericanFootballGamePlaysAdapter_h
@import Foundation;

@class Swift.Bool, XSports.AmericanFootballGamePlaysGame ?, XSports.AmericanFootballGamePlaysSectionFactory.Handlers ?, XSports.AmericanFootballPlayFeedEntry _$scSg ->, XSports.AmericanFootballPlayPost _$scSg ->, XSports.Athlete _$scSg ->, XSports.SportsGamePlaysFilter ?, XSports.SportsGamePlaysFilter _$scSg ->, XSports.SportsGamePlaysViewController XSports.AmericanFootballGamePlaysContent ?, XSports.SportsGameReminderCardBinding ?, XSports.SportsInlineVideoSession _$sSgSS_So6UIViewCSo12UIScrollViewCtcSg, XSports.SportsPlayPostSession _$sSgSS_So6UIViewCSo12UIScrollViewCSgtcSg, XSports.SportsTeamHighlights _$s_SStcSg ->, _$sSDySS XSports.SportsPlayPostSummary, _$sSSSg, _$sSa -> XSports.AmericanFootballGamePlaysRow, _$sSa -> XSports.SportsGameHighlightsCarouselCell.Content, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sShySSG, _$sSo16TIPImagePipelineCSg, _$sySbcSg, _TtCs12_SwiftObject;

@interface XSports.AmericanFootballGamePlaysAdapter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ((Swift.Bool) -> ())? onDriveToggle;
    XSports.SportsGamePlaysFilter _$scSg -> onFilterSelect;
    XSports.AmericanFootballPlayFeedEntry _$scSg -> onReplayPlay;
    XSports.Athlete _$scSg -> onSelectAthlete;
    XSports.AmericanFootballPlayPost _$scSg -> onOpenPost;
    ((Swift.Bool) -> ())? onReminderToggle;
    XSports.SportsTeamHighlights _$s_SStcSg -> onReplayHighlight;
    XSports.SportsInlineVideoSession _$sSgSS_So6UIViewCSo12UIScrollViewCtcSg installPlayVideo;
    XSports.SportsPlayPostSession _$sSgSS_So6UIViewCSo12UIScrollViewCSgtcSg installPlayPost;
    Swift.Bool showsPosts;
    XSports.SportsGamePlaysViewController XSports.AmericanFootballGamePlaysContent ? $__lazy_storage_$_viewController;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsGameReminderCardBinding ? reminderBinding;
    XSports.SportsGamePlaysFilter ? filter;
    Swift.Array -> XSports.AmericanFootballGamePlaysRow rows;
    Swift.Dictionary empty-list Swift.String XSports.SportsPlayPostSummary postSummaries;
    Swift.Set<Swift.String> expandedDriveIDs;
    Swift.String? latestDriveID;
    Swift.String? autoExpandedDriveID;
    XSports.AmericanFootballGamePlaysGame ? state;
    Swift.Bool hasHighlights;
    Swift.Array -> XSports.SportsGameHighlightsCarouselCell.Content highlights;
    Swift.Bool isHydrated;
    Swift.String? broadcast;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    XSports.AmericanFootballGamePlaysSectionFactory.Handlers ? $__lazy_storage_$_handlers;
}

@end

#endif /* _TtC7XSports32AmericanFootballGamePlaysAdapter_h */
