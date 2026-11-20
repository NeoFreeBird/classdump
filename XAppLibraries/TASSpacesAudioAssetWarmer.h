//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesAudioAssetWarmer_h
#define TASSpacesAudioAssetWarmer_h
@import Foundation;

#include "TASSpaceModelObserver-Protocol.h"

@class NSObject;

@interface TASSpacesAudioAssetWarmer : NSObject <TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 store;
    @40@0:8:16@24@32 didWarmAmbientMusic;
    @40@0:8:16@24@32 didWarmSoundLibrary;
}

/* class methods */
+ (void)warmSelectedAmbientTrack;

/* instance methods */
- (id)init;
- (void)deleteSupersededVersions;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)spaceModel:(id)model didUpdateLoggedInUserModel:(id)model;

@end

#endif /* TASSpacesAudioAssetWarmer_h */
