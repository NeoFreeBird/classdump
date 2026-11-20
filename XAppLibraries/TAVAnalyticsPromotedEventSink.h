//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsPromotedEventSink_h
#define TAVAnalyticsPromotedEventSink_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsPlaylistMetadata.h"
#include "TAVScribe-Protocol.h"

@class NSObject;

@interface TAVAnalyticsPromotedEventSink : NSObject <TAVAnalyticsEventSink>

@property (readonly, nonatomic) id <TAVScribe> scribe;
@property (readonly, copy, nonatomic) TAVAnalyticsPlaylistMetadata *playlistMetadata;
@property (readonly, nonatomic) _Bool promotedAudibleViewEnabled;

/* instance methods */
- (id)init;
- (id)initWithScribe:(id)scribe playlistMetadata:(id)metadata promotedAudibleViewEnabled:(_Bool)enabled;
- (void)handleEvent:(id)event;
- (void)handleRawEventWithPlaylistItemKey:(id)key handler:(id /* block */)handler;

@end

#endif /* TAVAnalyticsPromotedEventSink_h */
