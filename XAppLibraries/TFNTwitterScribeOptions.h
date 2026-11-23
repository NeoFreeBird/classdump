//
#ifndef TFNTwitterScribeOptions_h
#define TFNTwitterScribeOptions_h
@import Foundation;

#include "TFSTwitterLegacyScribeOptions-Protocol.h"

@class NSObject, NSSet, NSString;

@interface TFNTwitterScribeOptions : NSObject <TFSTwitterLegacyScribeOptions>

@property (readonly, nonatomic) _Bool perftownEnabled;
@property (readonly, nonatomic) NSSet *perftownEventAllowList;
@property (readonly, nonatomic) NSSet *legacyClientEventDenyList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPerftownEnabled:(_Bool)enabled perftownEventAllowList:(id)list legacyClientEventDenyList:(id)list;
- (_Bool)isPerftownEnabled;

@end

#endif /* TFNTwitterScribeOptions_h */
