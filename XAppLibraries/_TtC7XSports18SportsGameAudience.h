//
#ifndef _TtC7XSports18SportsGameAudience_h
#define _TtC7XSports18SportsGameAudience_h
@import Foundation;

@class Swift.Bool, XSports.SportsGameTeamPickSource ?, XSports.SportsLiveViewerBeat, XSports.SportsTeamPickState ?, _$s7Combine14AnyCancellableCMn ?, _$sSSSg, _$sSi, _$sSiSg, _$syycSg, _TtCs12_SwiftObject;

@interface XSports.SportsGameAudience : Swift._SwiftObject { // (Swift)
    /* instance variables */
    (() -> ())? onChange;
    Swift.Bool isWatching;
    Swift.Bool showsTeamPickResults;
    XSports.SportsGameTeamPickSource ? teamPickSource;
    XSports.SportsLiveViewerBeat liveViewerBeat;
    Swift.String? gameID;
    Swift.String? broadcastID;
    Swift.Int? heartbeatViewers;
    XSports.SportsTeamPickState ? teamPick;
    Swift.Int teamPickGeneration;
    nominal type descriptor for Combine.AnyCancellable ? teamPickChanges;
}

@end

#endif /* _TtC7XSports18SportsGameAudience_h */
