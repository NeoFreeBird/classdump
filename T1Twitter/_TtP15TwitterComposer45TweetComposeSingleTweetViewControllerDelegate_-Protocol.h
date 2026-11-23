//
#ifndef _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerDelegate__Protocol_h
#define _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerDelegate__Protocol_h
@import Foundation;

#include "TFNTwitterCompositionAttachmentsDelegate-Protocol.h"

@protocol TwitterComposer.TweetComposeSingleTweetViewControllerDelegate <TFNTwitterCompositionAttachmentsDelegate>

@required

@optional

@property (readonly, nonatomic) _Bool isCommunityRestricted;

/* optional instance methods */
- (void)singleTweetViewControllerDidChange:(id)change;
- (void)singleTweetViewControllerDidTapOnTweet:(id)tweet;
- (void)singleTweetViewControllerDidTapRemoveTweetButton:(id)button;
- (void)singleTweetViewController:(id)controller didSwitchToAccount:(id)account;
- (void)singleTweetViewControllerDidBecomeFirstResponder:(id)responder;
- (void)singleTweetViewController:(id)controller tweetTextDidChange:(id)change;
- (void)singleTweetViewController:(id)controller didAddAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didRemoveAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didUpdateFromOldAttachments:(id)attachments;
- (void)singleTweetViewController:(id)controller didTapAttachment:(id)attachment startingEditorTab:(long long)tab showsVideoQualitySelection:(_Bool)selection;
- (void)singleTweetViewController:(id)controller didTapAltTextForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didTapSensitiveWarningForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didTapLivePhotoToggleButtonForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller registerView:(id)view forTooltipIdentifier:(id)identifier;
- (void)singleTweetViewController:(id)controller didAddPollCard:(id)card;
- (void)singleTweetViewController:(id)controller didBeginEditingPollCard:(id)card;
- (void)singleTweetViewController:(id)controller didRemovePollCard:(id)card;
- (void)singleTweetViewController:(id)controller didChangePollCard:(id)card;
- (void)singleTweetViewController:(id)controller didShowCardPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveCardPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didShowVideoEmbedPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveVideoEmbedPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didShowCashTagPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveCashTagPreview:(id)preview;
- (void)singleTweetViewControllerDidShowQuotedStatus:(id)status;
- (void)singleTweetViewControllerDidRemoveQuotedStatus:(id)status;
- (void)singleTweetViewControllerDidTapGeoButton:(id)button;
- (void)singleTweetViewControllerDidTapGeoSearchButton:(id)button;
- (void)singleTweetViewControllerDidTapGeoButtonWithPlace:(id)place;
- (void)singleTweetViewControllerDidUpdatePlaceSelectionSupport:(id)support;
- (void)singleTweetViewControllerDidChangeSelectedPlace:(id)place;
- (void)singleTweetViewControllerDragStateDidChange:(id)change;
- (void)singleTweetViewController:(id)controller didUpdateMarkupTypesSelection:(id)selection;
- (void)singleTweetViewController:(id)controller didToggleMarkupTypes:(id)types;
- (void)singleTweetViewController:(id)controller didUpdateGrokImagineSessionState:(id)state;
- (void)singleTweetViewControllerDidChangeGrokImaginePostURLDownloadingState:(id)state;
- (void)singleTweetViewControllerWillOpenPaywall:(id)paywall;
- (void)singleTweetViewControllerDidChangeAudience:(id)audience;
- (void)singleTweetViewControllerUndoRedoStateDidChange:(id)change;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForAccessoryView;

@end

#endif /* _TtP15TwitterComposer45TweetComposeSingleTweetViewControllerDelegate__Protocol_h */
