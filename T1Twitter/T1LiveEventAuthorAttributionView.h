//
#ifndef T1LiveEventAuthorAttributionView_h
#define T1LiveEventAuthorAttributionView_h
@import Foundation;

#include "T1LiveEventAuthorAttributionTheme-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSLayoutConstraint, NSString, TFNBadgesImageView, TIPImagePipeline, TUIAvatarImageView, TUIUserBadger, UILabel, UIView;

@interface T1LiveEventAuthorAttributionView : UIView <TFNLayoutMetricsEnvironment>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) NSLayoutConstraint *avatarHeightConstraint;
@property (retain, nonatomic) TUIAvatarImageView *avatarImageView;
@property (retain, nonatomic) UILabel *fullNameLabel;
@property (retain, nonatomic) TFNBadgesImageView *badgesImageView;
@property (retain, nonatomic) UILabel *handleLabel;
@property (retain, nonatomic) id <TFSTwitterCanonicalUser> user;
@property (retain, nonatomic) id <T1LiveEventAuthorAttributionTheme> theme;
@property (retain, nonatomic) TIPImagePipeline *imagePipeline;
@property (retain, nonatomic) TUIUserBadger *userBadger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)_t1_setupLabels;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)fontSizeChanged;

@end

#endif /* T1LiveEventAuthorAttributionView_h */
