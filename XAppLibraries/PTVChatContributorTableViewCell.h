//
#ifndef PTVChatContributorTableViewCell_h
#define PTVChatContributorTableViewCell_h
@import Foundation;

#include "PTVChatContributorViewCellContentView.h"
#include "PTVChatTableViewCell.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface PTVChatContributorTableViewCell : PTVChatTableViewCell <UIGestureRecognizerDelegate>

@property (readonly, nonatomic) NSString *topMessage;
@property (readonly, nonatomic) NSString *bottomMessage;
@property (retain, nonatomic) PTVChatContributorViewCellContentView *containerView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cachedContainerFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setUseLargeChatFont:(_Bool)font;
- (void)setProfileImageEntity:(id)entity type:(unsigned long long)type;
- (void)setProfileImageURL:(id)url;
- (void)setTopMessage:(id)message bottomMessage:(id)message participantIndex:(long long)index;

@end

#endif /* PTVChatContributorTableViewCell_h */
