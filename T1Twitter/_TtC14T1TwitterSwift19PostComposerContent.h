//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift19PostComposerContent_h
#define _TtC14T1TwitterSwift19PostComposerContent_h
@import Foundation;

#include "T1ComposeRichTextView.h"
#include "T1PersistentComposeViewDelegate-Protocol.h"
#include "T1PersistentComposeViewing-Protocol.h"
#include "T1TweetComposeSocialContext.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSArray, NSString, Swift.Bool, T1TwitterSwift.PostComposerAttachmentsView, T1TwitterSwift.PostComposerContent.ReplyQuote ?, T1TwitterSwift.PostComposerFullComposerTransition ?, T1TwitterSwift.PostComposerRichTextView, TFNTwitterAccount, UIControl, UIFont, UIPanGestureRecognizer, UIView, _$s10Foundation21NSKeyValueObservationCMn ?, _$s12CoreGraphics7CGFloatVMn _$sSgycSg, _$s13QuickComposer0aB6SystemCMn ?, _$s13QuickComposer0aB7ContextCMn ?, _$s13QuickComposer0aB7MetricsVMn, _$s13QuickComposer0aB9ContentIDVMn, _$s14TwitterUISwift13TUIUserBadgerCMn ?, _$s15TwitterComposer04PostB6TuningO6ValuesVMn, _$s15TwitterComposer14ComposeBarKindOMn, _$s23QuickComposerComponents0aB10AvatarViewCMn, _$s23QuickComposerComponents0aB15SuggestionsCardCMn, _$s23QuickComposerComponents0aB16AvatarHeaderViewCMn, _$s23QuickComposerComponents0aB18ThumbnailStackViewCMn, _$s23QuickComposerComponents0abC7MetricsVMn, _$s7Combine14AnyCancellableCMn ?, _$sSDySSSo25TTSAutocompleteResultItem_pG, _$sSSSg, _$sSa -> T1TwitterSwift.PostComposerContent.RestingThumbnail, _$sSaySo14TFNTwitterUserCGSg, _$sSaySo17TCRReplyRecipientCGSg, _$sSaySo18NSLayoutConstraintCG, _$sSaySo6UIViewCG, _$sSh -> _$ss5Int64VMn, _$sSo10NSMapTableCySo8NSStringCSo18TUIAvatarImageViewCG, _$sSo17TFNTwitterAccountCSg, _$sSo18NSLayoutConstraintCSg, _$sSo18TUIAvatarImageViewC, _$sSo22TTACoreStatusViewModel_pSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo27T1TweetComposeSocialContextCSg, _$sSo31T1PersistentComposeViewDelegate_pSgXw, _$sSo35T1TweetComposeSocialContextTextViewC, _$sSo6UIFontCSg, _$sSo6UIViewC, _$sSo8UIButtonC, _$sSo9TFNButtonC, _$sSo9UIControlCSgXw, _$syycSg;

