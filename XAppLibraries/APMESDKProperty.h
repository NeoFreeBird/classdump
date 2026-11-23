//
#ifndef APMESDKProperty_h
#define APMESDKProperty_h
@import Foundation;

#include "APMESDKPropertyProviderDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface APMESDKProperty : NSObject

@property (readonly, nonatomic) NSString *name;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *diversionKey;
@property (copy, nonatomic) NSDictionary *customProperties;
@property (weak, nonatomic) id <APMESDKPropertyProviderDelegate> delegate;

/* instance methods */
- (id)initWithName:(id)name;
- (id)proto;

@end

#endif /* APMESDKProperty_h */
