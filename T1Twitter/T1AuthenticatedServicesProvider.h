//
#ifndef T1AuthenticatedServicesProvider_h
#define T1AuthenticatedServicesProvider_h
@import Foundation;

#include "TFSTwitterAuthenticatedScribeDelegate-Protocol.h"
#include "TPSHostAuthenticatedServicesProvider-Protocol.h"

@class NSObject, NSString;

@interface T1AuthenticatedServicesProvider : NSObject <TPSHostAuthenticatedServicesProvider> {
    /* instance variables */
    id <TFSTwitterAuthenticatedScribeDelegate> _scribeDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithScribeDelegate:(id)delegate;
- (id)APICommandLoader;
- (id)APICommandContext;
- (id)scribeDelegate;
- (id)scribeDelegateForAccountID:(id)id;

@end

#endif /* T1AuthenticatedServicesProvider_h */
