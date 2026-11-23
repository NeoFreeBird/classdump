//
#ifndef NANOMessageBase_Protocol_h
#define NANOMessageBase_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NANOMessageBase <NSObject>

@required

@property (readonly, nonatomic) const char * messageID;
@property (readonly, nonatomic) struct { void * *x0; int *x1; char *x2; } * messageInfo;
@property (readonly, nonatomic) void * /* function */ initMessageInfoFn;
@property (readonly, nonatomic) void * /* function */ deallocMessageFieldFn;
@property (readonly, nonatomic) void * /* function */ copyMessageInfoFn;

/* required instance methods */
- (id)initWithMessageInfo:(struct { void * *x0; int *x1; char *x2; } *)info;
- (id)initWithBuffer:(id)buffer;
- (id)protoBuffer;

@optional

@end

#endif /* NANOMessageBase_Protocol_h */
