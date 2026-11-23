//
#ifndef T1URLProtocolDefaultHandlerContext_h
#define T1URLProtocolDefaultHandlerContext_h
@import Foundation;

#include "T1AppNavigationContext.h"
#include "TFSURLProtocolHandlerContext-Protocol.h"

@class NSDictionary, NSObject, NSString, TFSExternalURLBehavior;

@interface T1URLProtocolDefaultHandlerContext : NSObject <TFSURLProtocolHandlerContext>

@property (readonly, copy, nonatomic) NSString *accountUsername;
@property (readonly, nonatomic) T1AppNavigationContext *navigationContext;
@property (readonly, nonatomic) long long URLSource;
@property (readonly, copy, nonatomic) NSString *sourceAppBundleID;
@property (copy, nonatomic) NSString *universalLinkURL;
@property (copy, nonatomic) NSDictionary *pushPayloadParameters;
@property (retain, nonatomic) TFSExternalURLBehavior *externalURLBehavior;
@property (readonly, nonatomic) _Bool externallyReferred;
@property (readonly, copy, nonatomic) NSString *referrer;
@property (readonly, copy, nonatomic) NSDictionary *urtRequestParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)contextWithAccountUsername:(id)username;
+ (id)contextWithNavigationContext:(id)context;
+ (id)contextWithURLSource:(long long)urlsource referrer:(id)referrer;
+ (id)contextWithURLSource:(long long)urlsource referrer:(id)referrer externallyReferred:(_Bool)referred;
+ (id)contextWithURLSource:(long long)urlsource sourceAppBundleID:(id)id referrer:(id)referrer externallyReferred:(_Bool)referred;
+ (id)contextWithExternalURLBehavior:(id)urlbehavior referrer:(id)referrer;
+ (id)contextWithAccountUsername:(id)username navigationContext:(id)context source:(long long)source externalURLBehavior:(id)urlbehavior referrer:(id)referrer;
+ (id)contextWithAccountUsername:(id)username navigationContext:(id)context source:(long long)source externalURLBehavior:(id)urlbehavior referrer:(id)referrer urtRequestParameters:(id)parameters;

/* instance methods */
- (id)initWithAccountUsername:(id)username navigationContext:(id)context source:(long long)source sourceAppBundleID:(id)id externalURLBehavior:(id)urlbehavior referrer:(id)referrer externallyReferred:(_Bool)referred urtRequestParameters:(id)parameters;
- (_Bool)isExternallyReferred;

@end

#endif /* T1URLProtocolDefaultHandlerContext_h */
