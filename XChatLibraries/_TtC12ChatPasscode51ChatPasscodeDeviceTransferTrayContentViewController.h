//
#ifndef _TtC12ChatPasscode51ChatPasscodeDeviceTransferTrayContentViewController_h
#define _TtC12ChatPasscode51ChatPasscodeDeviceTransferTrayContentViewController_h
@import Foundation;

@class ChatPasscode.ChatPasscodeDeviceTransferStatusView, ChatPasscode.ChatPasscodeHeaderBuilder, ChatPasscode.ChatPasscodeViewModel, ChatPasscode.DeviceTransferModel, ChatPasscode.DeviceTransferModel.Phase, _$s13XDesignSystem29TrayTextContentViewControllerCN, _$s7Combine14AnyCancellableCMn ?;

@interface ChatPasscode.ChatPasscodeDeviceTransferTrayContentViewController : type metadata for XDesignSystem.TrayTextContentViewController { // (Swift)
    /* instance variables */
    ChatPasscode.ChatPasscodeHeaderBuilder headerBuilder;
    ChatPasscode.DeviceTransferModel model;
    ChatPasscode.ChatPasscodeDeviceTransferStatusView statusView;
    ChatPasscode.ChatPasscodeViewModel viewModel;
    ChatPasscode.DeviceTransferModel.Phase phase;
    nominal type descriptor for Combine.AnyCancellable ? phaseSubscription;
}

/* instance methods */
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;

@end

#endif /* _TtC12ChatPasscode51ChatPasscodeDeviceTransferTrayContentViewController_h */
