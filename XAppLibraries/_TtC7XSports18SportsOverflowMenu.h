//
#ifndef _TtC7XSports18SportsOverflowMenu_h
#define _TtC7XSports18SportsOverflowMenu_h
@import Foundation;

@class XSports.SportsScribe, XSports.SportsShareActions, _$sSaySo13UIMenuElementCGyc, _$sSbyc, _$sSo15UIBarButtonItemCSgXw, _$sSo16UIViewControllerCSgXw, _$sSo16UIViewControllerCyScMYccSg, _$sSo6UIViewCSgXw, _$syycSg, _TtCs12_SwiftObject;

@interface XSports.SportsOverflowMenu : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? host;
    weak __C.UIView? sourceView;
    XSports.SportsShareActions actions;
    XSports.SportsScribe scribe;
    () -> Swift.Bool sharesChat;
    () -> [__C.UIMenuElement] additionalActions;
    (() -> ())? showFavoriteTeams;
    (@Swift.MainActor () -> __C.UIViewController)? makeSettings;
    weak __C.UIBarButtonItem? barButtonItem;
}

@end

#endif /* _TtC7XSports18SportsOverflowMenu_h */
