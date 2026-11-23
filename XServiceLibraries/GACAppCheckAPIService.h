//
#ifndef GACAppCheckAPIService_h
#define GACAppCheckAPIService_h
@import Foundation;

#include "GACAppCheckAPIServiceProtocol-Protocol.h"

@class NSArray, NSObject, NSString, NSURLSession;

@interface GACAppCheckAPIService : NSObject <GACAppCheckAPIServiceProtocol>

@property (readonly, nonatomic) NSURLSession *URLSession;
@property (readonly, nonatomic) NSString *APIKey;
@property (readonly, nonatomic) NSArray *requestHooks;
@property (readonly, nonatomic) NSString *baseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithURLSession:(id)urlsession baseURL:(id)url APIKey:(id)apikey requestHooks:(id)hooks;
- (id)sendRequestWithURL:(id)url HTTPMethod:(id)httpmethod body:(id)body additionalHeaders:(id)headers;
- (id)requestWithURL:(id)url HTTPMethod:(id)httpmethod body:(id)body additionalHeaders:(id)headers;
- (id)sendURLRequest:(id)urlrequest;
- (id)validateHTTPResponseStatusCode:(id)code;
- (id)appCheckTokenWithAPIResponse:(id)apiresponse;
- (id)defaultQueue;

@end

#endif /* GACAppCheckAPIService_h */
