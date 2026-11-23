//
#ifndef TFSTwitterAPIRequestContext_h
#define TFSTwitterAPIRequestContext_h
@import Foundation;

#include "TFSTwitterAPIConfiguration-Protocol.h"
#include "TFSTwitterAPIRequestSourceInfo.h"

@class NSObject;

@interface TFSTwitterAPIRequestContext : NSObject

@property (readonly, nonatomic) id <TFSTwitterAPIConfiguration> configuration;
@property (readonly, nonatomic) TFSTwitterAPIRequestSourceInfo *sourceInfo;

/* instance methods */
- (id)initWithConfiguration:(id)configuration sourceInfo:(id)info;

@end

#endif /* TFSTwitterAPIRequestContext_h */
