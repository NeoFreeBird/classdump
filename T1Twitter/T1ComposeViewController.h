//
#ifndef T1ComposeViewController_h
#define T1ComposeViewController_h
@import Foundation;

#include "NSLayoutManagerDelegate-Protocol.h"
#include "PhotoEditorScribeManager.h"
#include "T1ComposeCardPreviewController.h"
#include "T1ComposeCardPreviewControllerDelegate-Protocol.h"
#include "T1ComposePollingCardPreviewController.h"
#include "T1ComposeTooltipViewController.h"
#include "T1ComposeViewControllerDelegate-Protocol.h"
#include "T1GrokImaginePostURLDetector.h"
#include "T1MediaAttachmentsViewController.h"
#include "T1TweetComposeScriber.h"
#include "T1TweetComposeScriberDelegate-Protocol.h"
#include "T1TweetComposeSocialContext.h"
#include "TCRComposeTextViewDelegate.h"
#include "TCRReplyRecipientsTrayDelegate-Protocol.h"
#include "TFNCircularCountProgressDataSource-Protocol.h"
#include "TFNDualPhaseCircularProgressViewDataSource-Protocol.h"
#include "TFNJumpBackToHomeTimelineBehavior-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNTooltipDelegate-Protocol.h"
#include "TFNTwitterAutoGeotaggerDelegate-Protocol.h"
#include "UIDropInteractionDelegate-Protocol.h"
#include "XPhotoEditorPhotoEditorViewControllerDelegate-Protocol.h"
#include "XVEVideoEditorHostDelegate-Protocol.h"
#include "_TtP15TwitterComposer34GrokImaginePostURLDetectorDelegate_-Protocol.h"
#include "_TtP15TwitterComposer38MediaAttachmentsViewControllerDelegate_-Protocol.h"

@class NSArray, NSString, TCRAutocompleteController, TCRAutocompleteViewController, TCRComposeAccountAvatarImageView, TFNButton, TFNCircularCountProgressView, TFNDualPhaseCircularProgressView, TFNTwitterAccount, TFNTwitterAutoGeotagger, TFNTwitterComposePlaceStore, TFNTwitterComposition, TFNTwitterCompositionAttachments, TFNTwitterCompositionGeotagSession, TFNTwitterStatus, TFNViewController, TFSMainThreadRunLoopDeferredTask, TFSTwitterLocation, TTMAsset, UIViewController, _TtC4Grok30GrokImaginePresentationManager, _TtC4Grok38GrokImagineLightboxPresentationManager;

@interface T1ComposeViewController : TFNViewController <T1ComposeCardPreviewControllerDelegate, TFNLayoutMetricsEnvironment, TFNTwitterAutoGeotaggerDelegate, XVEVideoEditorHostDelegate, TwitterComposer.MediaAttachmentsViewControllerDelegate, TCRReplyRecipientsTrayDelegate, TFNTooltipDelegate, NSLayoutManagerDelegate, TFNCircularCountProgressDataSource, TFNDualPhaseCircularProgressViewDataSource, T1TweetComposeScriberDelegate, TwitterComposer.GrokImaginePostURLDetectorDelegate, XPhotoEditorPhotoEditorViewControllerDelegate, TFNJumpBackToHomeTimelineBehavior, UIDropInteractionDelegate> {
    /* instance variables */
    TCRComposeTextViewDelegate *_textViewDelegate;
    struct { unsigned int once:1; unsigned int dismissing:1; unsigned int sent:1; } _flags;
    T1TweetComposeScriber *_scriber;
    T1MediaAttachmentsViewController *_attachmentsViewController;
    _Bool _skipScribeOfNextTextViewBeginEditingEvent;
    _Bool _nextPresentationRestoresFirstResponder;
    TFNTwitterComposePlaceStore *_placeStore;
    T1ComposeCardPreviewController *_cardPreviewController;
    T1ComposePollingCardPreviewController *_pollingCardPreviewController;
    T1GrokImaginePostURLDetector *_grokImaginePostURLDetector;
    TCRComposeAccountAvatarImageView *_avatarImageView;
    TFNButton *_draftsButton;
    TFNButton *_foundMediaButton;
    TFNButton *_galleryButton;
    TFNButton *_geoButton;
    TFNButton *_pollButton;
    TFNButton *_grokButton;
    TFNButton *_sendButton;
    TFNButton *_retweetButton;
    _Bool _isNoteTweetCreationEnabled;
}

