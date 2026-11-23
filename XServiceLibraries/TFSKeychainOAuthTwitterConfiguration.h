//
#ifndef TFSKeychainOAuthTwitterConfiguration_h
#define TFSKeychainOAuthTwitterConfiguration_h
@import Foundation;

#include "TFSKeychainConfiguration-Protocol.h"

@class NSObject, NSString;

@interface TFSKeychainOAuthTwitterConfiguration : NSObject <TFSKeychainConfiguration>

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSString *defaultAccessGroup;
@property (readonly, nonatomic) NSString *sharedAccessGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;

@end

#endif /* TFSKeychainOAuthTwitterConfiguration_h */
