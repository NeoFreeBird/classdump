//
#ifndef TAVStaticPlaylistItemProvider_h
#define TAVStaticPlaylistItemProvider_h
@import Foundation;

#include "TAVAnalyticsPlaylistItemMetadata.h"
#include "TAVPlaylistItem.h"
#include "TAVPlaylistItemProvider-Protocol.h"

@class NSObject, NSString;

@interface TAVStaticPlaylistItemProvider : NSObject <TAVPlaylistItemProvider>

@property (readonly, nonatomic) TAVPlaylistItem *playlistItem;
@property (readonly, nonatomic) TAVAnalyticsPlaylistItemMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPlaylistItem:(id)item;
- (void)providePlaylistItemWithCompletion:(id /* block */)completion;

@end

#endif /* TAVStaticPlaylistItemProvider_h */
