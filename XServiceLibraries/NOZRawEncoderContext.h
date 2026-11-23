//
#ifndef NOZRawEncoderContext_h
#define NOZRawEncoderContext_h
@import Foundation;

#include "NOZEncoderContext-Protocol.h"

@class NSObject, NSString;

@interface NOZRawEncoderContext : NSObject <NOZEncoderContext> {
    /* instance variables */
    id /* block */ _flushCallback;
}

@property (nonatomic) _Bool encodedDataWasText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* NOZRawEncoderContext_h */