@interface T1TwitterSwift.PostComposerContent : UIView <T1PersistentComposeViewing> { // (Swift)
    /* instance variables */
    nominal type descriptor for QuickComposer.QuickComposerContentID id;
    nominal type descriptor for TwitterComposer.PostComposerTuning.Values tuning;
    Swift.Bool isRichTextViewScrollDisabled;
    Swift.Bool isCollapsedWhenUnfocused;
    Swift.Bool isReplySocialContextHidden;
    Swift.Bool isButtonsHidden;
    (() -> ())? onOverlayRoomChange;
    Swift.Bool declaresTabBarAccessory;
    (() -> ())? onTabBarAccessoryChange;
    Swift.Bool isEditorFocused;
    Swift.Bool usesFlatBar;
    Swift.Bool isBound;
    (() -> ())? onBind;
    (() -> ())? onUnbind;
    nominal type descriptor for QuickComposer.QuickComposerSystem ? $__lazy_storage_$_standaloneSystem;
    nominal type descriptor for QuickComposer.QuickComposerSystem ? storedSystem;
    nominal type descriptor for Combine.AnyCancellable ? captionFontsCancellable;
    nominal type descriptor for QuickComposer.QuickComposerMetrics metrics;
    nominal type descriptor for QuickComposer.QuickComposerContext ? context;
    nominal type descriptor for QuickComposerComponents.QuickComposerComponentsMetrics componentsMetrics;
    T1TwitterSwift.PostComposerRichTextView glassRichTextView;
    T1TwitterSwift.PostComposerAttachmentsView attachmentsStrip;
    nominal type descriptor for QuickComposerComponents.QuickComposerThumbnailStackView restingAttachmentsPreview;
    __C.UIView restingAddButtonStandIn;
    Swift.Array -> T1TwitterSwift.PostComposerContent.RestingThumbnail restingThumbnails;
    __C.T1TweetComposeSocialContextTextView captionTextView;
    __C.TUIAvatarImageView avatarImageView;
    nominal type descriptor for QuickComposerComponents.QuickComposerAvatarView avatar;
    nominal type descriptor for QuickComposerComponents.QuickComposerAvatarHeaderView rowHeader;
    T1TwitterSwift.PostComposerContent.ReplyQuote ? replyQuote;
    __C.TFNButton expandButton;
    __C.UIButton expandGlyphButton;
    __C.UIImpactFeedbackGenerator expandTapHaptics;
    __C.UIButton plusButton;
    nominal type descriptor for QuickComposerComponents.QuickComposerSuggestionsCard suggestions;
    nominal type descriptor for Foundation.NSKeyValueObservation ? galleryEnabledObservation;
    nominal type descriptor for Foundation.NSKeyValueObservation ? contentSizeObservation;
    Swift.Bool isTextChangePending;
    [__C.NSLayoutConstraint] barConstraints;
    __C.NSLayoutConstraint? barBottomConstraint;
    __C.NSLayoutConstraint? barLeadingConstraint;
    __C.NSLayoutConstraint? barTrailingConstraint;
    Swift.Bool isTogglingRecipient;
    T1TwitterSwift.PostComposerFullComposerTransition ? fullComposerTransition;
    Swift.Set -> nominal type descriptor for Swift.Int64 requestedRecipientIDs;
    __C.NSMapTable<__C.NSString, __C.TUIAvatarImageView> recipientAvatarViews;
    [Swift.String : __C.TTSAutocompleteResultItem] autocompleteItemsByID;
    nominal type descriptor for TwitterUISwift.TUIUserBadger ? $__lazy_storage_$_userBadger;
    (() -> ())? prepareForEditing;
    nominal type descriptor for CoreGraphics.CGFloat _$sSgycSg availableHeightAboveBar;
}

@property (nonatomic, readonly) NSArray *keyCommands;
@property (nonatomic) long long composeBarKind;
@property (nonatomic, weak) id <T1PersistentComposeViewDelegate> delegate;
@property (nonatomic) _Bool showsOnlyPlaceholder;
@property (nonatomic) _Bool hidesTopBorder;
@property (nonatomic, retain) UIFont *placeholderTextFont;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic, readonly) T1ComposeRichTextView *richTextView;
@property (nonatomic) _Bool richTextViewScrollDisabled;
@property (nonatomic) _Bool collapsedWhenUnfocused;
@property (nonatomic, readonly) UIView *replySocialContextView;
@property (nonatomic, retain) T1TweetComposeSocialContext *replySocialContext;
@property (nonatomic) _Bool replySocialContextHidden;
@property (nonatomic) _Bool buttonsHidden;
@property (nonatomic, copy) NSArray *leadingToolbarViews;
@property (nonatomic, weak) UIControl *galleryButton;
@property (nonatomic, weak) UIControl *foundMediaButton;
@property (nonatomic, retain) id <TTACoreStatusViewModel> replyStatusViewModel;
@property (nonatomic, copy) NSArray *trailingToolbarViews;
@property (nonatomic, retain) TFNTwitterAccount *account;
@property (nonatomic, copy) NSArray *attachments;
@property (nonatomic) _Bool accountSwitchingDisabled;
@property (nonatomic, copy) NSArray *unfollowingUsers;
@property (nonatomic, copy) NSArray *replyRecipients;
@property (nonatomic) _Bool hasDraftContent;
@property (nonatomic) double restingGapAboveAnchor;
@property (nonatomic, readonly) UIPanGestureRecognizer *barVerticalPanGestureRecognizer;
@property (nonatomic) _Bool isExpandMorphEnabled;

/* instance methods */
- (void)setAutocompleteItems:(id)items;
- (void)moveSuggestionHighlightUp;
- (void)moveSuggestionHighlightDown;
- (void)commitHighlightedSuggestion;
- (void)commitHighlightedOrBestSuggestion;
- (void)dismissSuggestionsFromKeyboard;
- (_Bool)isRichTextViewScrollDisabled;
- (_Bool)isCollapsedWhenUnfocused;
- (_Bool)isReplySocialContextHidden;
- (_Bool)isButtonsHidden;
- (struct CGSize { double x0; double x1; })preferredSizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)willSendReply;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame usesFlatBar:(_Bool)bar;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)contentSizeCategoryDidChange;
- (void)textStorageDidProcessEditing;
- (void)textViewFocusDidChange;
- (void)accountsDidChange;

@end

#endif /* _TtC14T1TwitterSwift19PostComposerContent_h */
