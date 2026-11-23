//
#ifndef _TtC10XElections22ElectionsRacePageStore_h
#define _TtC10XElections22ElectionsRacePageStore_h
@import Foundation;

@class XElections.ElectionsAdStore ?, XElections.ElectionsLiveResultsStore, XElections.ElectionsScribe, XElections.ElectionsViewerBeat, _$s20TwitterActionService0bC0CMn, _$s7Combine14AnyCancellableCMn ?, _$s7Combine18PassthroughSubjectCMn XElections.ElectionsRacePageOutput _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn XElections.ElectionsRacePageState _$ss5NeverOMn, _$sSS, _$sScTyyt _$ss5NeverOMn ?, _TtCs12_SwiftObject;

@interface XElections.ElectionsRacePageStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject XElections.ElectionsRacePageState nominal type descriptor for Swift.Never stateSubject;
    nominal type descriptor for Combine.PassthroughSubject XElections.ElectionsRacePageOutput nominal type descriptor for Swift.Never outputSubject;
    Swift.String electionID;
    XElections.ElectionsLiveResultsStore liveResults;
    XElections.ElectionsAdStore ? ads;
    XElections.ElectionsViewerBeat viewerBeat;
    nominal type descriptor for TwitterActionService.ActionService actionService;
    XElections.ElectionsScribe scribe;
    nominal type descriptor for Combine.AnyCancellable ? liveResultsSubscription;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pollAverageTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? detailsTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? pulseTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? decisionDeskTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? adTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? mapTask;
}

@end

#endif /* _TtC10XElections22ElectionsRacePageStore_h */
