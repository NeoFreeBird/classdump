//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SpaceClipNuxViewController_h
#define T1SpaceClipNuxViewController_h
@import Foundation;

#include "TASSpacesTrayContent-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"

@class NSString, TFNViewController;

@interface T1SpaceClipNuxViewController : TFNViewController <TASSpacesTrayContent, TFNModalSheetViewControllerLayoutDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *context;
    NSNumber"16@0:8 *isHost;
    NSNumber"16@0:8 *delegate;
    NSNumber"16@0:8 *$__lazy_storage_$_headerBackgroundImageView;
    NSNumber"16@0:8 *$__lazy_storage_$_scrollView;
    NSNumber"16@0:8 *$__lazy_storage_$_headerStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_textSubsectionStackView;
    NSNumber"16@0:8 *$__lazy_storage_$_containerStackView;
}

@property (nonatomic, readonly) NSString *spacesTrayPrimaryActionTitle;
@property (nonatomic, readonly) NSString *spacesTraySecondaryActionTitle;

/* class methods */
+ (void)presentNUXWithContext:(id)context isHost:(_Bool)host fromViewController:(id)controller;

/* instance methods */
- (void)spacesTrayDidPressPrimaryAction;
- (void)spacesTrayDidPressSecondaryAction;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithContext:(id)context isHost:(_Bool)host delegate:(id)delegate;
- (id)initWithCoder:(id)coder;
- (void)viewWillLayoutSubviews;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)didTapDoneButton;
- (void)didTapSettingsButton;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1SpaceClipNuxViewController_h */
