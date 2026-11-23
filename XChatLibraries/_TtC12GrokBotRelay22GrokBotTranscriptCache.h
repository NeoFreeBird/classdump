//
#ifndef _TtC12GrokBotRelay22GrokBotTranscriptCache_h
#define _TtC12GrokBotRelay22GrokBotTranscriptCache_h
@import Foundation;

@class _$sSDySS GrokBotRelay.GrokBotTranscriptCache.Entry, _$sSDySSSiG, _$sSSSgyc, _$sSaySSG, _$sSo6NSLockC, _TtCs12_SwiftObject;

@interface GrokBotRelay.GrokBotTranscriptCache : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.NSLock lock;
    () -> Swift.String? pinnedAgentId;
    Swift.Dictionary empty-list Swift.String GrokBotRelay.GrokBotTranscriptCache.Entry entries;
    [Swift.String] recency;
    [Swift.String : Swift.Int] openCounts;
}

@end

#endif /* _TtC12GrokBotRelay22GrokBotTranscriptCache_h */
