//
#ifndef T1StandardStatusViewLayoutStateGenerator_h
#define T1StandardStatusViewLayoutStateGenerator_h
@import Foundation;

#include "TTACoreStatusViewLayoutStateGenerator-Protocol.h"

@class NSObject, NSString, TFNComposableViewAdapterSet;

@interface T1StandardStatusViewLayoutStateGenerator : NSObject <TTACoreStatusViewLayoutStateGenerator> {
    /* instance variables */
    TFNComposableViewAdapterSet *_cachedViewAdapterSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)customizeLayoutMetrics:(id)metrics forViewModel:(id)model viewAdapterSet:(id)set;

/* instance methods */
- (id)init;
- (id)layoutStateForViewModel:(id)model options:(unsigned long long)options account:(id)account layoutMetrics:(id)metrics withPreviousLayoutState:(id)state;

@end

#endif /* T1StandardStatusViewLayoutStateGenerator_h */
