//
#ifndef GTMAuthSessionStore_Protocol_h
#define GTMAuthSessionStore_Protocol_h
@import Foundation;

@protocol GTMAuthSessionStore

@required

/* required instance methods */
- (_Bool)saveAuthSession:(id)session error:(id *)error;
- (_Bool)removeAuthSessionWithError:(id *)error;
- (id)retrieveAuthSessionWithError:(id *)error;

@optional

@end

#endif /* GTMAuthSessionStore_Protocol_h */
