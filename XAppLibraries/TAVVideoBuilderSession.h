//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVVideoBuilderSession_h
#define TAVVideoBuilderSession_h
@import Foundation;

#include "TAVAnalyticsPlaylistMetadata.h"
#include "TAVAnalyticsSession.h"
#include "TAVAnalyticsSessionConfiguration.h"
#include "TAVScribe-Protocol.h"
#include "TAVScribeContext.h"
#include "TAVSession-Protocol.h"
#include "TAVVideoBuilder.h"

@class NSArray, NSMutableDictionary, NSObject, NSUUID;

@interface TAVVideoBuilderSession : NSObject <TAVSession>

@property (readonly, nonatomic) TAVVideoBuilder *videoBuilder;
@property (readonly, copy, nonatomic) TAVAnalyticsSessionConfiguration *analyticsSessionConfiguration;
@property (readonly, copy, nonatomic) TAVScribeContext *initialScribeContext;
@property (retain, nonatomic) TAVAnalyticsSession *analyticsSession;
@property (readonly, copy, nonatomic) NSArray *observers;
@property (copy, nonatomic) TAVAnalyticsPlaylistMetadata *playlistMetadata;
@property (readonly, nonatomic) id <TAVScribe> scribe;
@property (readonly, nonatomic) NSUUID *sessionID;
@property (retain, nonatomic) NSMutableDictionary *debugInfo;

/* instance methods */
- (id)description;
- (id)init;
- (id)initWithScribe:(id)scribe observers:(id)observers builder:(id)builder playlistMetadata:(id)metadata analyticsConfiguration:(id)configuration;
- (void)prepareWithPlayerPreparationStartWallTime:(id)time completion:(id /* block */)completion;
- (void)end;

@end

#endif /* TAVVideoBuilderSession_h */
