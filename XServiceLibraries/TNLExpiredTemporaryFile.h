//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
