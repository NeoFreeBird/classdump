//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterClientIdentificationProvider_Protocol_h
#define TFSTwitterClientIdentificationProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTwitterClientIdentificationProvider <NSObject>

@required

@property (nonatomic, readonly) NSString *clientApplicationID;
@property (nonatomic, readonly) NSString *consumerKey;
@property (nonatomic, readonly) NSString *consumerSecret;

@optional

@end

#endif /* TFSTwitterClientIdentificationProvider_Protocol_h */
