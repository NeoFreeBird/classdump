//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot43GrokBotVaultImportTrayContentViewController_h
#define _TtC11ChatGrokBot43GrokBotVaultImportTrayContentViewController_h
@import Foundation;

#include "UIDocumentPickerDelegate-Protocol.h"

@class ChatGrokBot.GrokBotVaultImportProgressView, ChatGrokBot.GrokBotVaultImportViewModel, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotVaultImportTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController <UIDocumentPickerDelegate> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotVaultImportProgressView progressView;
    ChatGrokBot.GrokBotVaultImportViewModel viewModel;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)documentPicker:(id)picker didPickDocumentsAtURLs:(id)urls;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot43GrokBotVaultImportTrayContentViewController_h */
