//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
