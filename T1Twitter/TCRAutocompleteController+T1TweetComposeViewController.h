//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRAutocompleteController_T1TweetComposeViewController_h
#define TCRAutocompleteController_T1TweetComposeViewController_h
@import Foundation;

#include "MASMediaAttachmentSettingsViewControllerDelegate-Protocol.h"
#include "PhotoEditorScribeManager.h"
#include "T1AISignatureDetectionScribeSink-Protocol.h"
#include "T1AltTextViewControllerDelegate-Protocol.h"
#include "T1CameraCaptureViewControllerDelegate-Protocol.h"
#include "T1ComposeDropManager.h"
#include "T1ComposeDropManagerDelegate-Protocol.h"
#include "T1ComposeMorphDestination-Protocol.h"
#include "T1ComposeSessionConfig.h"
#include "T1ComposerAttachmentDelegate-Protocol.h"
#include "T1SimpleQuickPromoteFlowPresenterDelegate-Protocol.h"
#include "T1TweetComposeConversationControlButton.h"
#include "T1TweetComposeScriber.h"
#include "T1TweetComposeScriberDelegate-Protocol.h"
#include "T1TweetComposeSingleTweetViewController.h"
#include "T1TweetComposeViewControllerDelegate-Protocol.h"
#include "TCMCommunityTweetInfoViewDelegate-Protocol.h"
#include "TCRAutocompleteControllerDelegate-Protocol.h"
#include "TCRComposeUndoViewDelegate-Protocol.h"
#include "TCRComposerAddToThreadViewDelegate-Protocol.h"
#include "TCRComposerGlassHeaderDelegate-Protocol.h"
#include "TCRComposerToolbarViewDelegate-Protocol.h"
#include "TCRTweetComposeAutocompleteViewControllerDelegate-Protocol.h"
#include "TCRTweetComposerTimerViewDelegate-Protocol.h"
#include "TFNTooltipDelegate-Protocol.h"
#include "TFNTwitterCompositionAttachmentsDelegate-Protocol.h"
#include "TSAComposerBoostUpsellHost-Protocol.h"
#include "TTDTweetDraftListViewControllerDelegate-Protocol.h"
#include "TUINativePhotoPickerDelegate-Protocol.h"
#include "TUITweetAudienceSelectionModelObserver-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"
#include "XPhotoEditorPhotoEditorViewControllerDelegate-Protocol.h"
#include "XVEVideoEditorHostDelegate-Protocol.h"
#include "_TtP15TwitterComposer21ComposerSeamProviders_-Protocol.h"
#include "_TtP15TwitterComposer23ComposerThreadContainer_-Protocol.h"
#include "_TtP15TwitterComposer39TweetComposeTableViewControllerDelegate_-Protocol.h"
#include "_TtP20TwitterCommunitiesUI41UnableToTweetPromptViewControllerDelegate_-Protocol.h"
#include "_TtP4Grok38GrokImaginePresentationManagerDelegate_-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSNumber, NSString, TCMCommunityTweetInfoView, TCMCommunityTweetVisibilityPromptInteraction, TCRAudienceTweetInfoView, TCRAutocompleteController, TCRComposeUndoView, TCRComposerAddToThreadView, TCRComposerGlassHeader, TCRComposerGlassHeaderPost, TCRComposerHeaderAccessorySlot, TCRComposerInlineUpsellBannerView, TCRComposerSchedulePickerPresenter, TCRComposerScheduledBannerView, TCRComposerToolbarView, TCRCompositionState, TCRTweetComposeAutocompleteViewController, TCRTweetComposeTimerView, TCRTweetComposeTooltipper, TFNButton, TFNButtonBarView, TFNCircularCountProgressView, TFNDragDropIndicationView, TFNDualPhaseCircularProgressView, TFNInlineCalloutView, TFNTwitterAccount, TFNTwitterComposition, TFNTwitterStatus, TFNViewController, TSAComposerBoostUpsell, TSAQuickPromoteDraftRestrictions, TTDTweetDraftListViewController, TTMAsset, TUITweetAudienceSelectionModel, UIBarButtonItem, UIButton, UIScrollView, UIView, UIViewController, XDSButton, XNAVConfiguration, _TtC4Grok17GrokFeatureAccess, _TtC4Grok30GrokImaginePresentationManager, _TtC4Grok38GrokImagineLightboxPresentationManager;

@interface TCRAutocompleteController (T1TweetComposeViewController)

/* instance methods */
- (void)setTweetComposeSingleTweetViewController:(id)controller;
- (id)tweetComposeSingleTweetViewController;

@end

#endif /* TCRAutocompleteController_T1TweetComposeViewController_h */
