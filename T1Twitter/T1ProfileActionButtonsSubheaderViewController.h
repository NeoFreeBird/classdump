//
#ifndef T1ProfileActionButtonsSubheaderViewController_h
#define T1ProfileActionButtonsSubheaderViewController_h
@import Foundation;

#include "ProfileActionButtonsControllerDelegate-Protocol.h"
#include "T1ResizableHeaderSubheader-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNViewController, UIView;

@interface T1ProfileActionButtonsSubheaderViewController : TFNViewController <T1ResizableHeaderSubheader, TFNLayoutMetricsEnvironment, ProfileActionButtonsControllerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *buttonsController;
}

@property (nonatomic, copy) id subheaderInfo;
@property (nonatomic, copy) id /* block */ preferredHeightCheckBlock;
@property (nonatomic, readonly) UIView *miniProfileTransitionButtonsRowView;

/* class methods */
+ (_Bool)hasButtonsToShowWithAccount:(id)account profileViewModel:(id)model visitStateProvider:(id)provider;

/* instance methods */
- (id)miniProfileTransitionButtonOfType:(long long)type;
- (id)initWithAccount:(id)account profileViewModel:(id)model visitStateProvider:(id)provider sourceStatus:(id)status followScribeContext:(id)context deviceFollowScribeContext:(id)context sourceScribeContext:(id)context;
- (void)dealloc;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (double)preferredHeight;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)profileActionButtonsControllerDidUpdateVisibleButtons:(id)buttons;
- (void)profileActionButtonsControllerDidUpdateOccupiedContentRect:(id)rect;
- (void)profileViewModelDidInvalidate:(id)invalidate;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ProfileActionButtonsSubheaderViewController_h */
