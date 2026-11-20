//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24BaseballGamePlaysAdapter_h
#define _TtC7XSports24BaseballGamePlaysAdapter_h
@import Foundation;

@class Swift.Bool, XSports.BaseballAtBatDetail _$scSg ->, XSports.BaseballGamePlaysContent ?, XSports.BaseballGamePlaysGame ?, XSports.BaseballGamePlaysSectionFactory.MediaHandlers, XSports.SportsGamePlaysFilter ?, XSports.SportsGamePlaysFilter _$scSg ->, XSports.SportsGamePlaysViewController XSports.BaseballGamePlaysContent ?, XSports.SportsGameReminderCardBinding ?, _$sSDySS XSports.SportsPlayPostSummary, _$sSSSg, _$sSa -> XSports.SportsGameHighlightsCarouselCell.Content, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sShySSG, _$sSo16TIPImagePipelineCSg, _$sySbcSg, _TtCs12_SwiftObject;

@interface XSports.BaseballGamePlaysAdapter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSports.SportsGamePlaysFilter _$scSg -> onFilterSelect;
    ((Swift.Bool) -> ())? onAtBatToggle;
    XSports.BaseballAtBatDetail _$scSg -> onSelectAtBat;
    ((Swift.Bool) -> ())? onReminderToggle;
    XSports.BaseballGamePlaysSectionFactory.MediaHandlers media;
    XSports.SportsGamePlaysViewController XSports.BaseballGamePlaysContent ? $__lazy_storage_$_viewController;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsGameReminderCardBinding ? reminderBinding;
    XSports.SportsGamePlaysFilter ? filter;
    XSports.BaseballGamePlaysGame ? game;
    Swift.Array -> XSports.SportsGameHighlightsCarouselCell.Content highlights;
    Swift.Bool isUnavailable;
    Swift.Set<Swift.String> expandedAtBatIDs;
    Swift.Set<Swift.String> expandedLineupHalfIDs;
    Swift.String? autoExpandedAtBatID;
    XSports.BaseballGamePlaysContent ? cachedContent;
    Swift.Dictionary empty-list Swift.String XSports.SportsPlayPostSummary postSummaries;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC7XSports24BaseballGamePlaysAdapter_h */
