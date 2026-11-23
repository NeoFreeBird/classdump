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
