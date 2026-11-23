//
#ifndef _TtC7XSports22SportsManageTeamsStore_h
#define _TtC7XSports22SportsManageTeamsStore_h
@import Foundation;

@class XSports.SportsFavoriteTeamsStore, _$s7Combine9PublishedVMn XSports.SportsManageTeamsLoadState, _$s7Combine9PublishedVMn _$sShySSG, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface XSports.SportsManageTeamsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.Set<Swift.String> _selected;
    nominal type descriptor for Combine.Published XSports.SportsManageTeamsLoadState _loadState;
    XSports.SportsFavoriteTeamsStore favoriteTeamsStore;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Int toggleGeneration;
}

@end

#endif /* _TtC7XSports22SportsManageTeamsStore_h */
