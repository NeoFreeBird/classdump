//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports24SportsGameRemindersStore_h
#define _TtC7XSports24SportsGameRemindersStore_h
@import Foundation;

@class XSports.SportsLeague, _$s20TwitterActionService0bC0CMn ?, _$s7Combine9PublishedVMn Swift.Bool, _$s7Combine9PublishedVMn _$sShySSG, _$sSDySSScTyyt _$ss5NeverOMn, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sShySSG, _TtCs12_SwiftObject;

@interface XSports.SportsGameRemindersStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published Swift.Set<Swift.String> _remindedGameRestIDs;
    nominal type descriptor for Combine.Published Swift.Set<Swift.String> _togglingGameRestIDs;
    nominal type descriptor for Combine.Published Swift.Bool _didLoad;
    Swift.Set<Swift.String> snoozedGameRestIDs;
    XSports.SportsLeague league;
    Swift.String? userID;
    nominal type descriptor for TwitterActionService.ActionService ? actionService;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Dictionary empty-list Swift.StringSwift.Task empty-list () nominal type descriptor for Swift.Never toggleTasks;
}

@end

#endif /* _TtC7XSports24SportsGameRemindersStore_h */
