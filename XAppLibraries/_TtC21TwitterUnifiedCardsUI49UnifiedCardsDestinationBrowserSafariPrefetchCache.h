//
#ifndef _TtC21TwitterUnifiedCardsUI49UnifiedCardsDestinationBrowserSafariPrefetchCache_h
#define _TtC21TwitterUnifiedCardsUI49UnifiedCardsDestinationBrowserSafariPrefetchCache_h
@import Foundation;

#include "_TtP21TwitterUnifiedCardsUI51UnifiedCardsDestinationBrowserPrefetchCacheProtocol_-Protocol.h"

@class _$sSo7NSCacheCySo5NSURLCSo37SFSafariViewControllerPrewarmingTokenCG, _TtCs12_SwiftObject;

@interface TwitterUnifiedCardsUI.UnifiedCardsDestinationBrowserSafariPrefetchCache : Swift._SwiftObject <TwitterUnifiedCardsUI.UnifiedCardsDestinationBrowserPrefetchCacheProtocol> { // (Swift)
    /* instance variables */
    __C.NSCache<__C.NSURL, __C.SFSafariViewControllerPrewarmingToken> prewarmTokens;
}

/* instance methods */
- (void)prefetchedResponseFor:(id)_for completion:(id /* block */)completion;
- (void)prefetchWithUrls:(id)urls eventLogger:(id)logger;
- (void)prefetchWithUrl:(id)url eventLogger:(id)logger completion:(id /* block */)completion;
- (unsigned long long)statusFor:(id)_for;
- (void)removeResponseFor:(id)_for;

@end

#endif /* _TtC21TwitterUnifiedCardsUI49UnifiedCardsDestinationBrowserSafariPrefetchCache_h */
