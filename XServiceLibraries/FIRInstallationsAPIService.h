//
#ifndef FIRInstallationsAPIService_h
#define FIRInstallationsAPIService_h
@import Foundation;

#include "FIRHeartbeatLoggerProtocol-Protocol.h"

@class NSObject, NSString, NSURLSession;

@interface FIRInstallationsAPIService : NSObject

@property (readonly, nonatomic) NSURLSession *URLSession;
@property (readonly, nonatomic) NSString *APIKey;
@property (readonly, nonatomic) NSString *projectID;
@property (readonly) id <FIRHeartbeatLoggerProtocol> heartbeatLogger;

/* instance methods */
- (id)initWithAPIKey:(id)apikey projectID:(id)id heartbeatLogger:(id)logger;
- (id)initWithURLSession:(id)urlsession APIKey:(id)apikey projectID:(id)id heartbeatLogger:(id)logger;
- (id)registerInstallation:(id)installation;
- (id)refreshAuthTokenForInstallation:(id)installation;
- (id)deleteInstallation:(id)installation;
- (id)registerRequestWithInstallation:(id)installation;
- (id)registeredInstallationWithInstallation:(id)installation serverResponse:(id)response;
- (id)authTokenRequestWithInstallation:(id)installation;
- (id)authTokenWithServerResponse:(id)response;
- (id)deleteInstallationRequestWithInstallation:(id)installation;
- (id)requestWithURL:(id)url HTTPMethod:(id)httpmethod bodyDict:(id)dict refreshToken:(id)token;
- (id)requestWithURL:(id)url HTTPMethod:(id)httpmethod bodyDict:(id)dict refreshToken:(id)token additionalHeaders:(id)headers;
- (id)URLRequestPromise:(id)promise;
- (id)validateHTTPResponseStatusCode:(id)code;
- (id)sendURLRequest:(id)urlrequest;
- (id)SDKVersion;
- (id)validateInstallation:(id)installation;
- (void)setJSONHTTPBody:(id)jsonhttpbody forRequest:(id)request;

@end

#endif /* FIRInstallationsAPIService_h */
