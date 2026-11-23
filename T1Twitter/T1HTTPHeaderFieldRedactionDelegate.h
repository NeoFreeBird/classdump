//
#ifndef T1HTTPHeaderFieldRedactionDelegate_h
#define T1HTTPHeaderFieldRedactionDelegate_h
@import Foundation;

#include "TNUHTTPHeaderFieldRedactionDelegate-Protocol.h"

@class NSObject, NSSet, NSString;

@interface T1HTTPHeaderFieldRedactionDelegate : NSObject <TNUHTTPHeaderFieldRedactionDelegate> {
    /* instance variables */
    NSSet *_keys;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithKeysForRedaction:(id)redaction;
- (_Bool)har_shouldRedactHTTPHeaderField:(id)field;

@end

#endif /* T1HTTPHeaderFieldRedactionDelegate_h */
