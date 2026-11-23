//
#ifndef TFSMutableBidirectionalMapLeftToRightScripter_h
#define TFSMutableBidirectionalMapLeftToRightScripter_h
@import Foundation;

#include "TFSMutableBidirectionalMap.h"
#include "TFSMutableKeySubscripting-Protocol.h"

@class NSObject, NSString;

@interface TFSMutableBidirectionalMapLeftToRightScripter : NSObject <TFSMutableKeySubscripting>

@property (nonatomic) TFSMutableBidirectionalMap *map;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)objectForKeyedSubscript:(id)subscript;
- (void)setObject:(id)object forKeyedSubscript:(id)subscript;

@end

#endif /* TFSMutableBidirectionalMapLeftToRightScripter_h */
