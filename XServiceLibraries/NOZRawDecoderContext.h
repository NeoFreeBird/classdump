//
#ifndef NOZRawDecoderContext_h
#define NOZRawDecoderContext_h
@import Foundation;

#include "NOZDecoderContext-Protocol.h"

@class NSObject, NSString;

@interface NOZRawDecoderContext : NSObject <NOZDecoderContext> {
    /* instance variables */
    id /* block */ _flushCallback;
}

@property (nonatomic) _Bool hasFinished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* NOZRawDecoderContext_h */
