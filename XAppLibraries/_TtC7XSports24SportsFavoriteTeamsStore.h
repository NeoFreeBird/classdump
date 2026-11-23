//
#ifndef _TtC7XSports24SportsFavoriteTeamsStore_h
#define _TtC7XSports24SportsFavoriteTeamsStore_h
@import Foundation;

@class Swift.Bool, XSports.SportsFavoriteTeamsRepository, _$s20TwitterActionService0bC0CMn ?, _$s7Combine9PublishedVMn XSports.SportsFavoriteTeamsStore.LoadState, _$sSSSg, _$sScTyyt _$ss5ErrorMp ?, _TtCs12_SwiftObject;

@interface XSports.SportsFavoriteTeamsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published XSports.SportsFavoriteTeamsStore.LoadState _loadState;
    nominal type descriptor for Combine.Published XSports.SportsFavoriteTeamsStore.LoadState _availableTeamsLoadState;
    Swift.String? userID;
    nominal type descriptor for TwitterActionService.ActionService ? actionService;
    XSports.SportsFavoriteTeamsRepository repository;
    Swift.String? lastKnownKey;
    Swift.Bool needsRefresh;
    Swift.Task empty-list () protocol descriptor for Swift.Error ? loadTask;
    Swift.Task empty-list () protocol descriptor for Swift.Error ? availableTeamsTask;
    Swift.Task empty-list () protocol descriptor for Swift.Error ? mutationTask;
}

@end

#endif /* _TtC7XSports24SportsFavoriteTeamsStore_h */
