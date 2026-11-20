//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok45GrokSpeechPermissionTrayContentViewController_h
#define _TtC4Grok45GrokSpeechPermissionTrayContentViewController_h
@import Foundation;

@class Grok.GrokSpeechPermissionType ?, Grok.GrokSpeechPermissionView.ViewModel, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s7Combine14AnyCancellableCMn ?, _$s7SwiftUI19UIHostingControllerCMn Grok.GrokSpeechPermissionView, _$sSo7UIImageCSg, _$sSo7UILabelC;

@interface Grok.GrokSpeechPermissionTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Grok.GrokSpeechPermissionView.ViewModel viewModel;
    __C.UILabel bodyLabel;
    nominal type descriptor for SwiftUI.UIHostingController Grok.GrokSpeechPermissionView itemsHost;
    __C.UIImage? headerImage;
    Grok.GrokSpeechPermissionType ? renderedPermissionDenied;
    nominal type descriptor for Combine.AnyCancellable ? cancellable;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4Grok45GrokSpeechPermissionTrayContentViewController_h */
