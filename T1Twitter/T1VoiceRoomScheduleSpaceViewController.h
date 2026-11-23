//
#ifndef T1VoiceRoomScheduleSpaceViewController_h
#define T1VoiceRoomScheduleSpaceViewController_h
@import Foundation;

#include "TASSpacesTrayContent-Protocol.h"
#include "TFNModalSheetViewControllerLayoutDelegate-Protocol.h"

@class NSString, TFNViewController;

@interface T1VoiceRoomScheduleSpaceViewController : TFNViewController <TASSpacesTrayContent, TFNModalSheetViewControllerLayoutDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *$__lazy_storage_$_descriptionLabel;
    NSNumber"16@0:8 *$__lazy_storage_$_schedulePicker;
    NSNumber"16@0:8 *lastScheduledDate;
    NSNumber"16@0:8 *lastPickerChange;
}

@property (nonatomic, readonly) NSString *spacesTrayPrimaryActionTitle;

/* instance methods */
- (void)spacesTrayDidPressPrimaryAction;
- (double)preferredHeightForModalSheetViewController:(id)controller modalContentViewVisibleEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)initWithViewModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewWillLayoutSubviews;
- (void)didTapScheduleSpace;
- (void)pickerValueChanged:(id)changed;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomScheduleSpaceViewController_h */
