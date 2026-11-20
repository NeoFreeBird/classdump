//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC15TwitterComposer29ComposerThreadDelegateAdapter_h
#define _TtC15TwitterComposer29ComposerThreadDelegateAdapter_h
@import Foundation;

#include "_TtP15TwitterComposer45TweetComposeSingleTweetViewControllerDelegate_-Protocol.h"
#include "_TtP15TwitterComposer46TweetComposeReplyContextViewControllerDelegate_-Protocol.h"

@class NSObject, TwitterComposer.ComposerThreadPresenter ?, TwitterComposer0B15ThreadContainer_pSgXw, TwitterComposer39TweetComposeTableViewControllerDelegate_pSgXw;

@interface TwitterComposer.ComposerThreadDelegateAdapter : NSObject <TwitterComposer.TweetComposeReplyContextViewControllerDelegate, TwitterComposer.TweetComposeSingleTweetViewControllerDelegate> { // (Swift)
    /* instance variables */
    TwitterComposer0B15ThreadContainer_pSgXw container;
    TwitterComposer39TweetComposeTableViewControllerDelegate_pSgXw parentDelegate;
    TwitterComposer.ComposerThreadPresenter ? presenter;
}

@property (nonatomic, readonly) _Bool isCommunityRestricted;

/* instance methods */
- (void)replyContextViewController:(id)controller didUpdateRepliedToStatus:(id)status;
- (void)singleTweetViewControllerDidChangeAudience:(id)audience;
- (void)singleTweetViewControllerDidTapOnTweet:(id)tweet;
- (void)singleTweetViewControllerDidTapRemoveTweetButton:(id)button;
- (void)singleTweetViewController:(id)controller didSwitchToAccount:(id)account;
- (void)singleTweetViewControllerDidBecomeFirstResponder:(id)responder;
- (void)singleTweetViewController:(id)controller tweetTextDidChange:(id)change;
- (void)singleTweetViewControllerDidChange:(id)change;
- (void)singleTweetViewControllerDidShowQuotedStatus:(id)status;
- (void)singleTweetViewControllerDidRemoveQuotedStatus:(id)status;
- (void)singleTweetViewController:(id)controller didAddAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didRemoveAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didUpdateFromOldAttachments:(id)attachments;
- (void)singleTweetViewController:(id)controller didAddPollCard:(id)card;
- (void)singleTweetViewController:(id)controller didRemovePollCard:(id)card;
- (void)singleTweetViewController:(id)controller didChangePollCard:(id)card;
- (void)singleTweetViewController:(id)controller didShowCardPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveCardPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didShowVideoEmbedPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didRemoveVideoEmbedPreview:(id)preview;
- (void)singleTweetViewController:(id)controller didTapAttachment:(id)attachment startingEditorTab:(long long)tab showsVideoQualitySelection:(_Bool)selection;
- (void)singleTweetViewController:(id)controller didTapAltTextForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didTapSensitiveWarningForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller didTapLivePhotoToggleButtonForAttachment:(id)attachment;
- (void)singleTweetViewController:(id)controller registerView:(id)view forTooltipIdentifier:(id)identifier;
- (void)singleTweetViewController:(id)controller didBeginEditingPollCard:(id)card;
- (void)singleTweetViewControllerDidTapGeoButton:(id)button;
- (void)singleTweetViewControllerDidTapGeoSearchButton:(id)button;
- (void)singleTweetViewControllerDidTapGeoButtonWithPlace:(id)place;
- (void)singleTweetViewControllerDidUpdatePlaceSelectionSupport:(id)support;
- (void)singleTweetViewControllerDidChangeSelectedPlace:(id)place;
- (void)singleTweetViewControllerDragStateDidChange:(id)change;
- (void)singleTweetViewController:(id)controller didUpdateMarkupTypesSelection:(id)selection;
- (void)singleTweetViewController:(id)controller didToggleMarkupTypes:(id)types;
- (void)singleTweetViewControllerDidChangeGrokImaginePostURLDownloadingState:(id)state;
- (void)singleTweetViewControllerWillOpenPaywall:(id)paywall;
- (void)singleTweetViewControllerUndoRedoStateDidChange:(id)change;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentRectForAccessoryView;
- (_Bool)attachmentsShouldAllowMixedMedia;
- (unsigned long long)attachmentsMaxNumberOfMediaItems;
- (id)init;

@end

#endif /* _TtC15TwitterComposer29ComposerThreadDelegateAdapter_h */
