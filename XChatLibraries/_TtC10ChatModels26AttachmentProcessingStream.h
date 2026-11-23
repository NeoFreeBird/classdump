//
#ifndef _TtC10ChatModels26AttachmentProcessingStream_h
#define _TtC10ChatModels26AttachmentProcessingStream_h
@import Foundation;

@class _$s7Combine19CurrentValueSubjectCMn _$sySD -> _$s10Foundation3URLVMn ChatModels.AttachmentProcessingState _$sG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySD -> _$s10Foundation3URLVMn ChatModels.AttachmentProcessingTask _$sG _$ss5NeverOMn, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface ChatModels.AttachmentProcessingStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSLock lock;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary -> nominal type descriptor for Foundation.URL ChatModels.AttachmentProcessingState _$sG nominal type descriptor for Swift.Never processingStatesSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary -> nominal type descriptor for Foundation.URL ChatModels.AttachmentProcessingTask _$sG nominal type descriptor for Swift.Never tasksSubject;
}

@end

#endif /* _TtC10ChatModels26AttachmentProcessingStream_h */
