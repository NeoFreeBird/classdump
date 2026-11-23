//
#ifndef T1StandardSpacesEngine_h
#define T1StandardSpacesEngine_h
@import Foundation;

#include "TASSpacesContext-Protocol.h"
#include "TASSpacesEngine-Protocol.h"
#include "TASSpacesFetcher-Protocol.h"
#include "TASSpacesScheduler-Protocol.h"

@class NSObject;

@interface T1StandardSpacesEngine : NSObject <TASSpacesEngine>

@property (weak, nonatomic) id <TASSpacesContext> context;
@property (readonly, nonatomic) id <TASSpacesFetcher> fetcher;
@property (readonly, nonatomic) id <TASSpacesScheduler> scheduler;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)createSpaceModelWithSettings:(id)settings;
- (id)createSpaceModelWithSpaceID:(id)id;
- (id)createSpaceModelWithSpaceID:(id)id conferenceKey:(id)key;
- (id)createSpaceModelWithAudiospace:(id)audiospace;
- (id)createClipModelWithClipID:(id)id spaceID:(id)id;
- (id)createClipModelWithClipData:(id)data;

@end

#endif /* T1StandardSpacesEngine_h */
