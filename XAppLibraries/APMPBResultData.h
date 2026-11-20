//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPBResultData_h
#define APMPBResultData_h
@import Foundation;

#include "NANOMessageBase-Protocol.h"

@class NSObject, NSString;

@interface APMPBResultData : NSObject <NANOMessageBase>

@property (readonly, nonatomic) const char * messageID;
@property (readonly, nonatomic) struct { void * *x0; int *x1; char *x2; } * messageInfo;
@property (readonly, nonatomic) void * /* function */ initMessageInfoFn;
@property (readonly, nonatomic) void * /* function */ deallocMessageFieldFn;
@property (readonly, nonatomic) void * /* function */ copyMessageInfoFn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)dealloc;
- (id)initWithMessageInfo:(struct { void * *x0; int *x1; char *x2; } *)info;
- (id)initWithBuffer:(id)buffer;
- (id)protoBuffer;

@end

#endif /* APMPBResultData_h */
