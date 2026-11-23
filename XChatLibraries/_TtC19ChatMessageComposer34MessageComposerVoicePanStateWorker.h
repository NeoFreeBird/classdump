//
#ifndef _TtC19ChatMessageComposer34MessageComposerVoicePanStateWorker_h
#define _TtC19ChatMessageComposer34MessageComposerVoicePanStateWorker_h
@import Foundation;

@class ChatMessageComposer.MessageComposerActionTriggerStream, ChatMessageComposer.MessageComposerVoiceLockBuilder, ChatMessageComposer.MessageComposerVoicePanGestureStream, ChatMessageComposer.MessageComposerWorkerPluginContext, ChatMessageComposer.MessageCompositionStream, ChatMessageComposer.WindowPresentationTriggerStream, _$s11XFoundation13CombineWorkerCN, _$s7Combine19CurrentValueSubjectCMn ChatMessageComposer.MessageComposerVoicePanState ? _$ss5NeverOMn, _$sSo25UIImpactFeedbackGeneratorCSg, _$sSo31UINotificationFeedbackGeneratorCSg;

@interface ChatMessageComposer.MessageComposerVoicePanStateWorker : type metadata for XFoundation.CombineWorker { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerWorkerPluginContext context;
    ChatMessageComposer.MessageComposerActionTriggerStream messageComposerActionTriggerStream;
    ChatMessageComposer.MessageComposerVoiceLockBuilder messageComposerVoiceLockBuilder;
    ChatMessageComposer.MessageComposerVoicePanGestureStream messageComposerVoicePanGestureStream;
    ChatMessageComposer.MessageCompositionStream messageCompositionStream;
    nominal type descriptor for Combine.CurrentValueSubject ChatMessageComposer.MessageComposerVoicePanState ? nominal type descriptor for Swift.Never stateSubject;
    ChatMessageComposer.WindowPresentationTriggerStream windowPresentationTriggerStream;
    __C.UIImpactFeedbackGenerator? $__lazy_storage_$_lightFeedbackGenerator;
    __C.UIImpactFeedbackGenerator? $__lazy_storage_$_rigidFeedbackGenerator;
    __C.UIImpactFeedbackGenerator? $__lazy_storage_$_softFeedbackGenerator;
    __C.UINotificationFeedbackGenerator? $__lazy_storage_$_warningFeedbackGenerator;
}

@end

#endif /* _TtC19ChatMessageComposer34MessageComposerVoicePanStateWorker_h */
