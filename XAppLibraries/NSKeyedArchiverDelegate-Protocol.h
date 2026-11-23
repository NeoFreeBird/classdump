//
#ifndef NSKeyedArchiverDelegate_Protocol_h
#define NSKeyedArchiverDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol NSKeyedArchiverDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (id)archiver:(id)archiver willEncodeObject:(id)object;
- (void)archiver:(id)archiver didEncodeObject:(id)object;
- (void)archiver:(id)archiver willReplaceObject:(id)object withObject:(id)object;
- (void)archiverWillFinish:(id)finish;
- (void)archiverDidFinish:(id)finish;

@end

#endif /* NSKeyedArchiverDelegate_Protocol_h */
