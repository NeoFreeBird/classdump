//
#ifndef _TtC7XSports19SportsSettingsStore_h
#define _TtC7XSports19SportsSettingsStore_h
@import Foundation;

@class XSports.SportsSettings ?, XSports.SportsViewer, _$s7Combine9PublishedVMn XSports.SportsSettingsStore.State, _$sScTyyt _$ss5NeverOMn ?, _$sSi, _TtCs12_SwiftObject;

@interface XSports.SportsSettingsStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.Published XSports.SportsSettingsStore.State _state;
    XSports.SportsViewer viewer;
    XSports.SportsSettings ? confirmed;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? updateTask;
    Swift.Int pendingUpdates;
}

@end

#endif /* _TtC7XSports19SportsSettingsStore_h */
