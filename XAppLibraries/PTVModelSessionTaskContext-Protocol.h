//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVModelSessionTaskContext_Protocol_h
#define PTVModelSessionTaskContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVModelSessionTaskClient-Protocol.h"

@class NSData, NSURLRequest;

@protocol PTVModelSessionTaskContext <NSObject>

@required

@property (readonly, nonatomic) NSURLRequest *ptv_request;
@property (readonly, nonatomic) NSData *ptv_uploadData;
@property (readonly, nonatomic) id <PTVModelSessionTaskClient> ptv_client;

@optional

@end

#endif /* PTVModelSessionTaskContext_Protocol_h */
