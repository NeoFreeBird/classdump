//
#ifndef TAVAnalyticsVASTTrackingEventSink_h
#define TAVAnalyticsVASTTrackingEventSink_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVDownloader-Protocol.h"

@class NSArray, NSObject;

@interface TAVAnalyticsVASTTrackingEventSink : NSObject <TAVAnalyticsEventSink>

@property (readonly, weak, nonatomic) id <TAVDownloader> weakResourceLoader;
@property (readonly, copy, nonatomic) NSArray *trackingResources;

/* instance methods */
- (id)init;
- (id)initWithWeakResourceLoader:(id)loader trackingResources:(id)resources;
- (void)handleEvent:(id)event;
- (void)handleRawEventWithPlaylistItemKey:(id)key handler:(id /* block */)handler;

@end

#endif /* TAVAnalyticsVASTTrackingEventSink_h */
