//
#ifndef TAVPlaybackObserverGroup_h
#define TAVPlaybackObserverGroup_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class NSArray, NSHashTable, NSObject;

@interface TAVPlaybackObserverGroup : NSObject <TAVPlaybackObserver> {
    /* instance variables */
    NSHashTable *_weakObservers;
}

@property (readonly, nonatomic) NSArray *observers;

/* instance methods */
- (id)init;
- (id)initWithObservers:(id)observers;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* TAVPlaybackObserverGroup_h */
