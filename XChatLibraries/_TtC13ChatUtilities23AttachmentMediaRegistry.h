//
#ifndef _TtC13ChatUtilities23AttachmentMediaRegistry_h
#define _TtC13ChatUtilities23AttachmentMediaRegistry_h
@import Foundation;

@class ChatUtilities.UnfairLock, _$sSD -> ChatModelsCore.AttachmentID _$s10Foundation3URLVMn, _TtCs12_SwiftObject;

@interface ChatUtilities.AttachmentMediaRegistry : Swift._SwiftObject { // (Swift)
    /* instance variables */
    ChatUtilities.UnfairLock lock;
    Swift.Dictionary -> ChatModelsCore.AttachmentID nominal type descriptor for Foundation.URL urlsByAttachmentID;
}

@end

#endif /* _TtC13ChatUtilities23AttachmentMediaRegistry_h */
