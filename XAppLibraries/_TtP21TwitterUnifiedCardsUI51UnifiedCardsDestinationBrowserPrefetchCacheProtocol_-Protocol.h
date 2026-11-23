//
#ifndef _TtP21TwitterUnifiedCardsUI51UnifiedCardsDestinationBrowserPrefetchCacheProtocol__Protocol_h
#define _TtP21TwitterUnifiedCardsUI51UnifiedCardsDestinationBrowserPrefetchCacheProtocol__Protocol_h
@import Foundation;

@protocol TwitterUnifiedCardsUI.UnifiedCardsDestinationBrowserPrefetchCacheProtocol

@required

/* required instance methods */
- (void)prefetchedResponseFor:(id)_for completion:(id /* block */)completion;
- (void)prefetchWithUrls:(id)urls eventLogger:(id)logger;
- (void)prefetchWithUrl:(id)url eventLogger:(id)logger completion:(id /* block */)completion;
- (unsigned long long)statusFor:(id)_for;
- (void)removeResponseFor:(id)_for;

@optional

@end

#endif /* _TtP21TwitterUnifiedCardsUI51UnifiedCardsDestinationBrowserPrefetchCacheProtocol__Protocol_h */
