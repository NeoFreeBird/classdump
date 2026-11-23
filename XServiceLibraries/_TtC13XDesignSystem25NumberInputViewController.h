//
#ifndef _TtC13XDesignSystem25NumberInputViewController_h
#define _TtC13XDesignSystem25NumberInputViewController_h
@import Foundation;

@class XDesignSystem.NumberInputView.Layout, XDesignSystem.NumberPadMode, _$s7Combine19CurrentValueSubjectCMn _$ss5Int64VMn _$ss5NeverOMn, _$s7SwiftUI19UIHostingControllerCMn XDesignSystem.NumberInputView, _$sSSSg, _$sSo6UIViewCSg;

@interface XDesignSystem.NumberInputViewController : nominal type descriptor for SwiftUI.UIHostingController XDesignSystem.NumberInputView { // (Swift)
    /* instance variables */
    Swift.String? errorMessage;
    Swift.String? infoMessage;
    __C.UIView? accessoryView;
    XDesignSystem.NumberPadMode mode;
    XDesignSystem.NumberInputView.Layout layout;
    nominal type descriptor for Combine.CurrentValueSubject nominal type descriptor for Swift.Int64 nominal type descriptor for Swift.Never number;
}

/* instance methods */
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC13XDesignSystem25NumberInputViewController_h */
