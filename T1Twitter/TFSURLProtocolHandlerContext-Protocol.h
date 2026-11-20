//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSURLProtocolHandlerContext_Protocol_h
#define TFSURLProtocolHandlerContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSDictionary, NSString, TFSExternalURLBehavior;

@protocol TFSURLProtocolHandlerContext <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *sourceAppBundleID;
@property (retain, nonatomic) TFSExternalURLBehavior *externalURLBehavior;
@property (readonly, nonatomic) _Bool externallyReferred;
@property (readonly, copy, nonatomic) NSString *referrer;
@property (readonly, copy, nonatomic) NSDictionary *urtRequestParameters;

/* required instance methods */
- (_Bool)isExternallyReferred;

@optional

@end

#endif /* TFSURLProtocolHandlerContext_Protocol_h */
