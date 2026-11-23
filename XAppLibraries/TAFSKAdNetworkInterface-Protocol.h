//
#ifndef TAFSKAdNetworkInterface_Protocol_h
#define TAFSKAdNetworkInterface_Protocol_h
@import Foundation;

@protocol TAFSKAdNetworkInterface

@required

/* required instance methods */
- (void)startSKAdImpression:(id)impression completion:(id /* block */)completion;
- (void)endSKAdImpression:(id)impression completion:(id /* block */)completion;

@optional

@end

#endif /* TAFSKAdNetworkInterface_Protocol_h */
