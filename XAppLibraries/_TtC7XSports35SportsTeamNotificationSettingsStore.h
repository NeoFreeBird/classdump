//
#ifndef _TtC7XSports35SportsTeamNotificationSettingsStore_h
#define _TtC7XSports35SportsTeamNotificationSettingsStore_h
@import Foundation;

@class XSports.SportsTeamNotificationsRepository, _$s20TwitterActionService0bC0CMn ?, _$s7Combine9PublishedVMn _$sySa -> XSports.SportsTeamNotificationSettingsStore.TeamSetting, _$sSSSg, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface XSports.SportsTeamNotificationSettingsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> XSports.SportsTeamNotificationSettingsStore.TeamSetting _settings;
    Swift.String? userID;
    nominal type descriptor for TwitterActionService.ActionService ? actionService;
    XSports.SportsTeamNotificationsRepository repository;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? toggleTask;
    Swift.Int toggleGeneration;
}

@end

#endif /* _TtC7XSports35SportsTeamNotificationSettingsStore_h */
