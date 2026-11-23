//
#ifndef T1UploadContactsCommandFactory_Protocol_h
#define T1UploadContactsCommandFactory_Protocol_h
@import Foundation;

@protocol T1UploadContactsCommandFactory

@required

/* required instance methods */
- (id)createUploadCommand:(id)command isReupload:(_Bool)reupload uploadProgressBlock:(id /* block */)block completionBlock:(id /* block */)block;

@optional

@end

#endif /* T1UploadContactsCommandFactory_Protocol_h */
