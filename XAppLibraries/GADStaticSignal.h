//
#ifndef GADStaticSignal_h
#define GADStaticSignal_h
@import Foundation;

#include "GADSignal-Protocol.h"

@class NSDictionary, NSObject, NSString;

@interface GADStaticSignal : NSObject <GADSignal> {
    /* instance variables */
    NSDictionary *_dictionary;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (void)addSignalEntriesToMutableDictionary:(id)dictionary;

@end

#endif /* GADStaticSignal_h */
