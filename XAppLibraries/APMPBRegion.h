//
#ifndef APMPBRegion_h
#define APMPBRegion_h
@import Foundation;

#include "NANOMessageBase-Protocol.h"

@class NSObject, NSString;

@interface APMPBRegion : NSObject <NANOMessageBase>

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

#endif /* APMPBRegion_h */
