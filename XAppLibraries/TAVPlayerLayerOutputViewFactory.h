//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerLayerOutputViewFactory_h
#define TAVPlayerLayerOutputViewFactory_h
@import Foundation;

#include "TAVPlayerOutputViewFactory-Protocol.h"

@class NSDictionary, NSObject, UIView;

@interface TAVPlayerLayerOutputViewFactory : NSObject <TAVPlayerOutputViewFactory>

@property (readonly, nonatomic) UIView *stagingView;
@property (readonly, nonatomic) id /* block */ windowProvider;
@property (readonly, nonatomic) _Bool productsRequirePixelBufferSource;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;

/* class methods */
+ (id)defaultFactory;
+ (id)private_newStagingViewWithWindow:(id)window;

/* instance methods */
- (id)initWithWindowProvider:(id /* block */)provider;
- (id)initWithWindow:(id)window;
- (id)playerOutputView;
- (id)init;
- (void)dealloc;

@end

#endif /* TAVPlayerLayerOutputViewFactory_h */
