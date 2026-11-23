//
#ifndef TFNCellVisibilityBroadcaster_h
#define TFNCellVisibilityBroadcaster_h
@import Foundation;

#include "TFNCellVisibilityListener-Protocol.h"
#include "TFNDataViewController.h"

@class NSMutableSet, NSObject, NSString, UIView;
@protocol TFNCellVisibilityBroadcasterDelegate;

@interface TFNCellVisibilityBroadcaster : NSObject <TFNCellVisibilityListener> {
    /* instance variables */
    NSMutableSet *_strongListeners;
    UIView *_cell;
    TFNDataViewController *_dataViewController;
    double _visibilityPercentage;
    unsigned long long _visibilityState;
}

@property (weak, nonatomic) id <TFNCellVisibilityBroadcasterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)cellDidDisplay:(id)display inDataViewController:(id)controller withVisibleIntersection:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })intersection;
- (void)dealloc;
- (void)cellWillDisplay:(id)display inDataViewController:(id)controller;
- (void)cellDidDisplay:(id)display inDataViewController:(id)controller withVisibilityPercentage:(double)percentage visibilityState:(unsigned long long)state;
- (void)cellWillEndDisplaying:(id)displaying inDataViewController:(id)controller;
- (void)cellDidEndDisplaying:(id)displaying inDataViewController:(id)controller reason:(unsigned long long)reason;
- (_Bool)_tfn_didCellEndDisplayingFromViewport:(id)viewport inDataViewController:(id)controller;
- (void)_tfn_invokeCellDidEndDisplayingFromViewport:(id)viewport inDataViewController:(id)controller;
- (void)_tfn_invokeListenersRespondingToSelector:(SEL)selector withBlock:(id /* block */)block;
- (void)_tfn_resetInternalState;

@end

#endif /* TFNCellVisibilityBroadcaster_h */
