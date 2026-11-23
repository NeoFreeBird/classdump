//
#ifndef TFNTwitterAccountStateProvider_h
#define TFNTwitterAccountStateProvider_h
@import Foundation;

#include "TFSTwitterAPICommandAccountStateProvider-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterAccountStateProvider : NSObject <TFSTwitterAPICommandAccountStateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)accountStateForAccountID:(id)id;
- (_Bool)isAccountRemovedWithID:(id)id;

@end

#endif /* TFNTwitterAccountStateProvider_h */
