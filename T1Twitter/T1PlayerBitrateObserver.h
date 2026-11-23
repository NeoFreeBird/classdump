//
#ifndef T1PlayerBitrateObserver_h
#define T1PlayerBitrateObserver_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TFSTwitterLegacyScribeLogMethods-Protocol.h"

@class NSObject, NSString, TAVPlaybackState, TAVScribeContext;

@interface T1PlayerBitrateObserver : NSObject <TAVPlaybackObserver> {
    /* instance variables */
    id <TFSTwitterLegacyScribeLogMethods> _scribe;
    TAVScribeContext *_scribeContext;
    TAVPlaybackState *_lastObservedPlaybackState;
    NSString *_lastBitrate;
    NSString *_lastQuality;
    _Bool _enabledSound;
}

/* instance methods */
- (id)initWithScribe:(id)scribe scribeContext:(id)context;
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (void)_logAction:(id)action playbackState:(id)state parameters:(id)parameters;

@end

#endif /* T1PlayerBitrateObserver_h */
