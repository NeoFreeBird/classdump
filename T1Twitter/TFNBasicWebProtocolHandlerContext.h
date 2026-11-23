//
#ifndef TFNBasicWebProtocolHandlerContext_h
#define TFNBasicWebProtocolHandlerContext_h
@import Foundation;

#include "TFSURLProtocolHandlerContext-Protocol.h"

@class NSDictionary, NSObject, NSString, TFSExternalURLBehavior;

@interface TFNBasicWebProtocolHandlerContext : NSObject <TFSURLProtocolHandlerContext>

@property (readonly, copy, nonatomic) NSString *sourceAppBundleID;
@property (retain, nonatomic) TFSExternalURLBehavior *externalURLBehavior;
@property (readonly, nonatomic) _Bool externallyReferred;
@property (readonly, copy, nonatomic) NSString *referrer;
@property (readonly, copy, nonatomic) NSDictionary *urtRequestParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)contextWithOpenExternalURLSessionManager:(id)manager;

/* instance methods */
- (_Bool)isExternallyReferred;

@end

#endif /* TFNBasicWebProtocolHandlerContext_h */
