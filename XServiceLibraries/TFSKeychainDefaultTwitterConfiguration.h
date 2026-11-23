//
#ifndef TFSKeychainDefaultTwitterConfiguration_h
#define TFSKeychainDefaultTwitterConfiguration_h
@import Foundation;

#include "TFSKeychainConfiguration-Protocol.h"

@class NSObject, NSString;

@interface TFSKeychainDefaultTwitterConfiguration : NSObject <TFSKeychainConfiguration>

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

#endif /* TFSKeychainDefaultTwitterConfiguration_h */
