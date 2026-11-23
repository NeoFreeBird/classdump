//
#ifndef _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16617ChatScribeOptions_h
#define _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16617ChatScribeOptions_h
@import Foundation;

#include "TFSTwitterLegacyScribeOptions-Protocol.h"

@class NSObject, NSSet;

@interface ChatSession.(ChatScribeOptions in _84B447BBA1E540381DCA2D673D04E166) : NSObject <TFSTwitterLegacyScribeOptions> { // (Swift)
    /* instance variables */
    _Bool isPerftownEnabled;
}

@property (nonatomic, readonly) _Bool perftownEnabled;
@property (nonatomic, readonly) NSSet *perftownEventAllowList;
@property (nonatomic, readonly) NSSet *legacyClientEventDenyList;

/* instance methods */
- (_Bool)isPerftownEnabled;
- (id)init;

@end

#endif /* _TtC11ChatSessionP33_84B447BBA1E540381DCA2D673D04E16617ChatScribeOptions_h */
