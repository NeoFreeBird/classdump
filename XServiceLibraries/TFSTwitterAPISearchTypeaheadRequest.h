//
#ifndef TFSTwitterAPISearchTypeaheadRequest_h
#define TFSTwitterAPISearchTypeaheadRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPISearchTypeaheadRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)supportedAuthenticationTypes;
+ (id)_typeaheadParameterForCacheUpdateDate:(id)date;
+ (id)_typeaheadParameterForResultType:(long long)type;
+ (id)_typeaheadParameterForSourceType:(unsigned long long)type;
+ (id)_typeaheadParameterForTopicType:(unsigned long long)type;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithResultType:(long long)type query:(id)query count:(id)count source:(unsigned long long)source prefetch:(_Bool)prefetch mediaTaggingInPrefetch:(_Bool)prefetch usersCacheAge:(id)age geoRequestFilter:(_Bool)filter contextText:(id)text topicType:(unsigned long long)type communityId:(id)id context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPISearchTypeaheadRequest_h */
