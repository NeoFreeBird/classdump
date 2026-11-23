//
#ifndef TFSTwitterAPIAccountUpdateProfileBannerRequest_h
#define TFSTwitterAPIAccountUpdateProfileBannerRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIAccountUpdateProfileBannerRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (long long)HTTPMethodValue;
+ (_Bool)isMultipartFormPostRequest;
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithBannerData:(id)data bannerFileName:(id)name size:(struct CGSize { double x0; double x1; })size leftOffset:(double)offset topOffset:(double)offset originalMediaHash:(id)hash context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIAccountUpdateProfileBannerRequest_h */
