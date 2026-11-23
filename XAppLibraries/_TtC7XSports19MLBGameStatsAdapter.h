//
#ifndef _TtC7XSports19MLBGameStatsAdapter_h
#define _TtC7XSports19MLBGameStatsAdapter_h
@import Foundation;

@class Swift.Bool, XSports.Athlete _$scSg ->, XSports.MLBGameState ?, XSports.SportsGameReminderCardBinding ?, XSports.SportsGameReminderCardBinding.Game ?, XSports.SportsGameStatsViewController XSports.MLBGameStatsContent ?, XSports.SportsTeam _$scSg ->, XSports.SportsTeamSide, XSports.SportsTeamSide _$scSg ->, _$sSSSg, _$sSo16TIPImagePipelineCSg, _$sySScSg, _$sySa -> XSports.Athlete _$sGcSg, _$sySbcSg, _TtCs12_SwiftObject;

@interface XSports.MLBGameStatsAdapter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSports.SportsTeamSide _$scSg -> onBoxScoreSideSelect;
    XSports.Athlete _$scSg -> onSelectAthlete;
     empty-list Swift.Array -> XSports.Athlete _$sGcSg onPrewarmAthletes;
    XSports.SportsTeam _$scSg -> onSelectTeam;
    ((Swift.String) -> ())? onSelectGame;
    ((Swift.Bool) -> ())? onReminderToggle;
    XSports.SportsGameStatsViewController XSports.MLBGameStatsContent ? $__lazy_storage_$_viewController;
    __C.TIPImagePipeline? imagePipeline;
    XSports.SportsGameReminderCardBinding ? reminderBinding;
    XSports.MLBGameState ? game;
    XSports.SportsGameReminderCardBinding.Game ? reminderGame;
    Swift.Bool isLoading;
    XSports.SportsTeamSide selectedBoxScoreSide;
    XSports.SportsTeamSide selectedInjurySide;
    Swift.String? selectedLeaderGroupID;
}

@end

#endif /* _TtC7XSports19MLBGameStatsAdapter_h */
