//
#ifndef TFSTwitterCoreServicesConfiguration_h
#define TFSTwitterCoreServicesConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSTwitterCoreServicesConfiguration-Protocol.h"

@class NSNumber, NSObject, NSSet, NSString;

@interface TFSTwitterCoreServicesConfiguration : NSObject <TFSTwitterCoreServicesConfiguration, NSCopying>

@property (nonatomic) long long shortenedURLLengthSecure;
@property (copy, nonatomic) NSSet *excludedEmailDomains;
@property (nonatomic) double typeaheadUserPrefetchRateInSeconds;
@property (copy, nonatomic) NSSet *nonUsernamePaths;
@property (nonatomic) long long scribeAPISampleSize;
@property (nonatomic) long long scribeAPIErrorSampleSize;
@property (copy, nonatomic) NSSet *excludedWebViewDomains;
@property (retain, nonatomic) NSNumber *coreServices2TNLForegroundIdleTimeout;
@property (retain, nonatomic) NSNumber *coreServices2TNLBackgroundIdleTimeout;
@property (nonatomic) unsigned long long maxNumberDiscountedURLs;
@property (nonatomic) unsigned long long maxCombiningMarksPerDisplayTextCharacter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)currentConfiguration;
+ (void)updateConfiguration:(id)configuration;
+ (id)_queue;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSTwitterCoreServicesConfiguration_h */
