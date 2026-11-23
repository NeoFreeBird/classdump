//
#ifndef GADCustomEventExtras_h
#define GADCustomEventExtras_h
@import Foundation;

#include "GADAdNetworkExtras-Protocol.h"

@class NSMutableDictionary, NSObject, NSString;

@interface GADCustomEventExtras : NSObject <GADAdNetworkExtras> {
    /* instance variables */
    NSMutableDictionary *_extras;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)setExtras:(id)extras forLabel:(id)label;
- (id)extrasForLabel:(id)label;
- (void)removeAllExtras;
- (id)allExtras;

@end

#endif /* GADCustomEventExtras_h */
