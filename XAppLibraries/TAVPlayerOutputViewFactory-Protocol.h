//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVPlayerOutputViewFactory_Protocol_h
#define TAVPlayerOutputViewFactory_Protocol_h
@import Foundation;

@class NSDictionary;

@protocol TAVPlayerOutputViewFactory

@required

@property (nonatomic, readonly) _Bool productsRequirePixelBufferSource;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;

/* required instance methods */
- (id)playerOutputView;

@optional

@end

#endif /* TAVPlayerOutputViewFactory_Protocol_h */
