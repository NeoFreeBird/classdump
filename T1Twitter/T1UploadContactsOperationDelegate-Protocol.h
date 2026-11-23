//
#ifndef T1UploadContactsOperationDelegate_Protocol_h
#define T1UploadContactsOperationDelegate_Protocol_h
@import Foundation;

@protocol T1UploadContactsOperationDelegate

@required

/* required instance methods */
- (void)uploadContactsOperation:(id)operation didUploadContacts:(id)contacts;
- (void)uploadContactsOperation:(id)operation didFailToUploadContacts:(id)contacts withError:(id)error;

@optional

@end

#endif /* T1UploadContactsOperationDelegate_Protocol_h */
