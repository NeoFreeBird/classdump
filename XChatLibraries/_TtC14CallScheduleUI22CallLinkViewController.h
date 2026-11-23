//
#ifndef _TtC14CallScheduleUI22CallLinkViewController_h
#define _TtC14CallScheduleUI22CallLinkViewController_h
@import Foundation;

@class CallModels.CallToastPresenting, CallScheduleUI.CallLinkFieldView, _$s10Foundation3URLVMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSo7UILabelC;

@interface CallScheduleUI.CallLinkViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.URL url;
    CallModels.CallToastPresenting toastPresenter;
    __C.UILabel messageLabel;
    CallScheduleUI.CallLinkFieldView linkView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14CallScheduleUI22CallLinkViewController_h */
