//
#ifndef TNLTemporaryFile_Protocol_h
#define TNLTemporaryFile_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLTemporaryFile <NSObject>

@required

/* required instance methods */
- (_Bool)moveToPath:(id)path error:(out id *)error;

@optional

@end

#endif /* TNLTemporaryFile_Protocol_h */
