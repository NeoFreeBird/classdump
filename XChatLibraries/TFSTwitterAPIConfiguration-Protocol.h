//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIConfiguration_Protocol_h
#define TFSTwitterAPIConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSSet, NSString, NSURLCache;
@protocol TFSFeatureSwitchProvider, TFSTwitterAPIURLBaseProvider;

@protocol TFSTwitterAPIConfiguration <NSObject>

@required

@property (nonatomic, readonly) id <TFSTwitterAPIURLBaseProvider> URLBaseProvider;
@property (nonatomic, readonly) id <TFSTwitterAPIURLBaseProvider> URLBaseProvider;
@property (nonatomic, readonly) id <TFSFeatureSwitchProvider> featureSwitchProvider;
@property (nonatomic, readonly) NSURLCache *URLCache;
@property (nonatomic, readonly) NSURLCache *URLCache;
@property (nonatomic, readonly) NSString *cardsPlatformIdentifier;
@property (nonatomic, readonly) NSSet *optionalEndpointAllowList;

/* required instance methods */
- (id)statusParametersDictionary;
- (id)userParametersDictionary;
- (id)cardsParametersDictionary;
- (id)momentsParametersDictionary;
- (id)additionalContentDecoders;
- (id)additionalContentEncoders;
- (id)configurationWithAdditionalStatusParameters:(id)parameters userParameters:(id)parameters featureSwitchProvider:(id)provider;
- (id)configurationWithAdditionalStatusParameters:(id)parameters userParameters:(id)parameters featureSwitchProvider:(id)provider;

@optional

@end

#endif /* TFSTwitterAPIConfiguration_Protocol_h */
