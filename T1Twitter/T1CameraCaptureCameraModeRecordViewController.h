//
#ifndef T1CameraCaptureCameraModeRecordViewController_h
#define T1CameraCaptureCameraModeRecordViewController_h
@import Foundation;

#include "T1CameraCaptureCameraModeRecordViewControllerDelegate-Protocol.h"
#include "T1CameraRecordButton.h"
#include "TFNTooltipDelegate-Protocol.h"

@class NSString, TFNViewController;

@interface T1CameraCaptureCameraModeRecordViewController : TFNViewController <TFNTooltipDelegate>

@property (retain, nonatomic) T1CameraRecordButton *recordButton;
@property (weak, nonatomic) id <T1CameraCaptureCameraModeRecordViewControllerDelegate> delegate;
@property (readonly, nonatomic) long long context;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool supportsHoldToRecord;
@property (nonatomic) _Bool requiresHoldDown;
@property (nonatomic) _Bool recording;
@property (nonatomic) _Bool isFleetcast;
@property (nonatomic) _Bool accessibilitySelectRecordButtonOnAppearEnabled;
@property (nonatomic) double recordingDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (id)initWithContext:(long long)context;
- (void)_t1_main_updateRecordButton;
- (void)loadView;
- (void)viewDidLoad;
- (void)_t1_main_loadRecordButtonWithConstraints:(id)constraints;
- (void)viewDidAppear:(_Bool)appear;
- (void)tfn_viewControllerWillSwapWithTransitionCoordinator:(id)coordinator;
- (void)viewControllerDidPresentAnimated:(_Bool)animated;
- (void)_t1_main_triggerRecordButtonTooltip;
- (void)_t1_action_recordButtonDidTouchDown:(id)down;
- (void)_t1_action_recordButtonDidValueChanged:(id)changed;
- (void)_t1_action_recordButtonDidTouchUp:(id)up;
- (void)tooltipDidTap:(id)tap;
- (_Bool)isRecording;
- (_Bool)isAccessibilitySelectRecordButtonOnAppearEnabled;

@end

#endif /* T1CameraCaptureCameraModeRecordViewController_h */
