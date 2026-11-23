//
#ifndef _TtC9XSettings29UpdateUsernameTrayCoordinator_h
#define _TtC9XSettings29UpdateUsernameTrayCoordinator_h
@import Foundation;

@class Swift.Bool, XSettings.SettingsContext, XSettings.UpdateUsernameTrayCoordinator.Availability, _$s10Foundation16AttributedStringVMn ?, _$s13XDesignSystem30TrayInputContentViewControllerCMn ?, _$s8Dispatch0A8WorkItemCMn ?, _$sSDySSSbG, _$sSSSg, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface XSettings.UpdateUsernameTrayCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    XSettings.SettingsContext context;
    weak __C.UIViewController? host;
    nominal type descriptor for XDesignSystem.TrayInputContentViewController ? step;
    nominal type descriptor for Foundation.AttributedString ? fetchedSuggestionsText;
    XSettings.UpdateUsernameTrayCoordinator.Availability availability;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingAvailabilityCheck;
    Swift.String? lastEvaluatedUsername;
    [Swift.String : Swift.Bool] availabilityCache;
    Swift.Bool hasFetchedSuggestions;
}

@end

#endif /* _TtC9XSettings29UpdateUsernameTrayCoordinator_h */
