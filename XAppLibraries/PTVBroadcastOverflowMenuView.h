//
#ifndef PTVBroadcastOverflowMenuView_h
#define PTVBroadcastOverflowMenuView_h
@import Foundation;

#include "PTVBroadcastOverflowMenuHeaderView.h"
#include "PTVBroadcastOverflowMenuViewDelegate-Protocol.h"
#include "PTVBroadcastOverflowScrollStackContainerView.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIStackView, UIView;

@interface PTVBroadcastOverflowMenuView : PTVBroadcastOverflowScrollStackContainerView <UIScrollViewDelegate> {
    /* instance variables */
    NSArray *_buttons;
    PTVBroadcastOverflowMenuHeaderView *_broadcastHeaderView;
    UIStackView *_menuItemsView;
}

@property (weak, nonatomic) id <PTVBroadcastOverflowMenuViewDelegate> delegate;
@property (retain, nonatomic) UIView *profileBanner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (double)MinimumButtonHeight;

/* instance methods */
- (void)traitCollectionDidChange:(id)change;
- (id)initWithBroadcastController:(id)controller hasClickableHashTags:(_Bool)tags delegate:(id)delegate;
- (void)updateEmptySpaceMinimumHeight;
- (void)didTapEmptySpace;
- (void)updateParticipantsCount:(long long)count;
- (void)setButtons:(id)buttons;

@end

#endif /* PTVBroadcastOverflowMenuView_h */
