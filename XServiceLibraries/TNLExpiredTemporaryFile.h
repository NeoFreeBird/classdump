//
#ifndef TNLExpiredTemporaryFile_h
#define TNLExpiredTemporaryFile_h
@import Foundation;

#include "TNLTemporaryFile-Protocol.h"

@class NSObject, NSString;

@interface TNLExpiredTemporaryFile : NSObject <TNLTemporaryFile>

@property (readonly, nonatomic) NSString *path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (_Bool)moveToPath:(id)path error:(out id *)error;

@end

#endif /* TNLExpiredTemporaryFile_h */