@property (copy, nonatomic) id /* block */ dismissBlock;
@property (retain, nonatomic) TFNTwitterAutoGeotagger *autotagger;
@property (retain, nonatomic) TFNCircularCountProgressView *progressView;
@property (retain, nonatomic) TFNDualPhaseCircularProgressView *dualPhaseProgressView;
@property (retain, nonatomic) TFNTwitterCompositionAttachments *compositionAttachments;
@property (retain, nonatomic) TFSTwitterLocation *assetLocation;
@property (nonatomic) unsigned long long lastFirstResponderState;
@property (weak, nonatomic) UIViewController *lastFirstResponderPresentedViewController;
@property (nonatomic) _Bool needsToBecomeFirstResponderOnViewDidAppear;
@property (retain, nonatomic) TFNTwitterCompositionGeotagSession *geotagSession;
@property (nonatomic) _Bool showReplyContext;
@property (retain, nonatomic) NSString *replyContextText;
@property (retain, nonatomic) T1TweetComposeSocialContext *replySocialContext;
@property (copy, nonatomic) NSArray *overflowViewsArray;
@property (retain, nonatomic) TFSMainThreadRunLoopDeferredTask *currentOverflowViewsLayoutTask;
@property (retain, nonatomic) TFNTwitterStatus *status;
@property (readonly, nonatomic) T1ComposeTooltipViewController *tooltipViewController;
@property (readonly, nonatomic) TCRAutocompleteController *autocompleteController;
@property (retain, nonatomic) TTMAsset *xPhotoEditorEditingAttachment;
@property (retain, nonatomic) PhotoEditorScribeManager *xPhotoEditorScribeManager;
@property (retain, nonatomic) Grok.GrokImagineLightboxPresentationManager *grokImagineLightboxManager;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (weak, nonatomic) id <T1ComposeViewControllerDelegate> delegate;
@property (retain, nonatomic) TFNTwitterComposition *composition;
@property (copy, nonatomic) NSString *scribePage;
@property (nonatomic) _Bool disablePollsSupport;
@property (nonatomic) _Bool usesQuickComposer;
@property (nonatomic) _Bool dragAndDropEnabled;
@property (readonly, nonatomic) _Bool showReplySocialContext;
@property (copy, nonatomic) NSString *placeholderText;
@property (readonly, nonatomic) TCRAutocompleteViewController *autocompleteViewController;
@property (retain, nonatomic) Grok.GrokImaginePresentationManager *grokImaginePresentationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)dealloc;
- (void)compositionDidUpdate;
- (void)_updateAssetLocation:(id)location;
- (_Bool)isFoundMediaEnabled;
- (_Bool)canPerformAction:(SEL)action withSender:(id)sender;
- (void)handleSendTweetKeyCommand;
- (_Bool)_t1_canHandleSendTweetKeyCommand;
- (id)scribe;
- (id)scribeSection;
- (void)_scribeTextViewDidBeginEditing;
- (void)logExtendedMediaDetailsAction:(id)action element:(id)element extendedMediaDetails:(id)details;
- (_Bool)replyRecipientsTrayIsUserReferenceExcludable:(id)excludable;
- (_Bool)replyRecipientsTrayIsUserReferenceExcluded:(id)excluded;
- (_Bool)_t1_isReplyUserIDExcluded:(id)idexcluded;
- (void)replyRecipientsTrayDidIncludeUserReference:(id)reference;
- (void)replyRecipientsTrayDidExcludeUserReference:(id)reference;
- (void)includeReplyUserReference:(id)reference;
- (void)excludeReplyUserReference:(id)reference;
- (void)viewDidLoad;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)richTextView;
- (id)avatarImageView;
- (id)draftsButton;
- (id)galleryButton;
- (id)geoButton;
- (id)foundMediaButton;
- (id)pollButton;
- (id)grokButton;
- (id)_t1_buttonWithImageName:(id)name selectedImageName:(id)name;
- (id)retweetButton;
- (id)sendButton;
- (id)_t1_submitButtonWithTitle:(id)title;
- (void)updateGalleryButton;
- (void)_t1_updatePollComposeButton;
- (void)_t1_updateFoundMediaButton;
- (void)updateSendButton;
- (void)_t1_didTapAvatarImageButton:(id)button;
- (void)_t1_didTapDraftsButton:(id)button;
- (void)_t1_didTapFoundMediaButton:(id)button;
- (void)geoButtonPressed:(id)pressed;
- (void)galleryButtonPressed:(id)pressed;
- (void)pollButtonPressed:(id)pressed;
- (void)grokButtonPressed:(id)pressed;
- (void)_t1_didTapRetweetButton:(id)button;
- (void)_t1_didTapSendButton:(id)button;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidDisappear:(_Bool)disappear;
- (void)_ensureAssetsSavedToCameraRoll;
- (void)cancel:(id)cancel event:(id)event;
- (_Bool)canPerformPaste;
- (_Bool)performPaste;
- (_Bool)_t1_canPerfromPasteAsAttachment;
- (void)_setupAutocompleteController;
- (void)_checkLengthAndSend;
- (void)_t1_updateReplyContextText;
- (void)_t1_updateReplySocialContext;
- (void)refreshReplySocialContext;
- (id)replyRecipientUserReferences;
- (id)_t1_replySocialContext;
- (void)updateReplyContext;
- (void)updateReplySocialContext;
- (void)didTapReplySocialContext;
- (void)_t1_updateStatus;
- (void)_t1_addStatusObserver;
- (void)_t1_removeStatusObserver;
- (void)_t1_updateStatusObserver:(_Bool)observer;
- (void)_t1_didUpdateStatus;
- (void)_t1_presentReplyRecipientsTray;
- (id)replySocialContextView;
- (id)replySocialContextTooltipEventName;
- (void)triggerReplySocialContextTooltip;
- (void)_t1_initializeReplySocialContextTooltip;
- (void)_t1_cleanupReplySocalContextTooltip;
- (void)_setupCardPreview;
- (id)cardPreviewController;
- (void)_updateCardPreviewWithComposition:(id)composition;
- (void)_cardPreviewDidUpdate;
- (_Bool)isCardPreviewAllowed;
- (void)cardPreviewControllerDidStartFetching:(id)fetching;
- (void)cardPreviewController:(id)controller didShowCardPreviewWithCardData:(id)data;
- (void)cardPreviewController:(id)controller didRemoveCardPreviewForReason:(unsigned long long)reason withCardData:(id)data;
- (long long)cardPreviewDisplayMode:(id)mode;
- (_Bool)areMultipleCardURLsAllowed;
- (_Bool)cardPreviewController:(id)controller shouldRenderCardPreviewForURL:(id)url;
- (void)grokImaginePostURLDetector:(id)urldetector didDetectAsset:(id)asset forPostID:(id)id;
- (void)grokImaginePostURLDetectorDidChangeDownloadingState:(id)state;
- (id)pollingCardPreviewController;
- (void)_setupPollPreview;
- (void)_updatePollComposeWithComposition:(id)composition;
- (_Bool)shouldEnablePollComposeButton;
- (void)_handlePollShown;
- (void)_handlePollRemoved;
- (void)pollingCardPreviewController:(id)controller didShowPollComposeView:(id)view;
- (void)pollingCardPreviewController:(id)controller didRemovePollComposeView:(id)view;
- (void)pollingCardPreviewController:(id)controller didAddChoiceToPollComposeView:(id)view;
- (void)pollingCardPreviewController:(id)controller didChangeCompositionPollingCard:(id)card;
- (void)pollingCardPreviewController:(id)controller willShowDurationPicker:(id)picker;
- (void)pollingCardPreviewController:(id)controller didShowDurationPicker:(id)picker;
- (void)pollingCardPreviewController:(id)controller willHideDurationPicker:(id)picker;
- (void)pollingCardPreviewController:(id)controller didHideDurationPicker:(id)picker;
- (_Bool)installsAttachmentsPreview;
- (void)_setupPreviewForAttachments;
- (id)attachmentsViewController;
- (void)_updatePreviewForAttachments;
- (void)didPasteAttachment:(id)attachment;
- (void)addAttachment:(id)attachment;
- (void)_removeAttachment:(id)attachment;
- (void)_updateRichTextView;
- (void)_updateAssetLocationWhenRemovingAttachment;
- (void)attachMediaAsset:(id)asset sourceForScribe:(id)scribe;
- (void)_updateAssetSavedToLibraryForMediaAsset:(id)asset;
- (void)showDrafts;
- (void)selectComposeDraftsFromView:(id)view;
- (_Bool)shouldEnableFoundMediaButton;
- (_Bool)shouldEnableGalleryButton;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)_performGeoLookupWithCallback:(id /* block */)callback;
- (id)placeStore;
- (void)setPlaceStore:(id)store;
- (void)_autoGeotagComposition;
- (void)_handleAutotagWithLocation:(id)location;
- (void)geoAutotagger:(id)autotagger didCompleteWithPlace:(id)place;
- (void)_fetchVideoMonetizationSetting;
- (void)_selectedPlaceDidUpdate:(id)update;
- (void)_setAutotaggingStateEnabled:(_Bool)enabled;
- (void)_reloadGeoButtonState;
- (void)_updateGeoButtonStateForLoading:(_Bool)loading;
- (id)defaultPlaceholderText;
- (void)updatePlaceholderText;
- (id)currentComposerTextFont;
- (void)updateComposerTextFont;
- (void)tfn_fontSizeChanged;
- (void)_t1_updateProgressView;
- (void)textViewDidBeginEditing;
- (void)textViewDidEndEditing;
- (void)textDidChangeSelection;
- (void)textDidChange;
- (void)_handleTextViewChangeNotification:(id)notification;
- (void)videoEditor:(id)editor didFinishWithAsset:(id)asset;
- (void)videoEditorDidCancel:(id)cancel;
- (void)videoEditorDidFail:(id)fail;
- (_Bool)canEditPhotoMediaAsset:(id)asset;
- (void)presentPhotoEditorWithMediaAsset:(id)asset;
- (_Bool)presentVideoTrimmerWithMediaAsset:(id)asset startingEditorTab:(long long)tab showsVideoQualitySelection:(_Bool)selection;
- (_Bool)canTrimVideoMediaAsset:(id)asset;
- (void)_presentAltTextViewControllerWithMediaAsset:(id)asset;
- (void)_presentXPhotoEditorAltTextWithMediaAsset:(id)asset;
- (void)_presentXPhotoEditorWithMediaAsset:(id)asset;
- (void)_applyPhotoEditorZoomTransitionToNavigationController:(id)controller;
- (void)_configurePhotoEditorScribeManager:(id)manager;
- (void)photoEditor:(id)editor didFinishWith:(id)with;
- (void)_applyPhotoEditorResult:(id)result;
- (void)photoEditorDidCancel:(id)cancel;
- (_Bool)photoEditorCanEditWithGrok:(id)grok;
- (void)photoEditor:(id)editor didRequestGrokEditWithImage:(id)image;
- (void)_presentAltTextEducationPromptForMediaAsset:(id)asset;
- (void)altTextViewControllerDidCancel:(id)cancel;
- (void)altTextViewController:(id)controller didCompleteWithAltText:(id)text;
- (_Bool)attachmentsViewController:(id)controller shouldShowGrokImagineButtonForAttachment:(id)attachment;
- (_Bool)attachmentsViewController:(id)controller shouldShowEditButtonForAttachment:(id)attachment;
- (_Bool)attachmentsViewController:(id)controller shouldShowAltTextButtonForAttachment:(id)attachment;
- (_Bool)_t1_attachmentOpensPhotoEditor:(id)editor;
- (_Bool)attachmentsViewController:(id)controller shouldShowLivePhotoToggleButtonForAttachment:(id)attachment;
- (void)attachmentsViewController:(id)controller didTapAttachment:(id)attachment startingEditorTab:(long long)tab showsVideoQualitySelection:(_Bool)selection;
- (void)editTappedAttachment:(id)attachment;
- (_Bool)_isVideoEditorAttachment:(id)attachment;
- (_Bool)_t1_isVideoImportForScribe:(id)scribe;
- (_Bool)canEditTappedAttachment:(id)attachment;
- (void)_editTappedAttachment:(id)attachment startingEditorTab:(long long)tab showsVideoQualitySelection:(_Bool)selection;
- (void)attachmentsViewController:(id)controller didTapRemoveAttachment:(id)attachment;
- (void)removeTappedAttachment:(id)attachment;
- (void)attachmentsViewController:(id)controller didTapAltTextForAttachment:(id)attachment;
- (double)visibleLowerBoundForAttachmentsViewController:(id)controller;
- (void)attachmentsViewController:(id)controller registerView:(id)view forTooltipIdentifier:(id)identifier;
- (void)attachmentsViewControllerDidScroll:(id)scroll;
- (_Bool)attachmentsViewController:(id)controller shouldShowInlineCallout:(long long)callout;
- (_Bool)isWorthSaving;
- (_Bool)isWorthSending;
- (_Bool)isDismissing;
- (_Bool)areAttachmentsAllowed;
- (void)_t1_setupRichTextView;
- (void)_t1_updateTextViewWithCompositionText;
- (long long)currentCharacterCountForCircularCountProgressView:(id)view;
- (long long)remainingCharacterCountForCircularCountProgressView:(id)view;
- (long long)warningCharacterLimitForCircularCountProgressView:(id)view;
- (long long)currentCharacterCountFor:(id)_for;
- (long long)initialPhaseLimitFor:(id)_for;
- (long long)initialPhaseWarningCountFor:(id)_for;
- (long long)maximumCharacterLimitFor:(id)_for;
- (long long)maximumCharacterWarningCountFor:(id)_for;
- (void)layoutManager:(id)manager didCompleteLayoutForTextContainer:(id)container atEnd:(_Bool)end;
- (void)_t1_layoutOverflowHighlight;
- (void)_t1_showOverflowViewsFromIndex:(long long)index;
- (void)_t1_deferred_showOverflowViewsFromIndex:(long long)index;
- (void)_t1_hideOverflowViews;
- (void)presentFoundMediaViewControllerFromView:(id)view;
- (id)scribeSectionForMediaAttachment;
- (void)accountDidUpdate:(id)update;
- (void)selectComposeAccountFromView:(id)view;
- (void)saveDraft;
- (void)saveDraft:(long long)draft;
- (void)removeDraft;
- (void)replaceCompositionAttachments:(id)attachments animated:(_Bool)animated;
- (void)didAddAttachment:(id)attachment;
- (void)didReplaceAttachment:(id)attachment withAttachment:(id)attachment;
- (void)didRemoveAttachment:(id)attachment;
- (void)autocompleteControllerDidBegin:(id)begin;
- (void)autocompleteControllerDidEnd:(id)end;
- (void)autocompleteController:(id)controller didReceiveResult:(id)result;
- (void)autocompleteViewController:(id)controller scrollViewDidScroll:(id)scroll;
- (void)autocompleteViewController:(id)controller didSelectItem:(id)item;
- (void)showAutocomplete:(_Bool)autocomplete;
- (void)send;
- (void)dismiss:(_Bool)dismiss;
- (void)_t1_updateQuotedStatus;
- (void)_t1_textViewAcceptCurrentTextIfNeeded;
- (void)becomeTextViewFirstResponder;
- (void)resignTextViewFirstResponder;
- (void)_t1_storeLastFirstResponderStateAndResignFirstResponderForPresentedViewController:(id)controller;
- (void)_t1_restoreLastFirstResponderStateWhenViewWillAppear;
- (void)_t1_restoreLastFirstResponderStateWhenViewDidAppear;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)container;
- (_Bool)allowsJumpBackToHomeTimeline;
- (void)presentFullscreenModalViewController:(id)controller;
- (void)dismissModalViewController:(id)controller;
- (void)markNextPresentationRestoresFirstResponder;
- (void)_t1_presentedWillPresentViewController:(id)controller;
- (_Bool)_t1_containsViewController:(id)controller;
- (id)tweetComposerScriberActiveComposition:(id)composition;
- (long long)tweetComposerScriberRemainingCharacterCount:(id)count;
- (id)tweetComposerScriberContext:(id)context;
- (id)tweetComposerScriberSessionConfig:(id)config;
- (id)tweetComposerScriberInputLocaleIdentifier:(id)identifier;
- (_Bool)isDragAndDropEnabled;

@end

#endif /* T1ComposeViewController_h */
