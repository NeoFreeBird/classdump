//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoicePlayableCollectionViewModel_Protocol_h
#define T1VoicePlayableCollectionViewModel_Protocol_h
@import Foundation;

#include "T1VoicePlayableViewModel-Protocol.h"

@class TAVPlayer;

@protocol T1VoicePlayableCollectionViewModel <T1VoicePlayableViewModel>

@required

@property (readonly, nonatomic) TAVPlayer *currentPlayer;
@property (readonly, nonatomic) _Bool hasPrevious;
@property (readonly, nonatomic) _Bool hasNext;

/* required instance methods */
- (void)skipToPrevious;
- (void)skipToNext;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;

@optional

@end

#endif /* T1VoicePlayableCollectionViewModel_Protocol_h */
