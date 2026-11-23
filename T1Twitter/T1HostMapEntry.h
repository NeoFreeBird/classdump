//
#ifndef T1HostMapEntry_h
#define T1HostMapEntry_h
@import Foundation;

#include "T1HostMapEntry-Protocol.h"

@class NSObject, NSSet, NSString;

@interface T1HostMapEntry : NSObject <T1HostMapEntry>

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSString *mappedHost;
@property (readonly, copy, nonatomic) NSSet *literalPaths;
@property (readonly, copy, nonatomic) NSSet *prefixPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)entryWithHostMapString:(id)string;

/* instance methods */
- (_Bool)doesMatchEverything;
- (_Bool)matchesPath:(id)path;
- (id)initWithHost:(id)host mappedHost:(id)host literalPaths:(id)paths prefixPaths:(id)paths;

@end

#endif /* T1HostMapEntry_h */
