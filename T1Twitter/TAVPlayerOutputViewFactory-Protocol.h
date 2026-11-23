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
