//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC17CommunityAnalysisP33_335FF39E15A972A5612A4C44F4BA1D0D16SheetContentView_h
#define _TtC17CommunityAnalysisP33_335FF39E15A972A5612A4C44F4BA1D0D16SheetContentView_h
@import Foundation;

@class UIView;

@interface CommunityAnalysis.(SheetContentView in _335FF39E15A972A5612A4C44F4BA1D0D) : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 onClose;
    @40@0:8:16@24@32 onToggleWork;
    @40@0:8:16@24@32 onHeart;
    @40@0:8:16@24@32 onSuggest;
    @40@0:8:16@24@32 onCancelSuggestion;
    @40@0:8:16@24@32 onEditSuggestion;
    @40@0:8:16@24@32 onDeleteSuggestion;
    @40@0:8:16@24@32 onRetryLoad;
    @40@0:8:16@24@32 onHeightChange;
    @40@0:8:16@24@32 suggestionView;
    @40@0:8:16@24@32 footerView;
    @40@0:8:16@24@32 isSuggestionOpen;
    @40@0:8:16@24@32 closeButton;
    @40@0:8:16@24@32 titleLabel;
    @40@0:8:16@24@32 noteView;
    @40@0:8:16@24@32 workView;
    @40@0:8:16@24@32 divider;
    @40@0:8:16@24@32 workButton;
    @40@0:8:16@24@32 errorLabel;
    @40@0:8:16@24@32 placeholderLabel;
    @40@0:8:16@24@32 updatedLabel;
    @40@0:8:16@24@32 revisionsButton;
    @40@0:8:16@24@32 heartButton;
    @40@0:8:16@24@32 suggestButton;
    @40@0:8:16@24@32 cancelButton;
    @40@0:8:16@24@32 submittedButton;
    @40@0:8:16@24@32 moreButton;
    @40@0:8:16@24@32 summary;
    @40@0:8:16@24@32 showsWork;
    @40@0:8:16@24@32 saveError;
    @40@0:8:16@24@32 loadError;
    @40@0:8:16@24@32 isSaving;
    @40@0:8:16@24@32 canRate;
    @40@0:8:16@24@32 heartIcons;
    @40@0:8:16@24@32 suggestionMenu;
    @40@0:8:16@24@32 suggestionMenuDismiss;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didRetryLoad;
- (void)traitCollectionDidChange:(id)change;
- (void)didToggleSuggestionMenu;
- (void)didClose;
- (void)didToggleWork;
- (void)didOpenRevisions;
- (void)didHeart;
- (void)didSuggest;
- (void)didCancelSuggestion;

@end

#endif /* _TtC17CommunityAnalysisP33_335FF39E15A972A5612A4C44F4BA1D0D16SheetContentView_h */
