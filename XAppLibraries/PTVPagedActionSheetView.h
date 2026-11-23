//
#ifndef PTVPagedActionSheetView_h
#define PTVPagedActionSheetView_h
@import Foundation;

#include "PTVActionSheetButton.h"
#include "PTVPagedActionSheetViewDelegate-Protocol.h"

@class NSMutableArray, UIScrollView, UIView;

@interface PTVPagedActionSheetView : UIView {
    /* instance variables */
    id <PTVPagedActionSheetViewDelegate> _delegate;
    UIView *_buttonsBackgroundView;
    UIScrollView *_actionSheetScrollView;
    UIView *_buttonsContainerView;
    PTVActionSheetButton *_dismissButton;
    unsigned long long _currentPageIndex;
    NSMutableArray *_pages;
    NSMutableArray *_buttonPages;
}

@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIView *oldHeaderView;

/* class methods */
+ (id)AttributesForMessage;
+ (id)AttributesForNormalActionItemTitle;
+ (id)AttributesForNormalActionItemSubtitle;
+ (id)AttributesForDismissActionItemTitle;
+ (id)AttributesForDestructiveActionItemTitle;
+ (id)AttributesForDestructiveActionItemSubtitle;

/* instance methods */
- (id)initWithPage:(id)page delegate:(id)delegate;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })buttonPage:(id)page sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutButtonsInPage:(id)page;
- (id)currentButtonPage;
- (id)currentPage;
- (void)pushPage:(id)page;
- (void)pushPage:(id)page animated:(_Bool)animated;
- (void)pushPageAnimationDidCompleteWithCurrentButtonPage:(id)page accessibleButton:(id)button;
- (void)popPage;
- (void)popPageAnimated:(_Bool)animated;
- (void)popPageAnimationDidCompleteWithOldButtonPage:(id)page accessibleButton:(id)button;
- (void)updateHeaderAndDismissButtonTitles;
- (id)headerViewWithAttributedTitle:(id)title;
- (void)buttonPressed:(id)pressed;

@end

#endif /* PTVPagedActionSheetView_h */
