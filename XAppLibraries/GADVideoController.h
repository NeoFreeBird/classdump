//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADVideoController_h
#define GADVideoController_h
@import Foundation;

#include "GADAdVideoController.h"
#include "GADObserverCollection.h"

@class NSObject;
@protocol GADVideoControllerDelegate, OS_dispatch_queue;

@interface GADVideoController : NSObject {
    /* instance variables */
    GADObserverCollection *_collection;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

@property (retain) GADAdVideoController *internalVideoController;
@property (weak, nonatomic) id <GADVideoControllerDelegate> delegate;
@property (readonly, nonatomic) _Bool isMuted;

/* instance methods */
- (id)init;
- (void)play;
- (void)pause;
- (void)stop;
- (void)setMute:(_Bool)mute;
- (_Bool)customControlsEnabled;
- (_Bool)clickToExpandEnabled;
- (void)startObservingAdVideoController;

@end

#endif /* GADVideoController_h */
