//
#ifndef TTAStatusAuthorViewLayoutDelegate_h
#define TTAStatusAuthorViewLayoutDelegate_h
@import Foundation;

#include "TFNLayoutableViewLayoutDelegate-Protocol.h"

@class NSObject, NSString;

@interface TTAStatusAuthorViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>

@property (nonatomic) struct CGSize { double x0; double x1; } designatorBadgeOffsetSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedLayoutDelegate;

/* instance methods */
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account width:(double)width layoutMetrics:(id)metrics withPreviousLayoutState:(id)state cardAttachmentDecider:(id /* block */)decider;
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account hasSocialText:(_Bool)text displayType:(long long)type width:(double)width layoutMetrics:(id)metrics withPreviousLayoutState:(id)state cardAttachmentDecider:(id /* block */)decider;
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account hasSocialText:(_Bool)text displayType:(long long)type width:(double)width layoutMetrics:(id)metrics withPreviousLayoutState:(id)state cardAttachmentDecider:(id /* block */)decider hidesAdLabel:(_Bool)label;
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account hasSocialText:(_Bool)text displayType:(long long)type width:(double)width layoutMetrics:(id)metrics withPreviousLayoutState:(id)state cardAttachmentDecider:(id /* block */)decider hidesAdLabel:(_Bool)label hidesFullName:(_Bool)name;
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account hasSocialText:(_Bool)text displayType:(long long)type width:(double)width layoutMetrics:(id)metrics withPreviousLayoutState:(id)state forceLayout:(_Bool)layout cardAttachmentDecider:(id /* block */)decider hidesAdLabel:(_Bool)label hidesFullName:(_Bool)name;
- (struct CGSize { double x0; double x1; })sizeForLayoutState:(id)state;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })baselineEdgeInsetsForLayoutState:(id)state;
- (_Bool)layoutState:(id)state isValidForViewModel:(id)model options:(unsigned long long)options account:(id)account width:(double)width layoutMetrics:(id)metrics cardAttachmentDecider:(id /* block */)decider;
- (_Bool)layoutState:(id)state isValidForViewModel:(id)model options:(unsigned long long)options account:(id)account displayType:(long long)type width:(double)width layoutMetrics:(id)metrics cardAttachmentDecider:(id /* block */)decider hidesAdLabel:(_Bool)label;
- (_Bool)layoutState:(id)state isValidForViewModel:(id)model options:(unsigned long long)options account:(id)account displayType:(long long)type width:(double)width layoutMetrics:(id)metrics cardAttachmentDecider:(id /* block */)decider hidesAdLabel:(_Bool)label hidesFullName:(_Bool)name;
- (void)_performLayout:(id)layout hasSocialText:(_Bool)text timestamp:(id)timestamp width:(double)width cardAttachmentDecider:(id /* block */)decider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_centerUsernameRowForLayoutState:(id)state;
- (void)_t1_layoutTimestampAndSeparator:(id)separator withSeparatorSize:(struct CGSize { double x0; double x1; })size verticalOffset:(double)offset firstLaneFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame secondLineFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)_t1_layoutFollowControl:(id)control withSeparatorSize:(struct CGSize { double x0; double x1; })size withFollowControlSize:(struct CGSize { double x0; double x1; })size caretSize:(struct CGSize { double x0; double x1; })size totalWidth:(double)width;
- (void)_t1_layoutSubscribeButton:(id)button withSubscribeButtonSize:(struct CGSize { double x0; double x1; })size caretSize:(struct CGSize { double x0; double x1; })size totalWidth:(double)width;
- (void)_t1_layoutPromoteButton:(id)button withPromoteButtonSize:(struct CGSize { double x0; double x1; })size caretSize:(struct CGSize { double x0; double x1; })size totalWidth:(double)width;
- (void)_t1_layoutAnalyticsButton:(id)button withAnalyticsButtonSize:(struct CGSize { double x0; double x1; })size caretSize:(struct CGSize { double x0; double x1; })size totalWidth:(double)width;
- (void)_t1_layoutMessageButton:(id)button withMessageButtonSize:(struct CGSize { double x0; double x1; })size caretSize:(struct CGSize { double x0; double x1; })size totalWidth:(double)width;
- (void)_t1_layoutCustomScreenshotPlaceholder:(id)placeholder withPlaceholderSize:(struct CGSize { double x0; double x1; })size caretSize:(struct CGSize { double x0; double x1; })size totalWidth:(double)width;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_layoutSecondLine:(id)line withSeparatorSize:(struct CGSize { double x0; double x1; })size availableWidth:(double)width multiLineNameHeight:(double)height cardAttachmentDecider:(id /* block */)decider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_t1_layoutSecondLineInfoTextViewFrame:(id)frame availableWidth:(double)width multiLineNameHeight:(double)height cardAttachmentDecider:(id /* block */)decider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutAuthorFullNamesAndBadges:(id)badges availableWidth:(double)width origin:(struct CGPoint { double x0; double x1; })origin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutAuthorUsernames:(id)usernames availableWidth:(double)width origin:(struct CGPoint { double x0; double x1; })origin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_authorBadgeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withAuthorBadgeSize:(struct CGSize { double x0; double x1; })size;
- (void)_layoutDesignatorBadge:(id)badge maxWidth:(double)width featureSwitches:(id)switches;
- (void)_layoutCommunityModeratorBadge:(id)badge maxWidth:(double)width;
- (void)layoutSubviewsForLayoutableView:(id)view;
- (struct CGSize { double x0; double x1; })layoutableView:(id)view sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)_adjustLayoutState:(id)state forUpdatedTimestampInView:(id)view account:(id)account;
- (_Bool)isDisplayTypeForLargeTweets:(long long)tweets;
- (id)detailFontForDisplayType:(long long)type options:(unsigned long long)options;
- (id)userNameFontForDisplayType:(long long)type options:(unsigned long long)options;
- (id)timestampTextForViewModel:(id)model options:(unsigned long long)options account:(id)account;
- (id)nameFontForOptions:(unsigned long long)options displayType:(long long)type;
- (_Bool)_t1_isMultilineLayoutViewModel:(id)model account:(id)account options:(unsigned long long)options displayType:(long long)type;
- (id)_t1_timestampColorForOptions:(unsigned long long)options status:(id)status debugSettings:(id)settings;
- (id)_t1_colorForOptions:(unsigned long long)options;
- (_Bool)_t1_showShowCommunityNameForOptions:(unsigned long long)options displayType:(long long)type;
- (id)_t1_primaryTextForViewModel:(id)model options:(unsigned long long)options displayType:(long long)type featureSwitches:(id)switches;
- (id)_t1_secondaryTextForViewModel:(id)model options:(unsigned long long)options displayType:(long long)type;
- (id)_t1_viewCountTextForViewModel:(id)model;
- (id)_t1_moderatorBadgeConfigurationForAuthorCommunityRelationship:(id)relationship displayType:(long long)type account:(id)account shouldShowMemberBadge:(_Bool)badge;
- (_Bool)shouldMoveTimestamp:(unsigned long long)timestamp;
- (_Bool)_t1_shouldShowTimestampForViewModel:(id)model account:(id)account options:(unsigned long long)options displayType:(long long)type;
- (_Bool)_t1_shouldShowCaretForOptions:(unsigned long long)options;
- (_Bool)_t1_shouldShowViewCountForOptions:(unsigned long long)options;
- (_Bool)shouldShowDesignatorBadgeForViewModel:(id)model options:(unsigned long long)options;
- (_Bool)_t1_shouldShowParodyLabelForViewModel:(id)model options:(unsigned long long)options account:(id)account;
- (id)parodyLabelForViewModel:(id)model account:(id)account;
- (_Bool)shouldShowForwardDismissForViewModel:(id)model options:(unsigned long long)options;
- (_Bool)_t1_shouldShowUsernameLabelForViewModel:(id)model;
- (_Bool)_t1_showsUsernameOnlyForViewModel:(id)model hidesFullName:(_Bool)name;
- (id)_t1_authorBadgesForViewModel:(id)model displayType:(long long)type account:(id)account;
- (_Bool)_t1_shouldShowSubscribeButtonForViewModel:(id)model displayType:(long long)type account:(id)account options:(unsigned long long)options;
- (_Bool)_t1_shouldShowPromoteButtonForViewModel:(id)model displayType:(long long)type account:(id)account options:(unsigned long long)options;
- (_Bool)_t1_shouldShowAnalyticsButtonForViewModel:(id)model displayType:(long long)type account:(id)account options:(unsigned long long)options;
- (_Bool)_t1_shouldShowMessageButtonForViewModel:(id)model displayType:(long long)type account:(id)account options:(unsigned long long)options;
- (_Bool)_t1_shouldShowCustomScreenshotPlaceholderForViewModel:(id)model displayType:(long long)type account:(id)account options:(unsigned long long)options;
- (id)viewCountColorWithAnatomyFeatures:(id)features options:(unsigned long long)options viewModel:(id)model debugSettings:(id)settings;
- (id)viewCountFontWithAnatomyFeatures:(id)features options:(unsigned long long)options displayType:(long long)type;

@end

#endif /* TTAStatusAuthorViewLayoutDelegate_h */
