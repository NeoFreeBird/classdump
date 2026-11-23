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
