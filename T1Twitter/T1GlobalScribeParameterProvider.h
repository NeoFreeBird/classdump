//
#ifndef T1GlobalScribeParameterProvider_h
#define T1GlobalScribeParameterProvider_h
@import Foundation;

#include "TFNTwitterScribeGlobalParameterProvider-Protocol.h"

@class NSObject, NSString;

@interface T1GlobalScribeParameterProvider : NSObject <TFNTwitterScribeGlobalParameterProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)updateScribeParameters:(id)parameters;

@end

#endif /* T1GlobalScribeParameterProvider_h */
