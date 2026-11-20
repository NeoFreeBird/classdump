//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ShareViaDMActionItemDetailsDefaultProvider_h
#define T1ShareViaDMActionItemDetailsDefaultProvider_h
@import Foundation;

#include "T1ShareViaDMActionItemDetailsProvider-Protocol.h"

@class NSObject, NSString;

@interface T1ShareViaDMActionItemDetailsDefaultProvider : NSObject <T1ShareViaDMActionItemDetailsProvider>

@property (copy, nonatomic) NSString *shareText;
@property (copy, nonatomic) NSString *attachmentLink;
@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShareText:(id)text attachmentLink:(id)link;
- (id)initWithShareText:(id)text attachmentLink:(id)link completion:(id /* block */)completion;

@end

#endif /* T1ShareViaDMActionItemDetailsDefaultProvider_h */
