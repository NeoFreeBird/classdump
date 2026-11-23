//
#ifndef GADOMIDObstructionInfo_h
#define GADOMIDObstructionInfo_h
@import Foundation;

#include "GADOMIDFriendlyObstruction.h"

@class NSMutableSet, NSObject;

@interface GADOMIDObstructionInfo : NSObject

@property (readonly, nonatomic) GADOMIDFriendlyObstruction *friendlyObstruction;
@property (readonly, nonatomic) NSMutableSet *sessionIds;

/* instance methods */
- (id)initWithFriendlyObstruction:(id)obstruction;

@end

#endif /* GADOMIDObstructionInfo_h */
