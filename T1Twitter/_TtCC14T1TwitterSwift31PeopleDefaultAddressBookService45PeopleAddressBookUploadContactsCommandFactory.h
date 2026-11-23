//
#ifndef _TtCC14T1TwitterSwift31PeopleDefaultAddressBookService45PeopleAddressBookUploadContactsCommandFactory_h
#define _TtCC14T1TwitterSwift31PeopleDefaultAddressBookService45PeopleAddressBookUploadContactsCommandFactory_h
@import Foundation;

#include "T1UploadContactsCommandFactory-Protocol.h"

@class _$sSS, _$sSo27TFSTwitterAPICommandContext_p, _TtCs12_SwiftObject;

@interface T1TwitterSwift.PeopleDefaultAddressBookService.PeopleAddressBookUploadContactsCommandFactory : Swift._SwiftObject <T1UploadContactsCommandFactory> { // (Swift)
    /* instance variables */
    Swift.String accountID;
    __C.TFSTwitterAPICommandContext context;
}

/* instance methods */
- (id)createUploadCommand:(id)command isReupload:(_Bool)reupload uploadProgressBlock:(id /* block */)block completionBlock:(id /* block */)block;

@end

#endif /* _TtCC14T1TwitterSwift31PeopleDefaultAddressBookService45PeopleAddressBookUploadContactsCommandFactory_h */
