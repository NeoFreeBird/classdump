//
#ifndef T1VoiceTabNUXTooltipViewController_h
#define T1VoiceTabNUXTooltipViewController_h
@import Foundation;

@class TFNViewController;

@interface T1VoiceTabNUXTooltipViewController : TFNViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *context;
    NSNumber"16@0:8 *highlightFrame;
    NSNumber"16@0:8 *completion;
    NSNumber"16@0:8 *$__lazy_storage_$_titleTextLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_subtitleTextLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_textStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_textStackBottomConstraint;
    NSNumber"16@0:8 *$__lazy_storage_$_lineImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_tabHightlightButton;
    NSNumber"16@0:8 *$__lazy_storage_$_closeBarButton;
}

/* instance methods */
- (id)initWithContext:(id)context highlightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame completion:(id /* block */)completion;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)didTapCloseButton;
- (void)didTapHighlightButton;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceTabNUXTooltipViewController_h */
