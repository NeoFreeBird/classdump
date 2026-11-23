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
