//
#ifndef _TtC17ChatMessageViewer27MessageViewerViewController_h
#define _TtC17ChatMessageViewer27MessageViewerViewController_h
@import Foundation;

@class ChatConversationServices.ConversationNavigation, ChatConversationServices.MessageTextEntityHighlighter ?, ChatMessageViewer.MessageViewerContentStream, ChatMessageViewer.MessageViewerWorkerPluginPoint, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo10UITextViewC, _$sSo22UITapGestureRecognizerCSg, _$sySS_So16UIViewControllerCyyScMYcctScMYcc;

@interface ChatMessageViewer.MessageViewerViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatMessageViewer.MessageViewerContentStream contentStream;
    ChatConversationServices.ConversationNavigation conversationNavigation;
    @Swift.MainActor (Swift.String, __C.UIViewController, @Swift.MainActor () -> ()) -> () linkOpener;
    ChatMessageViewer.MessageViewerWorkerPluginPoint workerPluginPoint;
    __C.UITextView textView;
    ChatConversationServices.MessageTextEntityHighlighter ? $__lazy_storage_$_entityHighlighter;
    __C.UITapGestureRecognizer? $__lazy_storage_$_textTapRecognizer;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)handleTextTap:(id)tap;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC17ChatMessageViewer27MessageViewerViewController_h */
