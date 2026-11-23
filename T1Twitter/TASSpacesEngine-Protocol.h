//
#ifndef TASSpacesEngine_Protocol_h
#define TASSpacesEngine_Protocol_h
@import Foundation;

#include "TASSpacesFetcher-Protocol.h"
#include "TASSpacesScheduler-Protocol.h"

@protocol TASSpacesEngine

@required

@property (readonly, nonatomic) id <TASSpacesFetcher> fetcher;
@property (readonly, nonatomic) id <TASSpacesScheduler> scheduler;

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
