//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposableViewSet_h
#define TFNComposableViewSet_h
@import Foundation;

#include "TFNComposableViewAdapterSet.h"
#include "TFNComposableViewLayoutStateSet.h"
#include "TFNReusableViewCache.h"
#include "TFNReusableViewCacheContainer-Protocol.h"

@class NSMutableArray, NSObject, NSString, UIView;
@protocol TFNComposableViewHost, TFNComposableViewLayoutTracer, TFNComposableViewPrepareForReuseTracer;

@interface TFNComposableViewSet : NSObject <TFNReusableViewCacheContainer> {
    /* instance variables */
    NSMutableArray *_views;
}

@property (readonly, weak, nonatomic) UIView<TFNComposableViewHost> *hostView;
@property (weak, nonatomic) id <TFNComposableViewLayoutTracer> layoutTracer;
@property (weak, nonatomic) id <TFNComposableViewPrepareForReuseTracer> prepareForReuseTracer;
@property (readonly, nonatomic) TFNComposableViewAdapterSet *viewAdapterSet;
@property (copy, nonatomic) id /* block */ addToHostViewBlock;
@property (retain, nonatomic) TFNComposableViewLayoutStateSet *layoutStateSet;
@property (retain, nonatomic) id viewModel;
@property (retain, nonatomic) TFNReusableViewCache *reusableViewCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithHostView:(id)view viewAdapterSet:(id)set;
- (id)init;
- (id)objectAtIndexedSubscript:(long long)subscript;
- (void)setObject:(id)object atIndexedSubscript:(long long)subscript;
- (void)enumerateViewsUsingBlock:(id /* block */)block;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info;
- (id)viewSetUpdatesForViewModel:(id)model didUpdateWithInfo:(id)info;
- (_Bool)isLayoutStateCompatibleWithViewModel;
- (_Bool)applyViewModelUpdateWithInfo:(id)info toViewWithAdapter:(id)adapter isLayoutStateCompatible:(_Bool)compatible;
- (void)_tfn_gatherViewSetUpdates:(id)updates toViewWithAdapter:(id)adapter forViewModelUpdateWithInfo:(id)info isLayoutStateCompatible:(_Bool)compatible;
- (void)_tfn_addView:(id)view toHostViewWithViewAdapter:(id)adapter;
- (void)_tfn_setupStateForView:(id)view withViewAdapter:(id)adapter includeViewModel:(_Bool)model layoutState:(_Bool)state;
- (void)_tfn_removeView:(id)view fromHostViewWithViewAdapter:(id)adapter;

@end

#endif /* TFNComposableViewSet_h */
