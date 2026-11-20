//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCTransformer_Protocol_h
#define TUCTransformer_Protocol_h
@import Foundation;

@protocol TUCTransformer

@required

/* class methods */
+ (_Bool)shouldTransformUnifiedCard:(id)card;
+ (id)transformUnifiedCard:(id)card features:(id)features;

@optional

@end

#endif /* TUCTransformer_Protocol_h */
