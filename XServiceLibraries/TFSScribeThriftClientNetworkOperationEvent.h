//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSScribeThriftClientNetworkOperationEvent_h
#define TFSScribeThriftClientNetworkOperationEvent_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "TBase-Protocol.h"
#include "TFSScribeThriftClientNetworkOperation.h"
#include "TFSScribeThriftVersionedCommonHeader.h"

@class NSObject, NSString;

@interface TFSScribeThriftClientNetworkOperationEvent : NSObject <TBase, NSCoding>

@property (retain, nonatomic) TFSScribeThriftVersionedCommonHeader *commonHeader;
@property (readonly, nonatomic) _Bool commonHeaderIsSet;
@property (retain, nonatomic) TFSScribeThriftClientNetworkOperation *operation;
@property (readonly, nonatomic) _Bool operationIsSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCommonHeader:(id)header operation:(id)operation;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)read:(id)read;
- (void)write:(id)write;
- (void)validate;

@end

#endif /* TFSScribeThriftClientNetworkOperationEvent_h */
