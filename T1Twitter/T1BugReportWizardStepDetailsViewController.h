//
#ifndef T1BugReportWizardStepDetailsViewController_h
#define T1BugReportWizardStepDetailsViewController_h
@import Foundation;

#include "T1BugReportWizardStep-Protocol.h"
#include "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, TFNDataViewController, TFNPlaceholderTextView, UILabel, UIScrollView, UISwitch, UITextView, UIView;

@interface T1BugReportWizardStepDetailsViewController : TFNDataViewController <UITextViewDelegate, T1BugReportWizardStep>

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *summaryTitleLabel;
@property (retain, nonatomic) UITextView *summaryTextView;
@property (retain, nonatomic) UILabel *expectedTitleLabel;
@property (retain, nonatomic) TFNPlaceholderTextView *expectedTextView;
@property (retain, nonatomic) UILabel *actualTitleLabel;
@property (retain, nonatomic) TFNPlaceholderTextView *actualTextView;
@property (retain, nonatomic) UILabel *attachScreenshotLabel;
@property (retain, nonatomic) UISwitch *attachScreenshotSwitch;
@property (nonatomic) _Bool didShowAttachScreenshotAlert;
@property (weak, nonatomic) NSLayoutConstraint *scrollViewBottomAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)_t1_addRule;
- (id)_t1_constrainRule:(id)rule after:(id)after;
- (id)_t1_formTextView;
- (id)_t1_formTitleLabel;
- (void)_t1_setupViews;
- (void)_t1_setupConstraints;
- (void)_t1_setupNotificationObservers;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (_Bool)shouldAutorotate;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)textViewDidChange:(id)change;
- (void)_t1_setIsNextButtonEnabled;
- (void)_t1_didChangeAttachScreenshotSwitchState:(id)state;
- (void)_t1_notification_keyboardWillChangeFrame:(id)frame;
- (void)_t1_notification_keyboardWillHide:(id)hide;
- (void)updateBugReport:(id)report;
- (_Bool)hasNextStep;
- (id)nextStep;

@end

#endif /* T1BugReportWizardStepDetailsViewController_h */
