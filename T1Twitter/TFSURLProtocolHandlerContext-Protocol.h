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
