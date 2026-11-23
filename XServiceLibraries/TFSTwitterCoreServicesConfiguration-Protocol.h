//
#ifndef TFSTwitterCoreServicesConfiguration_Protocol_h
#define TFSTwitterCoreServicesConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSTwitterAPICommandConfiguration-Protocol.h"

@class NSNumber, NSSet;

@protocol TFSTwitterCoreServicesConfiguration <TFSTwitterAPICommandConfiguration, NSObject>

@required

@property (readonly, nonatomic) long long shortenedURLLengthSecure;
@property (readonly, copy, nonatomic) NSSet *excludedEmailDomains;
@property (readonly, nonatomic) double typeaheadUserPrefetchRateInSeconds;
@property (readonly, copy, nonatomic) NSSet *nonUsernamePaths;
@property (readonly, copy, nonatomic) NSSet *excludedWebViewDomains;
@property (readonly, nonatomic) NSNumber *coreServices2TNLForegroundIdleTimeout;
@property (readonly, nonatomic) NSNumber *coreServices2TNLBackgroundIdleTimeout;
@property (readonly, nonatomic) unsigned long long maxNumberDiscountedURLs;
@property (readonly, nonatomic) unsigned long long maxCombiningMarksPerDisplayTextCharacter;

@optional

@end

#endif /* TFSTwitterCoreServicesConfiguration_Protocol_h */
