//
#ifndef _TtC14GraphQLActions22GraphQLEndpointRequest_h
#define _TtC14GraphQLActions22GraphQLEndpointRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"
#include "TNLRequestConfiguration.h"

@class GraphQLRequests.GraphQLRequestParameters, Swift.Bool, _$sSS, _$sSdSg, __C.TNUTransactionMetricsType ?;

@interface GraphQLActions.GraphQLEndpointRequest : TFSTwitterAPIEndpointRequest { // (Swift)
    /* instance variables */
    Swift.String documentID;
    Swift.String operationName;
    GraphQLRequests.GraphQLRequestParameters graphQLParameters;
    Swift.Bool attestRequestPayload;
    Swift.Double? operationTimeout;
    __C.TNUTransactionMetricsType ? transactionMetricsType;
}

@property (nonatomic, readonly) TNLRequestConfiguration *requestConfiguration;

/* class methods */
+ (long long)HTTPMethodValue;
+ (unsigned long long)baseURLType;
+ (Class)responseClass;
+ (unsigned long long)responseHydrationFlags;
+ (unsigned long long)supportedAuthenticationTypes;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;

@end

#endif /* _TtC14GraphQLActions22GraphQLEndpointRequest_h */
