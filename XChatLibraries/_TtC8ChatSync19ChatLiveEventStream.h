//
#ifndef _TtC8ChatSync19ChatLiveEventStream_h
#define _TtC8ChatSync19ChatLiveEventStream_h
@import Foundation;

@class _$sScS -> ChatThrift.MessageEvent, _$sScS12ContinuationVMn ChatThrift.MessageEvent _$s_ ->, _TtCs12_SwiftObject;

@interface ChatSync.ChatLiveEventStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    Swift.AsyncStream -> ChatThrift.MessageEvent events;
    nominal type descriptor for Swift.AsyncStream.Continuation ChatThrift.MessageEvent  first-element-marker  -> continuation;
}

@end

#endif /* _TtC8ChatSync19ChatLiveEventStream_h */
