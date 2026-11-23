//
#ifndef TFSOperationDependencyResult_Protocol_h
#define TFSOperationDependencyResult_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSError;

@protocol TFSOperationDependencyResult <NSObject>

@required

@property (readonly) unsigned long long resultState;
@property (readonly) NSError *resultError;

@optional

@end

#endif /* TFSOperationDependencyResult_Protocol_h */
