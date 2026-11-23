//
#ifndef TFSTwitterAPICommand_UserAssimilation_h
#define TFSTwitterAPICommand_UserAssimilation_h
@import Foundation;

@interface TFSTwitterAPICommand (UserAssimilation)

/* instance methods */
- (void)completeWithResponse:(id)response byAssimilatingUsers:(id)users intoModel:(id)model;
- (void)completeWithResponse:(id)response byAssimilatingUser:(id)user intoModel:(id)model;

@end

#endif /* TFSTwitterAPICommand_UserAssimilation_h */
