//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomOthersViewController_h
#define T1VoiceRoomOthersViewController_h
@import Foundation;

#include "TASSpaceModel-Protocol.h"
#include "TASSpaceModelObserver-Protocol.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNModalSheetViewControllerDelegate-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"

@class TFNViewController;

@interface T1VoiceRoomOthersViewController : TFNViewController <TFNAttributedTextViewDelegate, TASSpaceModelObserver, TFNModalSheetViewControllerLayoutDelegate, TFNModalSheetViewControllerDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *$__lazy_storage_$_headerView;
    NSNumber"16@0:8 *$__lazy_storage_$_listenersExplanationLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_shareSpaceLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_shareButton;
}

@property (nonatomic, retain) id <TASSpaceModel> spaceModel;

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)spaceModel:(id)model didUpdateUsersModels:(id)models;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (_Bool)modalSheetViewControllerShouldDismissWithGesture:(id)gesture;
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didTapShare;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomOthersViewController_h */
