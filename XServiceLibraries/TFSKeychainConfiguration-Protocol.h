//
#ifndef TFSKeychainConfiguration_Protocol_h
#define TFSKeychainConfiguration_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSKeychainConfiguration <NSObject>

@required

@property (readonly, nonatomic) NSString *serviceName;

@optional

@property (readonly, nonatomic) NSString *defaultAccessGroup;
@property (readonly, nonatomic) NSString *sharedAccessGroup;

@end

#endif /* TFSKeychainConfiguration_Protocol_h */
