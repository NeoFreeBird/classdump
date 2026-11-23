//
#ifndef _TtC10XElections17ElectionsHubStore_h
#define _TtC10XElections17ElectionsHubStore_h
@import Foundation;

@class Swift.Bool, XElections.ElectionsAdStore ?, XElections.ElectionsEnvironment, XElections.ElectionsLiveResultsStore ?, XElections.ElectionsRace ?, XElections.ElectionsScribe, XElections.ElectionsViewerBeat ?, _$s7Combine18PassthroughSubjectCMn XElections.ElectionsHubOutput _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn XElections.ElectionsHubState _$ss5NeverOMn, _$sSSSg, _TtCs12_SwiftObject;

@interface XElections.ElectionsHubStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XElections.ElectionsLiveResultsStore ? liveResults;
    XElections.ElectionsViewerBeat ? viewerBeat;
    XElections.ElectionsAdStore ? ads;
    nominal type descriptor for Combine.CurrentValueSubject XElections.ElectionsHubState nominal type descriptor for Swift.Never stateSubject;
    nominal type descriptor for Combine.PassthroughSubject XElections.ElectionsHubOutput nominal type descriptor for Swift.Never outputSubject;
    XElections.ElectionsEnvironment environment;
    Swift.String? electionID;
    Swift.String? raceID;
    XElections.ElectionsScribe scribe;
    XElections.ElectionsRace ? pendingRace;
    Swift.Bool isAppeared;
    Swift.Bool hasLoaded;
}

@end

#endif /* _TtC10XElections17ElectionsHubStore_h */
