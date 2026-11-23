//
#ifndef TAVAnalyticsClientEventSink_h
#define TAVAnalyticsClientEventSink_h
@import Foundation;

#include "TAVAnalyticsEventSink-Protocol.h"
#include "TAVAnalyticsPlaylistMetadata.h"
#include "TAVAnalyticsScribeClientEventParametersBuilder-Protocol.h"
#include "TAVScribe-Protocol.h"
#include "TAVScribeContext.h"
#include "TVDIAnalyticsConfiguration.h"

@class NSObject;

@interface TAVAnalyticsClientEventSink : NSObject <TAVAnalyticsEventSink>

@property (readonly, nonatomic) id <TAVScribe> scribe;
@property (readonly, copy, nonatomic) TAVAnalyticsPlaylistMetadata *playlistMetadata;
@property (copy, nonatomic) TAVScribeContext *scribeContext;
@property (readonly, nonatomic) id <TAVAnalyticsScribeClientEventParametersBuilder> scribeParametersBuilder;
@property (readonly, nonatomic) TVDIAnalyticsConfiguration *configuration;

/* class methods */
+ (id)eventSinkQueue;

/* instance methods */
- (id)init;
- (id)initWithScribe:(id)scribe playlistMetadata:(id)metadata initialScribeContext:(id)context scribeParametersBuilder:(id)builder configuration:(id)configuration;
- (id)initWithScribe:(id)scribe playlistMetadata:(id)metadata analyticsSessionConfiguration:(id)configuration;
- (void)handleEvent:(id)event;
- (void)handleRawEventWithPlaylistItemKey:(id)key handler:(id /* block */)handler;
- (id)clientEventWithParameters:(id)parameters;

@end

#endif /* TAVAnalyticsClientEventSink_h */
