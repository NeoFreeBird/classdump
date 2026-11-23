//
#ifndef _TtC7XSports14SportsHubStore_h
#define _TtC7XSports14SportsHubStore_h
@import Foundation;

@class Swift.Bool, XSports.SportsFavoriteTeamsStore ?, XSports.SportsHubAction ?, XSports.SportsHubLeagueDetails ?, XSports.SportsHubMediaStore ?, XSports.SportsHubScheduleLiveUpdating, XSports.SportsHubSegment ?, XSports.SportsHubState.Header, XSports.SportsPlayerLeadersStore ?, XSports.SportsStandingsStoreType ?, _$s7Combine18PassthroughSubjectCMn XSports.SportsHubOutput _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn XSports.SportsHubState _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$syyc, _TtCs12_SwiftObject;

@interface XSports.SportsHubStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject XSports.SportsHubState nominal type descriptor for Swift.Never stateSubject;
    nominal type descriptor for Combine.PassthroughSubject XSports.SportsHubOutput nominal type descriptor for Swift.Never outputSubject;
    XSports.SportsHubScheduleLiveUpdating scheduleStore;
    XSports.SportsStandingsStoreType ? standingsStore;
    XSports.SportsPlayerLeadersStore ? playerLeadersStore;
    XSports.SportsFavoriteTeamsStore ? favoriteTeamsStore;
    XSports.SportsHubState.Header baseHeader;
    Swift.Bool showsHomeTab;
    XSports.SportsHubMediaStore ? mediaStore;
    () -> () refreshLeagueDetails;
    Swift.Bool loadsStandingsOnOpen;
    XSports.SportsHubSegment ? initialSegment;
    Swift.Bool followsInitialSegment;
    XSports.SportsHubAction ? pendingInitialAction;
    XSports.SportsHubLeagueDetails ? leagueDetails;
    Swift.Bool isPlayersAvailable;
    Swift.Bool isMediaAvailable;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
    Swift.Bool hasLoaded;
}

@end

#endif /* _TtC7XSports14SportsHubStore_h */
