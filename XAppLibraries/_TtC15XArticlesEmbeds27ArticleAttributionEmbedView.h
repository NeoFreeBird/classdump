//
#ifndef _TtC15XArticlesEmbeds27ArticleAttributionEmbedView_h
#define _TtC15XArticlesEmbeds27ArticleAttributionEmbedView_h
@import Foundation;

#include "TUIFollowButtonV2Delegate-Protocol.h"
#include "XDSButtonLayoutDelegate-Protocol.h"

@class TwitterUISwift.FollowButtonV2 ?, TwitterUISwift.UserAttributionView, TwitterUISwift.UserAttributionView.Configuration, UIView, _$sSo23TFSTwitterCanonicalUser_p, _$ss5ErrorMp _$sSgc ->, _$syyc, _$syycSg;

@interface XArticlesEmbeds.ArticleAttributionEmbedView : UIView <XDSButtonLayoutDelegate, TUIFollowButtonV2Delegate> { // (Swift)
    /* instance variables */
    (() -> ())? onHeightInvalidated;
    __C.TFSTwitterCanonicalUser author;
    TwitterUISwift.UserAttributionView.Configuration attributionConfiguration;
    TwitterUISwift.UserAttributionView attributionView;
    TwitterUISwift.FollowButtonV2 ? followButton;
    () -> () onSelectAuthor;
    protocol descriptor for Swift.Error _$sSgc -> onFollowFailure;
}

/* instance methods */
- (void)buttonDidChangeIntrinsicSize:(id)size;
- (void)followButton:(id)button didPerform:(long long)perform success:(_Bool)success error:(id)error;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapAuthor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC15XArticlesEmbeds27ArticleAttributionEmbedView_h */
