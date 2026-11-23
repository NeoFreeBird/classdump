//
#ifndef _TtC19ChatMessageComposer44MessageComposerControlMenuPresentationWorker_h
#define _TtC19ChatMessageComposer44MessageComposerControlMenuPresentationWorker_h
@import Foundation;

@class ChatMessageComposer.MessageComposerControlMenuStateStream, ChatMessageComposer.MessageComposerControlMenuWindowPresenter ?, ChatMessageComposer.WindowPresentationTriggerStream, _$s11XFoundation13CombineWorkerCN, _$s8Dispatch0A8WorkItemCMn ?;

@interface ChatMessageComposer.MessageComposerControlMenuPresentationWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerControlMenuStateStream messageComposerControlMenuStateStream;
    ChatMessageComposer.WindowPresentationTriggerStream windowPresentationTriggerStream;
    ChatMessageComposer.MessageComposerControlMenuWindowPresenter ? currentPresenter;
    nominal type descriptor for Dispatch.DispatchWorkItem ? pendingDismissWorkItem;
}

@end

#endif /* _TtC19ChatMessageComposer44MessageComposerControlMenuPresentationWorker_h */
