//
#ifndef TFSModelContextProvider_Protocol_h
#define TFSModelContextProvider_Protocol_h
@import Foundation;

#include "TFSModelContext.h"

@protocol TFSModelContextProvider

@required

@property (nonatomic, readonly) TFSModelContext *modelContext;

@optional

@end

#endif /* TFSModelContextProvider_Protocol_h */
