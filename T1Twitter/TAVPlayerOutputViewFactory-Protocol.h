//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerOutputViewFactory_Protocol_h
#define TAVPlayerOutputViewFactory_Protocol_h
@import Foundation;

@class NSDictionary;

@protocol TAVPlayerOutputViewFactory

@required

@property (readonly, nonatomic) _Bool productsRequirePixelBufferSource;
@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;

/* required instance methods */
- (id)playerOutputView;

@optional

@end

#endif /* TAVPlayerOutputViewFactory_Protocol_h */
