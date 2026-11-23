//
#ifndef TFNComposableViewSetUpdates_h
#define TFNComposableViewSetUpdates_h
@import Foundation;

#include "TFNComposableViewSet.h"

@class NSArray, NSDictionary, NSMutableArray, NSObject;

@interface TFNComposableViewSetUpdates : NSObject {
    /* instance variables */
    TFNComposableViewSet *_viewSet;
    NSDictionary *_updateInfo;
}

@property (readonly, nonatomic) NSArray *updates;

/* instance methods */
- (id)initWithViewSet:(id)set updateInfo:(id)info;
- (id)updatesPassingTest:(id /* block */)test;
- (id)objectAtIndexedSubscript:(long long)subscript;
- (void)addUpdateForViewAdapter:(id)adapter type:(long long)type;
- (void)prepare;
- (void)performUpdates;
- (void)performUpdatesPassingTest:(id /* block */)test;
- (void)performPreAnimationUpdates;
- (void)performPreAnimationUpdatesPassingTest:(id /* block */)test;
- (void)performAnimationUpdates;
- (void)performAnimationUpdatesPassingTest:(id /* block */)test;
- (void)performAnimationCompletionUpdates;
- (void)performAnimationCompletionUpdatesPassingTest:(id /* block */)test;
- (void)_tfn_performOnUpdates:(id /* block */)updates passingTest:(id /* block */)test;

@end

#endif /* TFNComposableViewSetUpdates_h */
