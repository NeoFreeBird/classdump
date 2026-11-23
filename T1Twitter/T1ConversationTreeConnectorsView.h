//
#ifndef T1ConversationTreeConnectorsView_h
#define T1ConversationTreeConnectorsView_h
@import Foundation;

#include "T1ConversationTreeConnectorsViewModel.h"
#include "T1CurvedLine.h"
#include "T1StatusBasedReplyConnectorsLayoutState.h"

@class NSMutableArray, TFNRoundedCornerView, TUIAvatarImageView, UIView;

@interface T1ConversationTreeConnectorsView : UIView

@property (readonly, nonatomic) TFNRoundedCornerView *verticalParentConnectorView;
@property (readonly, nonatomic) T1CurvedLine *elbowParentConnectorView;
@property (readonly, nonatomic) NSMutableArray *ancestorConnectorViews;
@property (nonatomic) long long ancestorConnectorViewsCount;
@property (retain, nonatomic) TUIAvatarImageView *avatarImageView;
@property (readonly, nonatomic) T1ConversationTreeConnectorsViewModel *viewModel;
@property (readonly, nonatomic) T1StatusBasedReplyConnectorsLayoutState *layoutState;

/* instance methods */
- (id)init;
- (void)_t1_statusDidUpdate:(id)update;
- (void)updateWithLayoutState:(id)state;
- (void)updateWithViewModel:(id)model;
- (void)layoutSubviews;
- (id)_t1_newConnectorView;
- (id)_t1_dividerColor;
- (id)_t1_maskingColor;
- (void)_t1_updateSubviewVisiblity;
- (id)_verticalEllipsisImage;
- (void)dealloc;

@end

#endif /* T1ConversationTreeConnectorsView_h */
