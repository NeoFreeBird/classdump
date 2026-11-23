//
#ifndef T1DeleteContactsOperationDelegate_Protocol_h
#define T1DeleteContactsOperationDelegate_Protocol_h
@import Foundation;

@protocol T1DeleteContactsOperationDelegate

@required

/* required instance methods */
- (void)deleteContactsOperation:(id)operation didDeleteContacts:(id)contacts;
- (void)deleteContactsOperation:(id)operation didFailToDeleteContacts:(id)contacts withError:(id)error;

@optional

@end

#endif /* T1DeleteContactsOperationDelegate_Protocol_h */
