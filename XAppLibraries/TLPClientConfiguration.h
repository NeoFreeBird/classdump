//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TLPClientConfiguration_h
#define TLPClientConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFSAPISession-Protocol.h"
#include "TFSTwitterScribeWriter-Protocol.h"

@class NSObject, NSString;
@protocol OS_dispatch_queue, TFSTwitterAPIConfiguration;

@interface TLPClientConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) id <TFSAPISession> APISession;
@property (readonly, nonatomic) id <TFSTwitterAPIConfiguration> APIConfiguration;
@property (readonly, nonatomic) id <TFSTwitterScribeWriter> scribeWriter;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;

/* instance methods */
- (id)initWithAccountID:(id)id session:(id)session configuration:(id)configuration backgroundQueue:(id)queue scribeWriter:(id)writer;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TLPClientConfiguration_h */
