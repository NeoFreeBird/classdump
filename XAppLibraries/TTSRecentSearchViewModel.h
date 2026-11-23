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
