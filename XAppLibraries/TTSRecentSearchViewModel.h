//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSRecentSearchViewModel_h
#define TTSRecentSearchViewModel_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSObject;

@interface TTSRecentSearchViewModel : NSObject

@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> user;

/* instance methods */
- (id)initWithUser:(id)user;
- (id)init;

@end

#endif /* TTSRecentSearchViewModel_h */
