//
#ifndef TFSTwitterClientIdentificationProvider_Protocol_h
#define TFSTwitterClientIdentificationProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TFSTwitterClientIdentificationProvider <NSObject>

@required

@property (nonatomic, readonly) NSString *clientApplicationID;
@property (nonatomic, readonly) NSString *consumerKey;
@property (nonatomic, readonly) NSString *consumerSecret;

@optional

@end

#endif /* TFSTwitterClientIdentificationProvider_Protocol_h */
