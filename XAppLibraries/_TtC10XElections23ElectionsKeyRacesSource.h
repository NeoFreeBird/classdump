//
#ifndef _TtC10XElections23ElectionsKeyRacesSource_h
#define _TtC10XElections23ElectionsKeyRacesSource_h
@import Foundation;

@class XElections.ElectionsKeyRace _$scSg ->, XElections.ElectionsLiveResultsStore, XElections.ElectionsXAccount _$scSg ->, _$s20TwitterActionService0bC0CMn, _$s7Combine14AnyCancellableCMn ?, _$sSDySS XElections.ElectionsRaceResults, _$sSS, _$sSa -> XElections.ElectionsKeyRace, _$sSa -> XElections.ElectionsKeyRacesView, _$sSo16TIPImagePipelineCSg, _TtCs12_SwiftObject;

@interface XElections.ElectionsKeyRacesSource : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.String electionID;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    __C.TIPImagePipeline? imagePipeline;
    XElections.ElectionsLiveResultsStore liveResults;
    Swift.Array -> XElections.ElectionsKeyRace keyRaces;
    Swift.Dictionary empty-list Swift.String XElections.ElectionsRaceResults resultsByRaceID;
    Swift.Array -> XElections.ElectionsKeyRacesView headers;
    nominal type descriptor for Combine.AnyCancellable ? liveResultsSubscription;
    XElections.ElectionsKeyRace _$scSg -> onSelectRace;
    XElections.ElectionsKeyRace _$scSg -> onDisplayRace;
    XElections.ElectionsXAccount _$scSg -> onOpenProfile;
}

@end

#endif /* _TtC10XElections23ElectionsKeyRacesSource_h */
