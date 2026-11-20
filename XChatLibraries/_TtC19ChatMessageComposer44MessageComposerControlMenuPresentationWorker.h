//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
