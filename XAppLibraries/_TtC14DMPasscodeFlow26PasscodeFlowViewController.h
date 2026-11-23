//
#ifndef _TtC14DMPasscodeFlow26PasscodeFlowViewController_h
#define _TtC14DMPasscodeFlow26PasscodeFlowViewController_h
@import Foundation;

@class DMPasscodeFlow08PasscodeB8Listener_pSgXw, TFNViewController, _$sSa -> DMPasscodeFlow.PasscodeFlowStep, _$sSo16UINavigationItemCSg, _$sSo16UIViewControllerCSgXw;

@interface DMPasscodeFlow.PasscodeFlowViewController : TFNViewController { // (Swift)
    /* instance variables */
    DMPasscodeFlow08PasscodeB8Listener_pSgXw listener;
    __C.UINavigationItem? parentNavigationItem;
    Swift.Array -> DMPasscodeFlow.PasscodeFlowStep flowSteps;
    weak __C.UIViewController? initialStepViewController;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)didTapHelp:(id)help;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14DMPasscodeFlow26PasscodeFlowViewController_h */
