//
#ifndef TCMCommunityTweetInfoView_h
#define TCMCommunityTweetInfoView_h
@import Foundation;

#include "TCMCommunityTweetInfoViewDelegate-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"

@class UIView;

@interface TCMCommunityTweetInfoView : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 hasRules;
    @40@0:8:16@24@32 isReply;
    @40@0:8:16@24@32 broadcastToFollowersEnabled;
    @40@0:8:16@24@32 broadcastToFollowersSticky;
    @40@0:8:16@24@32 accountID;
    @40@0:8:16@24@32 $__lazy_storage_$_contentViewLeadingConstraint;
    @40@0:8:16@24@32 $__lazy_storage_$_contentView;
    @40@0:8:16@24@32 $__lazy_storage_$_broadcastToFollowersView;
    @40@0:8:16@24@32 $__lazy_storage_$_broadcastToFollowersCheckmark;
    @40@0:8:16@24@32 $__lazy_storage_$_infoBarView;
    @40@0:8:16@24@32 $__lazy_storage_$_iconView;
    @40@0:8:16@24@32 $__lazy_storage_$_textView;
    @40@0:8:16@24@32 rulesStringSpan;
    @40@0:8:16@24@32 $__lazy_storage_$_topSeparator;
    @40@0:8:16@24@32 $__lazy_storage_$_bottomSeparator;
}

@property (nonatomic, readonly) _Bool shouldBroadcastToFollowers;
@property (nonatomic) double leadingContentInset;
@property (nonatomic, weak) id <TCMCommunityTweetInfoViewDelegate> delegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rulesTextRect;
@property (nonatomic, retain) UIView *topSeparator;
@property (nonatomic, retain) UIView *bottomSeparator;

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didTapView;
- (void)didTapBroadcastToFollowers;
- (void)configureWithCommunityModel:(id)model compositions:(id)compositions;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)didMoveToWindow;

@end

#endif /* TCMCommunityTweetInfoView_h */
