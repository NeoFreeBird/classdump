//
#ifndef TFSTwitterAPIFeedbackSubmitRequest_h
#define TFSTwitterAPIFeedbackSubmitRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIFeedbackSubmitRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (Class)responseClass;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithFeedbackID:(id)id score:(id)score text:(id)text context:(id)context;

@end

#endif /* TFSTwitterAPIFeedbackSubmitRequest_h */
