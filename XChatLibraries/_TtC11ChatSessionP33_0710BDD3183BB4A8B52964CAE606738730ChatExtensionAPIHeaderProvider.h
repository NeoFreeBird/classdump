//
#ifndef _TtC11ChatSessionP33_0710BDD3183BB4A8B52964CAE606738730ChatExtensionAPIHeaderProvider_h
#define _TtC11ChatSessionP33_0710BDD3183BB4A8B52964CAE606738730ChatExtensionAPIHeaderProvider_h
@import Foundation;

#include "TFSAPIHeaderProvider-Protocol.h"

@class NSObject;

@interface ChatSession.(ChatExtensionAPIHeaderProvider in _0710BDD3183BB4A8B52964CAE6067387) : NSObject <TFSAPIHeaderProvider> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 headerProvider;
}

/* instance methods */
- (void)commonHeaderFieldsForAPIRequestsWithAccountID:(id)id completionBlock:(id /* block */)block;
- (void)attestRequestPayload:(id)payload accountID:(id)id completionBlock:(id /* block */)block;
- (id)init;

@end

#endif /* _TtC11ChatSessionP33_0710BDD3183BB4A8B52964CAE606738730ChatExtensionAPIHeaderProvider_h */
