//
#ifndef _TtC15TwitterSearchV226SearchFiltersTrayPresenter_h
#define _TtC15TwitterSearchV226SearchFiltersTrayPresenter_h
@import Foundation;

#include "TTSUserSelectionViewControllerDelegate-Protocol.h"

@class NSObject, TwitterSearchV2.SearchFilterState, TwitterSearchV2.SearchFiltersTrayScreen ?, TwitterSearchV2.SearchLanguagesProvider, TwitterSearchV2.SearchSafetySettingsProvider ?, _$s13XDesignSystem25TrayManagerViewControllerCMn ?, _$sSbSg, _$sSi, _$sSo16UIViewControllerCSgXw, _$sSo37TTSSearchFiltersViewControllerContext_p, _$sSo39TTSSearchTypeaheadViewControllerContext_p, _$syyc, _$syycSg;

@interface TwitterSearchV2.SearchFiltersTrayPresenter : NSObject <TTSUserSelectionViewControllerDelegate> { // (Swift)
    /* instance variables */
    TwitterSearchV2.SearchFilterState state;
    __C.TTSSearchFiltersViewControllerContext filtersContext;
    __C.TTSSearchTypeaheadViewControllerContext typeaheadContext;
    TwitterSearchV2.SearchLanguagesProvider languagesProvider;
    TwitterSearchV2.SearchSafetySettingsProvider ? safetySettingsProvider;
    TwitterAdvancedSearchCore.AdvancedSearch function type (escaping) onLiveChange;
    TwitterAdvancedSearchCore.AdvancedSearch function type (escaping) onApply;
    () -> () onDismissWithoutApply;
    (() -> ())? onShare;
    nominal type descriptor for XDesignSystem.TrayManagerViewController ? trayManager;
    TwitterSearchV2.SearchFiltersTrayScreen ? rootContent;
    weak __C.UIViewController? userSelectionNavigationController;
    (() -> ())? reloadSelectionScreen;
    Swift.Int locationToggleGeneration;
    Swift.Bool? stagedRemovesBlockedAndMutedAccounts;
}

/* instance methods */
- (void)dismissUserSelection;
- (void)userSelectionViewControllerDidChangeUserSelection:(id)selection;
- (_Bool)userSelectionViewController:(id)controller canSelectUser:(id)user;
- (id)userSelectionViewController:(id)controller nonSelectableReasonForUser:(id)user;
- (id)init;

@end

#endif /* _TtC15TwitterSearchV226SearchFiltersTrayPresenter_h */
