//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot21GrokBotDraftFileStore_h
#define _TtC11ChatGrokBot21GrokBotDraftFileStore_h
@import Foundation;

@class _$s10Foundation11JSONDecoderCMn, _$s10Foundation11JSONEncoderCMn, _$s10Foundation3URLVMn ?, _$sSD -> _$s10Foundation3URLVMn _$sSS, _$sSDySS ChatGrokBot.GrokBotDraftSnapshot, _TtCs12_SwiftObject;

@interface ChatGrokBot.GrokBotDraftFileStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Foundation.JSONDecoder decoder;
    nominal type descriptor for Foundation.URL ? directory;
    nominal type descriptor for Foundation.JSONEncoder encoder;
    Swift.Dictionary -> nominal type descriptor for Foundation.URL Swift.String relativePathsBySourceURL;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotDraftSnapshot snapshotsByAgentID;
}

@end

#endif /* _TtC11ChatGrokBot21GrokBotDraftFileStore_h */
