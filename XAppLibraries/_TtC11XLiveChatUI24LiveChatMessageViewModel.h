//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XLiveChatUI24LiveChatMessageViewModel_h
#define _TtC11XLiveChatUI24LiveChatMessageViewModel_h
@import Foundation;

@class XLiveChatUI.LiveChatCellDisplayCache, XLiveChatUI.LiveChatCellViewModelDelegate ?, _$s10Foundation4DateVMn, _$sSaySo18TFSActiveTextRange_pG, _$sSo10PTVMessageC, _$sSo17TFNTwitterAccountC, _$sSo22TFNAttributedTextModelC, _$sSo22TTACoreStatusViewModel_p, _TtCs12_SwiftObject;

@interface XLiveChatUI.LiveChatMessageViewModel : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.PTVMessage _ptvMessage;
    nominal type descriptor for Foundation.Date timestampDate;
    XLiveChatUI.LiveChatCellViewModelDelegate ? delegate;
    __C.TFNTwitterAccount account;
    __C.TTACoreStatusViewModel authorViewModel;
    __C.TFNAttributedTextModel body;
    [__C.TFSActiveTextRange] bodyMentionRanges;
    XLiveChatUI.LiveChatCellDisplayCache displayCache;
}

@end

#endif /* _TtC11XLiveChatUI24LiveChatMessageViewModel_h */
