//
#ifndef _TtC7XSports27FormulaRacingResultsAdapter_h
#define _TtC7XSports27FormulaRacingResultsAdapter_h
@import Foundation;

@class Swift.Bool, XSports.Athlete _$scSg ->, XSports.FormulaRacingRaceState ?, XSports.FormulaRacingStatsTrayContent _$scSg ->, XSports.SportsGameStatsViewController XSports.FormulaRacingResultsContent ?, _$sSiSg, _$sSo16TIPImagePipelineCSg, _$sySa -> XSports.Athlete _$sGcSg, _$sySicSg, _TtCs12_SwiftObject;

@interface XSports.FormulaRacingResultsAdapter : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSports.SportsGameStatsViewController XSports.FormulaRacingResultsContent ? $__lazy_storage_$_viewController;
    XSports.Athlete _$scSg -> onSelectAthlete;
     empty-list Swift.Array -> XSports.Athlete _$sGcSg onPrewarmAthletes;
    XSports.FormulaRacingStatsTrayContent _$scSg -> onViewAll;
    ((Swift.Int) -> ())? onSelectPart;
    __C.TIPImagePipeline? imagePipeline;
    XSports.FormulaRacingRaceState ? race;
    Swift.Bool isUnavailable;
    Swift.Bool isLoading;
    Swift.Int? selectedPartIndex;
}

@end

#endif /* _TtC7XSports27FormulaRacingResultsAdapter_h */
