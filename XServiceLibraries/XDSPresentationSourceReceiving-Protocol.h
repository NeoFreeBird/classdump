//
#ifndef XDSPresentationSourceReceiving_Protocol_h
#define XDSPresentationSourceReceiving_Protocol_h
@import Foundation;

@protocol XDSPresentationSourceReceiving

@required

/* required instance methods */
- (void)xds_willPresentFromViewController:(id)controller;

@optional

@end

#endif /* XDSPresentationSourceReceiving_Protocol_h */
