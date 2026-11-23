//
#ifndef TException_h
#define TException_h
@import Foundation;

@class NSException;

@interface TException : NSException

/* class methods */
+ (id)exceptionWithName:(id)name;
+ (id)exceptionWithName:(id)name reason:(id)reason;
+ (id)exceptionWithName:(id)name reason:(id)reason error:(id)error;

/* instance methods */
- (id)description;

@end

#endif /* TException_h */
