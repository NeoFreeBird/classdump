//
#ifndef _TtC16ChatConversation22MessageContentViewPool_h
#define _TtC16ChatConversation22MessageContentViewPool_h
@import Foundation;

@class _$sSa -> ChatConversation.MessageContentView, _$sSh -> _$s7Combine14AnyCancellableCMn, _TtCs12_SwiftObject, __C.CFRunLoopObserver ?;

@interface ChatConversation.MessageContentViewPool : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.Array -> ChatConversation.MessageContentView contentViews;
    __C.CFRunLoopObserver ? prewarmObserver;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable cancellables;
}

@end

#endif /* _TtC16ChatConversation22MessageContentViewPool_h */
