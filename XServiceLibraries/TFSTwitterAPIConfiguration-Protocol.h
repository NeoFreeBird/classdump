//
#ifndef TFSTwitterAPIConfiguration_Protocol_h
#define TFSTwitterAPIConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFSFeatureSwitchProvider-Protocol.h"
#include "TFSTwitterAPIURLBaseProvider-Protocol.h"

@class NSSet, NSString, NSURLCache;

@protocol TFSTwitterAPIConfiguration <NSObject>

@required

@property (readonly, nonatomic) id <TFSTwitterAPIURLBaseProvider> URLBaseProvider;
@property (readonly, nonatomic) id <TFSFeatureSwitchProvider> featureSwitchProvider;
@property (readonly, nonatomic) NSURLCache *URLCache;
@property (readonly, copy, nonatomic) NSString *cardsPlatformIdentifier;
@property (readonly, copy, nonatomic) NSSet *optionalEndpointAllowList;

/* required instance methods */
- (id)statusParametersDictionary;
- (id)userParametersDictionary;
- (id)cardsParametersDictionary;
- (id)momentsParametersDictionary;
- (id)additionalContentDecoders;
- (id)additionalContentEncoders;
- (id)configurationWithAdditionalStatusParameters:(id)parameters userParameters:(id)parameters featureSwitchProvider:(id)provider;

@optional

@end

#endif /* TFSTwitterAPIConfiguration_Protocol_h */
