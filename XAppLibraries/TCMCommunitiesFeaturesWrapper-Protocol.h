//
#ifndef TCMCommunitiesFeaturesWrapper_Protocol_h
#define TCMCommunitiesFeaturesWrapper_Protocol_h
@import Foundation;

#include "TCMCommunitiesFeatures.h"

@protocol TCMCommunitiesFeaturesWrapper

@required

@property (nonatomic, readonly) TCMCommunitiesFeatures *wrappedCommunitiesFeatures;

@optional

@end

#endif /* TCMCommunitiesFeaturesWrapper_Protocol_h */
