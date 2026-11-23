//
#ifndef _TtC14GraphQLActions23GraphQLEndpointResponse_h
#define _TtC14GraphQLActions23GraphQLEndpointResponse_h
@import Foundation;

#include "TFSTwitterAPIEndpointResponse.h"

@interface GraphQLActions.GraphQLEndpointResponse : TFSTwitterAPIEndpointResponse // (Swift)

/* instance methods */
- (id)modelWithParseError:(id *)error APIErrors:(id *)apierrors;
- (id)initWithCoder:(id)coder;
- (id)initWithRequest:(id)request operationError:(id)error info:(id)info metrics:(id)metrics;

@end

#endif /* _TtC14GraphQLActions23GraphQLEndpointResponse_h */
