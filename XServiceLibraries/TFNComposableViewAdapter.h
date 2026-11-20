//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNComposableViewAdapter_h
#define TFNComposableViewAdapter_h
@import Foundation;

@class NSArray, NSObject, UIView;
@protocol TFNComposableViewHost;

@interface TFNComposableViewAdapter : NSObject

@property (readonly, nonatomic) long long viewIdentifier;
@property (weak, nonatomic) UIView<TFNComposableViewHost> *hostView;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) id viewModel;
@property (copy, nonatomic) NSArray *hideWhenAnyVisible;
@property (copy, nonatomic) NSArray *showWhenAllVisible;
@property (copy, nonatomic) NSArray *showWhenAnyVisible;
@property (copy, nonatomic) id /* block */ maximumSizeBlock;

/* instance methods */
- (id)initWithViewIdentifier:(long long)identifier;
- (id)init;
- (_Bool)shouldBeVisibleForViewModel:(id)model;
- (_Bool)isVisibleForViewModel:(id)model;
- (id)initializeView;
- (_Bool)deinitializeView:(id)view;
- (void)view:(id)view willMoveToHostView:(id)view;
- (void)setViewModel:(id)model forView:(id)view;
- (void)unsetViewModelForView:(id)view;
- (void)viewModel:(id)model didUpdateWithInfo:(id)info forView:(id)view;
- (void)setLayoutState:(id)state forView:(id)view;
- (id)layoutStateForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isLayoutState:(id)state validForViewModel:(id)model layoutMetrics:(id)metrics;
- (_Bool)isAsyncViewInitializationEnabledForViewModel:(id)model;

@end

#endif /* TFNComposableViewAdapter_h */
