//
#ifndef NSKeyedUnarchiverDelegate_Protocol_h
#define NSKeyedUnarchiverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NSKeyedUnarchiverDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (Class)unarchiver:(id)unarchiver cannotDecodeObjectOfClassName:(id)name originalClasses:(id)classes;
- (id)unarchiver:(id)unarchiver didDecodeObject:(id)object;
- (void)unarchiver:(id)unarchiver willReplaceObject:(id)object withObject:(id)object;
- (void)unarchiverWillFinish:(id)finish;
- (void)unarchiverDidFinish:(id)finish;

@end

#endif /* NSKeyedUnarchiverDelegate_Protocol_h */
