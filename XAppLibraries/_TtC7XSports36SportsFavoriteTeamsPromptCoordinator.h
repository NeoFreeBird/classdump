//
#ifndef _TtC7XSports36SportsFavoriteTeamsPromptCoordinator_h
#define _TtC7XSports36SportsFavoriteTeamsPromptCoordinator_h
@import Foundation;

@class Swift.Bool, XSports.SportsFavoriteTeamsAutoPrompt, XSports.SportsFavoriteTeamsStore.LoadState _$syc, _$s7Combine14AnyCancellableCMn ?, _$sSo16UIViewControllerCSgXw, _TtCs12_SwiftObject;

@interface XSports.SportsFavoriteTeamsPromptCoordinator : Swift._SwiftObject { // (Swift)
    /* instance variables */
    weak __C.UIViewController? host;
    XSports.SportsFavoriteTeamsStore.LoadState _$syc loadState;
    XSports.SportsFavoriteTeamsAutoPrompt prompt;
    nominal type descriptor for Combine.AnyCancellable ? loadStateCancellable;
    nominal type descriptor for Combine.AnyCancellable ? openedCancellable;
    Swift.Bool hasAppeared;
}

@end

#endif /* _TtC7XSports36SportsFavoriteTeamsPromptCoordinator_h */
