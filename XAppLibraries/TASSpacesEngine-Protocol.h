//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesEngine_Protocol_h
#define TASSpacesEngine_Protocol_h
@import Foundation;

#include "TASSpacesFetcher-Protocol.h"
#include "TASSpacesScheduler-Protocol.h"

@protocol TASSpacesEngine

@required

@property (nonatomic, readonly) id <TASSpacesFetcher> fetcher;
@property (nonatomic, readonly) id <TASSpacesScheduler> scheduler;

/* required instance methods */
- (id)createSpaceModelWithSettings:(id)settings;
- (id)createSpaceModelWithSpaceID:(id)id;
- (id)createSpaceModelWithSpaceID:(id)id conferenceKey:(id)key;
- (id)createSpaceModelWithAudiospace:(id)audiospace;
- (id)createClipModelWithClipID:(id)id spaceID:(id)id;
- (id)createClipModelWithClipData:(id)data;

@optional

@end

#endif /* TASSpacesEngine_Protocol_h */
