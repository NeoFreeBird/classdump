//
#ifndef TAVTechnologicalPlayerMainThreadState_h
#define TAVTechnologicalPlayerMainThreadState_h
@import Foundation;

#include "TAVAttachmentRegistry.h"
#include "TAVOutputViewHosting-Protocol.h"
#include "TAVPlaybackObserverGroup.h"
#include "TAVPlaybackState.h"
#include "TAVPlayerOutputView-Protocol.h"
#include "TAVPlayerTechnology-Protocol.h"
#include "TAVSeekCursor.h"
#include "TAVSession-Protocol.h"

@class NSHashTable, NSObject, UIView;

@interface TAVTechnologicalPlayerMainThreadState : NSObject

@property (retain, nonatomic) id <TAVSession> session;
@property (retain, nonatomic) TAVPlaybackObserverGroup *sessionObserverGroup;
@property (readonly, nonatomic) NSHashTable *weakObservers;
@property (readonly, nonatomic) TAVAttachmentRegistry *attachmentRegistry;
@property (copy, nonatomic) TAVPlaybackState *lastEmittedPlaybackState;
@property (nonatomic) _Bool isMuted;
@property (nonatomic) float volume;
@property (retain, nonatomic) TAVSeekCursor *scrubCursor;
@property (retain, nonatomic) TAVSeekCursor *clientInitiatedSeekCursor;
@property (retain, nonatomic) UIView<TAVPlayerOutputView> *outputView;
@property (weak, nonatomic) UIView<TAVOutputViewHosting> *outputViewHost;
@property (retain, nonatomic) id <TAVPlayerTechnology> currentTech;

/* instance methods */
- (id)init;

@end

#endif /* TAVTechnologicalPlayerMainThreadState_h */
