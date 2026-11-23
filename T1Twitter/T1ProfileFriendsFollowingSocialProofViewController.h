//
#ifndef T1ProfileFriendsFollowingSocialProofViewController_h
#define T1ProfileFriendsFollowingSocialProofViewController_h
@import Foundation;

#include "T1ResizableHeaderSubheader-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNViewController;

@interface T1ProfileFriendsFollowingSocialProofViewController : TFNViewController <T1ResizableHeaderSubheader, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *imagePipeline;
    NSNumber"16@0:8 *$__lazy_storage_$_backgroundView;
    NSNumber"16@0:8 *$__lazy_storage_$_flexibleLayoutView;
    NSNumber"16@0:8 *$__lazy_storage_$_facepileView;
    NSNumber"16@0:8 *$__lazy_storage_$_friendsFollowingTextView;
    NSNumber"16@0:8 *$__lazy_storage_$_highlightView;
}

@property (nonatomic, copy) id subheaderInfo;
@property (nonatomic, copy) id /* block */ preferredHeightCheckBlock;

/* instance methods */
- (double)preferredHeight;
- (id)initWithAccount:(id)account profileViewModel:(id)model imagePipeline:(id)pipeline;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)didTapViewWithSender:(id)sender;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)profileViewModelDidInvalidateWithNotification:(id)notification;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ProfileFriendsFollowingSocialProofViewController_h */
