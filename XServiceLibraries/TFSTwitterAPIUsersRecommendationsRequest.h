//
#ifndef TFSTwitterAPIUsersRecommendationsRequest_h
#define TFSTwitterAPIUsersRecommendationsRequest_h
@import Foundation;

#include "TFSTwitterAPIEndpointRequest.h"

@interface TFSTwitterAPIUsersRecommendationsRequest : TFSTwitterAPIEndpointRequest

/* class methods */
+ (id)endpointPath;
+ (unsigned long long)responseHydrationFlags;

/* instance methods */
- (id)initWithEndpointPath:(id)path parameters:(id)parameters multipartFormData:(id)data bodyData:(id)data bodyFilePath:(id)path headerFields:(id)fields context:(id)context responseModelBuilder:(id)builder emptyResponseDataExpected:(_Bool)expected;
- (id)initWithUserID:(id)id displayLocation:(id)location allowPromotedContent:(_Bool)content limit:(id)limit referralSource:(id)source excluded:(id)excluded context:(id)context responseModelBuilder:(id)builder;
- (id)initWithScreenName:(id)name displayLocation:(id)location allowPromotedContent:(_Bool)content limit:(id)limit referralSource:(id)source excluded:(id)excluded context:(id)context responseModelBuilder:(id)builder;
- (id)initWithUserID:(id)id screenName:(id)name displayLocation:(id)location allowPromotedContent:(_Bool)content limit:(id)limit referralSource:(id)source excluded:(id)excluded context:(id)context responseModelBuilder:(id)builder;
- (id)initWithITSTopics:(id)itstopics customInterests:(id)interests displayLocation:(id)location allowPromotedContent:(_Bool)content context:(id)context responseModelBuilder:(id)builder;
- (id)initWithUserID:(id)id screenName:(id)name profileID:(id)id displayLocation:(id)location connections:(_Bool)connections allowPromotedContent:(_Bool)content limit:(id)limit referralSource:(id)source excluded:(id)excluded context:(id)context responseModelBuilder:(id)builder;

@end

#endif /* TFSTwitterAPIUsersRecommendationsRequest_h */
