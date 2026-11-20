//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AdDisplayLocationProvider_Protocol_h
#define T1AdDisplayLocationProvider_Protocol_h
@import Foundation;

@class NSString;

@protocol T1AdDisplayLocationProvider

@required

@property (nonatomic, readonly) NSString *adDisplayLocation;

@optional

@end

#endif /* T1AdDisplayLocationProvider_Protocol_h */
